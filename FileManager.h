#pragma once
#include "Structs.h"
#include "List.h"
#include <fstream>
#include <iostream>
#include <direct.h>

using namespace std;

// =====================================================
// FileManager.h — чтение и запись всех файлов
// =====================================================
//
// Файлы хранятся в папке data\ рядом с программой.
//
// Файлы:
//   data\accounts.bin      — аккаунты (бинарный)
//   data\players.txt       — игроки   (текстовый)
//   data\tournaments.txt   — турниры  (текстовый)
//   data\blacklist.txt     — баны     (текстовый)
//   data\disciplines.txt   — дисциплины (текстовый)
// =====================================================


// Создаём папку data если её ещё нет
static void CreateDataFolder()
{
	CreateDirectoryA("data", NULL);
}

// =====================================================
// АККАУНТЫ — бинарный файл accounts.bin
// =====================================================

static void SaveAllAccounts(AccountList* list)
{
	ofstream accountFile;
	accountFile.open("data\\accounts.bin", ios::out | ios::binary);

	if (accountFile.is_open() == false)
		return;

	AccountNode* current = list->head;
	while (current != NULL)
	{
		accountFile.write((char*)&current->data, sizeof(Account));
		current = current->next;
	}

	accountFile.close();
}

static void LoadAllAccounts(AccountList* list)
{
	ClearAccountList(list);

	ifstream accountFile;
	accountFile.open("data\\accounts.bin", ios::in | ios::binary);

	if (accountFile.is_open() == false)
		return;

	Account acc = {};

	while (accountFile.read((char*)&acc, sizeof(Account)))
	{
		AddAccount(list, acc);
	}

	accountFile.close();
}

static void CreateDefaultAccounts(AccountList* list)
{
	if (list->head != NULL)
		return;

	Account admin = {};
	admin.id = 1;
	admin.isBanned = false;
	strcpy_s(admin.login, "admin");
	strcpy_s(admin.password, "admin123");
	strcpy_s(admin.role, "admin");
	AddAccount(list, admin);

	Account org = {};
	org.id = 2;
	org.isBanned = false;
	strcpy_s(org.login, "org");
	strcpy_s(org.password, "org123");
	strcpy_s(org.role, "organizer");
	AddAccount(list, org);

	Account player = {};
	player.id = 3;
	player.isBanned = false;
	strcpy_s(player.login, "player");
	strcpy_s(player.password, "play123");
	strcpy_s(player.role, "player");
	AddAccount(list, player);

	SaveAllAccounts(list);
}


// =====================================================
// ИГРОКИ — текстовый файл players.txt
// =====================================================

static void SaveAllPlayers(PlayerList* list)
{
	ofstream playersFile;
	playersFile.open("data\\players.txt", ios::out);

	if (playersFile.is_open() == false)
		return;

	PlayerNode* current = list->head;
	while (current != NULL)
	{
		Player p = current->data;

		playersFile << p.id << endl;
		playersFile << p.accountId << endl;
		playersFile << p.nickname << endl;
		playersFile << p.fullName << endl;
		playersFile << p.age << endl;
		playersFile << p.rank << endl;
		playersFile << p.winrate << endl;
		playersFile << p.kda << endl;
		playersFile << p.totalGames << endl;
		playersFile << p.totalWins << endl;
		playersFile << p.totalKills << endl;
		playersFile << p.totalDeaths << endl;
		playersFile << p.totalAssists << endl;
		playersFile << "---" << endl;

		current = current->next;
	}

	playersFile.close();
}

static void LoadAllPlayers(PlayerList* list)
{
	ClearPlayerList(list);

	ifstream playersFile;
	playersFile.open("data\\players.txt", ios::in);

	if (playersFile.is_open() == false)
		return;

	Player p = {};

	int fieldIndex = 0;
	char line[256];

	while (playersFile.eof() == false)
	{
		playersFile.getline(line, sizeof(line));

		if (strlen(line) == 0)
			continue;

		// Встретили разделитель — одна запись полностью прочитана
		// Добавляем её в список и начинаем читать следующую
		if (strcmp(line, "---") == 0)
		{
			AddPlayer(list, p);
			p = {};        // сбрасываем структуру для следующей записи
			fieldIndex = 0;
			continue;
		}


		switch (fieldIndex)
		{
		case 0:  p.id = atoi(line); break; // atoi переводит строку в число
		case 1:  p.accountId = atoi(line); break;
		case 2:  strcpy_s(p.nickname, line); break;
		case 3:  strcpy_s(p.fullName, line); break;
		case 4:  p.age = atoi(line); break;
		case 5:  strcpy_s(p.rank, line); break;
		case 6:  p.winrate = atof(line); break; // atof переводит строку в дробное число
		case 7:  p.kda = atof(line); break;
		case 8:  p.totalGames = atoi(line); break;
		case 9:  p.totalWins = atoi(line); break;
		case 10: p.totalKills = atoi(line); break;
		case 11: p.totalDeaths = atoi(line); break;
		case 12: p.totalAssists = atoi(line); break;
		}

		fieldIndex++;
	}

	playersFile.close();
}


// =====================================================
// ТУРНИРЫ — текстовый файл tournaments.txt
// =====================================================

static void SaveAllTournaments(TournamentList* list)
{
	ofstream tournamentsFile;
	tournamentsFile.open("data\\tournaments.txt", ios::out);

	if (tournamentsFile.is_open() == false)
		return;

	TournamentNode* current = list->head;
	while (current != NULL)
	{
		Tournament t = current->data;

		tournamentsFile << t.id << endl;
		tournamentsFile << t.organizerId << endl;
		tournamentsFile << t.title << endl;
		tournamentsFile << t.discipline << endl;
		tournamentsFile << t.format << endl;
		tournamentsFile << t.prizePool << endl;
		tournamentsFile << t.date << endl;
		tournamentsFile << t.status << endl;
		tournamentsFile << t.maxPlayers << endl;
		tournamentsFile << t.currentPlayers << endl;
		tournamentsFile << "---" << endl;

		current = current->next;
	}

	tournamentsFile.close();
}

static void LoadAllTournaments(TournamentList* list)
{
	ClearTournamentList(list);

	ifstream tournamentsFile;
	tournamentsFile.open("data\\tournaments.txt", ios::in);

	if (tournamentsFile.is_open() == false)
		return;

	Tournament t = {};
	int fieldIndex = 0;
	char line[256];

	while (tournamentsFile.eof() == false)
	{
		tournamentsFile.getline(line, sizeof(line));

		if (strlen(line) == 0)
			continue;

		if (strcmp(line, "---") == 0)
		{
			AddTournament(list, t);
			t = {};
			fieldIndex = 0;
			continue;
		}

		switch (fieldIndex)
		{
		case 0: t.id = atoi(line); break;
		case 1: t.organizerId = atoi(line); break;
		case 2: strcpy_s(t.title, line);  break;
		case 3: strcpy_s(t.discipline, line);  break;
		case 4: strcpy_s(t.format, line);  break;
		case 5: t.prizePool = atof(line); break;
		case 6: strcpy_s(t.date, line);  break;
		case 7: strcpy_s(t.status, line);  break;
		case 8: t.maxPlayers = atoi(line); break;
		case 9: t.currentPlayers = atoi(line); break;
		}

		fieldIndex++;
	}

	tournamentsFile.close();
}


// =====================================================
// БАНЫ — текстовый файл blacklist.txt
// =====================================================

static void SaveAllBans(BanList* list)
{
	ofstream bansFile;
	bansFile.open("data\\blacklist.txt", ios::out);

	if (bansFile.is_open() == false)
		return;

	BanNode* current = list->head;
	while (current != NULL)
	{
		Ban b = current->data;

		bansFile << b.id << endl;
		bansFile << b.targetId << endl;
		bansFile << b.issuedBy << endl;
		bansFile << b.reason << endl;
		bansFile << b.expireDate << endl;
		bansFile << (b.isActive ? 1 : 0) << endl;
		bansFile << "---" << endl;

		current = current->next;
	}

	bansFile.close();
}

static void LoadAllBans(BanList* list)
{
	ClearBanList(list);

	ifstream bansFile;
	bansFile.open("data\\blacklist.txt", ios::in);

	if (bansFile.is_open() == false)
		return;

	Ban b = {};
	int fieldIndex = 0;
	char line[256];

	while (bansFile.eof() == false)
	{
		bansFile.getline(line, sizeof(line));

		if (strlen(line) == 0)
			continue;

		if (strcmp(line, "---") == 0)
		{
			AddBan(list, b);
			b = {};
			fieldIndex = 0;
			continue;
		}

		switch (fieldIndex)
		{
		case 0: b.id = atoi(line);        break;
		case 1: b.targetId = atoi(line);        break;
		case 2: b.issuedBy = atoi(line);        break;
		case 3: strcpy_s(b.reason, line);   break;
		case 4: strcpy_s(b.expireDate, line);   break;
		case 5: b.isActive = (atoi(line) == 1); break;
		}

		fieldIndex++;
	}

	bansFile.close();
}


// =====================================================
// ДИСЦИПЛИНЫ — текстовый файл disciplines.txt
// =====================================================

static void SaveAllDisciplines(DisciplineList* list)
{
	ofstream disciplinesFile;
	disciplinesFile.open("data\\disciplines.txt", ios::out);

	if (disciplinesFile.is_open() == false)
		return;

	DisciplineNode* current = list->head;
	while (current != NULL)
	{
		disciplinesFile << current->data.id << endl;
		disciplinesFile << current->data.name << endl;
		disciplinesFile << "---" << endl;

		current = current->next;
	}

	disciplinesFile.close();
}

static void LoadAllDisciplines(DisciplineList* list)
{
	ClearDisciplineList(list);

	ifstream disciplinesFile;
	disciplinesFile.open("data\\disciplines.txt", ios::in);

	if (disciplinesFile.is_open() == false)
		return;

	Discipline d = {};
	int fieldIndex = 0;
	char line[256];

	while (disciplinesFile.eof() == false)
	{
		disciplinesFile.getline(line, sizeof(line));

		if (strlen(line) == 0)
			continue;

		if (strcmp(line, "---") == 0)
		{
			AddDiscipline(list, d);
			d = {};
			fieldIndex = 0;
			continue;
		}

		switch (fieldIndex)
		{
		case 0: d.id = atoi(line);      break;
		case 1: strcpy_s(d.name, line); break;
		}

		fieldIndex++;
	}

	disciplinesFile.close();
}

static void CreateDefaultDisciplines(DisciplineList* list)
{
	if (list->head != NULL)
		return;

	const char* defaults[] = { "Dota 2", "Counter-Strike 2", "Valorant" };
	for (int i = 0; i < 3; i++)
	{
		Discipline d = {};
		d.id = i + 1;
		strcpy_s(d.name, defaults[i]);
		AddDiscipline(list, d);
	}

	SaveAllDisciplines(list);
}

// =====================================================
// МАТЧИ — текстовый файл matches.txt
// =====================================================

static void SaveAllMatches(MatchList* list)
{
	ofstream matchesFile;
	matchesFile.open("data\\matches.txt", ios::out);

	if (matchesFile.is_open() == false)
		return;

	MatchNode* current = list->head;
	while (current != NULL)
	{
		Match m = current->data;

		matchesFile << m.id << endl;
		matchesFile << m.tournamentId << endl;
		matchesFile << m.player1Id << endl;
		matchesFile << m.player2Id << endl;
		matchesFile << m.winnerId << endl;
		matchesFile << m.date << endl;
		matchesFile << m.status << endl;
		matchesFile << m.score1 << endl;
		matchesFile << m.score2 << endl;
		matchesFile << "---" << endl;

		current = current->next;
	}

	matchesFile.close();
}

static void LoadAllMatches(MatchList* list)
{
	ClearMatchList(list);

	ifstream matchesFile;
	matchesFile.open("data\\matches.txt", ios::in);

	if (matchesFile.is_open() == false)
		return;

	Match m = {};
	int fieldIndex = 0;
	char line[256];

	while (matchesFile.eof() == false)
	{
		matchesFile.getline(line, sizeof(line));

		if (strlen(line) == 0)
			continue;

		if (strcmp(line, "---") == 0)
		{
			AddMatch(list, m);
			m = {};
			fieldIndex = 0;
			continue;
		}

		switch (fieldIndex)
		{
		case 0: m.id = atoi(line); break;
		case 1: m.tournamentId = atoi(line); break;
		case 2: m.player1Id = atoi(line); break;
		case 3: m.player2Id = atoi(line); break;
		case 4: m.winnerId = atoi(line); break;
		case 5: strcpy_s(m.date, line);    break;
		case 6: strcpy_s(m.status, line);    break;
		case 7: m.score1 = atoi(line); break;
		case 8: m.score2 = atoi(line); break;
		}

		fieldIndex++;
	}

	matchesFile.close();
}

static void SaveAllOrganizers(OrganizerList* list)
{
	ofstream file;
	file.open("data\\organizers.txt", ios::out);
	if (!file.is_open()) return;

	OrganizerNode* cur = list->head;
	while (cur != NULL) {
		Organizer o = cur->data;
		file << o.id << endl;
		file << o.accountId << endl;
		file << o.orgName << endl;
		file << o.contacts << endl;
		file << o.trustRating << endl;
		file << o.eventsCount << endl;
		file << "---" << endl;
		cur = cur->next;
	}
	file.close();
}

static void LoadAllOrganizers(OrganizerList* list)
{
	ClearOrganizerList(list);

	ifstream file;
	file.open("data\\organizers.txt", ios::in);
	if (!file.is_open()) return;

	Organizer o = {};
	int fieldIndex = 0;
	char line[256];

	while (file.eof() == false) {
		file.getline(line, sizeof(line));
		if (strlen(line) == 0) continue;

		if (strcmp(line, "---") == 0) {
			AddOrganizer(list, o);
			o = {};
			fieldIndex = 0;
			continue;
		}

		switch (fieldIndex) {
		case 0: o.id = atoi(line); break;
		case 1: o.accountId = atoi(line); break;
		case 2: strcpy_s(o.orgName, line); break;
		case 3: strcpy_s(o.contacts, line); break;
		case 4: o.trustRating = atof(line); break;
		case 5: o.eventsCount = atoi(line); break;
		}
		fieldIndex++;
	}
	file.close();
}

static void CreateDefaultOrganizer(OrganizerList* list)
{
	if (list->head != NULL) return;

	Organizer o = {};
	o.id = 1;
	o.accountId = 3; // accountId аккаунта org
	strcpy_s(o.orgName, "Киберспорт Клуб");
	strcpy_s(o.contacts, "org@email.com");
	o.trustRating = 5.0;
	o.eventsCount = 0;
	AddOrganizer(list, o);
	SaveAllOrganizers(list);
}