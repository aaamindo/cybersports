#include "List.h"

// =====================================================
// ĞÅÀËÈÇÀÖÈß — ÑÏÈÑÎÊ ÀÊÊÀÓÍÒÎÂ (Account)
// =====================================================

void InitAccountList(AccountList* list)
{
	list->head = nullptr;
	list->tail = nullptr;
}

void AddAccount(AccountList* list, Account acc)
{
	AccountNode* newNode = new AccountNode;
	newNode->data = acc;
	newNode->next = nullptr;
	newNode->prev = nullptr;

	if (list->head == nullptr)
	{
		list->head = newNode;
		list->tail = newNode;
	}
	else
	{
		newNode->prev = list->tail;
		list->tail->next = newNode;
		list->tail = newNode;
	}
}

void RemoveAccount(AccountList* list, int id)
{
	AccountNode* current = list->head;

	while (current != nullptr)
	{
		if (current->data.id == id)
		{
			if (current->prev != nullptr)
				current->prev->next = current->next;
			else
				list->head = current->next;

			if (current->next != nullptr)
				current->next->prev = current->prev;
			else
				list->tail = current->prev;

			delete current;
			return;
		}
		current = current->next;
	}
}

AccountNode* FindAccountById(AccountList* list, int id)
{
	AccountNode* current = list->head;

	while (current != nullptr)
	{
		if (current->data.id == id)
			return current;

		current = current->next;
	}

	return nullptr;
}

AccountNode* FindAccountByLoginPass(AccountList* list, const char* login, const char* password)
{
	AccountNode* current = list->head;

	while (current != nullptr)
	{
		if (strcmp(current->data.login, login) == 0 &&
			strcmp(current->data.password, password) == 0)
		{
			return current;
		}
		current = current->next;
	}

	return nullptr;
}

void ClearAccountList(AccountList* list)
{
	AccountNode* current = list->head;

	while (current != nullptr)
	{
		AccountNode* next = current->next;
		delete current;
		current = next;
	}

	list->head = nullptr;
	list->tail = nullptr;
}

int CountAccounts(AccountList* list)
{
	int count = 0;
	AccountNode* current = list->head;

	while (current != nullptr)
	{
		count++;
		current = current->next;
	}

	return count;
}


// =====================================================
// ĞÅÀËÈÇÀÖÈß — ÑÏÈÑÎÊ ÈÃĞÎÊÎÂ (Player)
// =====================================================

void InitPlayerList(PlayerList* list)
{
	list->head = nullptr;
	list->tail = nullptr;
}

void AddPlayer(PlayerList* list, Player p)
{
	PlayerNode* newNode = new PlayerNode;
	newNode->data = p;
	newNode->next = nullptr;
	newNode->prev = nullptr;

	if (list->head == nullptr)
	{
		list->head = newNode;
		list->tail = newNode;
	}
	else
	{
		newNode->prev = list->tail;
		list->tail->next = newNode;
		list->tail = newNode;
	}
}

void RemovePlayer(PlayerList* list, int id)
{
	PlayerNode* current = list->head;

	while (current != nullptr)
	{
		if (current->data.id == id)
		{
			if (current->prev != nullptr)
				current->prev->next = current->next;
			else
				list->head = current->next;

			if (current->next != nullptr)
				current->next->prev = current->prev;
			else
				list->tail = current->prev;

			delete current;
			return;
		}
		current = current->next;
	}
}

PlayerNode* FindPlayerById(PlayerList* list, int id)
{
	PlayerNode* current = list->head;

	while (current != nullptr)
	{
		if (current->data.id == id)
			return current;

		current = current->next;
	}

	return nullptr;
}

PlayerNode* FindPlayerByNickname(PlayerList* list, const char* nickname)
{
	PlayerNode* current = list->head;

	while (current != nullptr)
	{
		if (strcmp(current->data.nickname, nickname) == 0)
			return current;

		current = current->next;
	}

	return nullptr;
}

void ClearPlayerList(PlayerList* list)
{
	PlayerNode* current = list->head;

	while (current != nullptr)
	{
		PlayerNode* next = current->next;
		delete current;
		current = next;
	}

	list->head = nullptr;
	list->tail = nullptr;
}

int CountPlayers(PlayerList* list)
{
	int count = 0;
	PlayerNode* current = list->head;

	while (current != nullptr)
	{
		count++;
		current = current->next;
	}

	return count;
}


// =====================================================
// ĞÅÀËÈÇÀÖÈß — ÑÏÈÑÎÊ ÒÓĞÍÈĞÎÂ (Tournament)
// =====================================================

void InitTournamentList(TournamentList* list)
{
	list->head = nullptr;
	list->tail = nullptr;
}

void AddTournament(TournamentList* list, Tournament t)
{
	TournamentNode* newNode = new TournamentNode;
	newNode->data = t;
	newNode->next = nullptr;
	newNode->prev = nullptr;

	if (list->head == nullptr)
	{
		list->head = newNode;
		list->tail = newNode;
	}
	else
	{
		newNode->prev = list->tail;
		list->tail->next = newNode;
		list->tail = newNode;
	}
}

void RemoveTournament(TournamentList* list, int id)
{
	TournamentNode* current = list->head;

	while (current != nullptr)
	{
		if (current->data.id == id)
		{
			if (current->prev != nullptr)
				current->prev->next = current->next;
			else
				list->head = current->next;

			if (current->next != nullptr)
				current->next->prev = current->prev;
			else
				list->tail = current->prev;

			delete current;
			return;
		}
		current = current->next;
	}
}

TournamentNode* FindTournamentById(TournamentList* list, int id)
{
	TournamentNode* current = list->head;

	while (current != nullptr)
	{
		if (current->data.id == id)
			return current;

		current = current->next;
	}

	return nullptr;
}

void ClearTournamentList(TournamentList* list)
{
	TournamentNode* current = list->head;

	while (current != nullptr)
	{
		TournamentNode* next = current->next;
		delete current;
		current = next;
	}

	list->head = nullptr;
	list->tail = nullptr;
}

int CountTournaments(TournamentList* list)
{
	int count = 0;
	TournamentNode* current = list->head;

	while (current != nullptr)
	{
		count++;
		current = current->next;
	}

	return count;
}


// =====================================================
// ĞÅÀËÈÇÀÖÈß — ÑÏÈÑÎÊ ÁÀÍÎÂ (Ban)
// =====================================================

void InitBanList(BanList* list)
{
	list->head = nullptr;
	list->tail = nullptr;
}

void AddBan(BanList* list, Ban b)
{
	BanNode* newNode = new BanNode;
	newNode->data = b;
	newNode->next = nullptr;
	newNode->prev = nullptr;

	if (list->head == nullptr)
	{
		list->head = newNode;
		list->tail = newNode;
	}
	else
	{
		newNode->prev = list->tail;
		list->tail->next = newNode;
		list->tail = newNode;
	}
}

BanNode* FindActiveBan(BanList* list, int targetId)
{
	BanNode* current = list->head;

	while (current != nullptr)
	{
		if (current->data.targetId == targetId &&
			current->data.isActive == true)
		{
			return current;
		}
		current = current->next;
	}

	return nullptr;
}

void ClearBanList(BanList* list)
{
	BanNode* current = list->head;

	while (current != nullptr)
	{
		BanNode* next = current->next;
		delete current;
		current = next;
	}

	list->head = nullptr;
	list->tail = nullptr;
}

void InitDisciplineList(DisciplineList* list)
{
	list->head = nullptr;
	list->tail = nullptr;
}

void AddDiscipline(DisciplineList* list, Discipline d)
{
	DisciplineNode* node = new DisciplineNode;
	node->data = d;
	node->next = nullptr;
	node->prev = nullptr;

	if (list->head == nullptr) {
		list->head = node;
		list->tail = node;
	}
	else {
		node->prev = list->tail;
		list->tail->next = node;
		list->tail = node;
	}
}

void RemoveDiscipline(DisciplineList* list, int id)
{
	DisciplineNode* cur = list->head;
	while (cur != nullptr) {
		if (cur->data.id == id) {
			if (cur->prev) cur->prev->next = cur->next;
			else           list->head = cur->next;
			if (cur->next) cur->next->prev = cur->prev;
			else           list->tail = cur->prev;
			delete cur;
			return;
		}
		cur = cur->next;
	}
}

void ClearDisciplineList(DisciplineList* list)
{
	DisciplineNode* cur = list->head;
	while (cur != nullptr) {
		DisciplineNode* next = cur->next;
		delete cur;
		cur = next;
	}
	list->head = nullptr;
	list->tail = nullptr;
}

void InitMatchList(MatchList* list)
{
	list->head = nullptr;
	list->tail = nullptr;
}

void AddMatch(MatchList* list, Match m)
{
	MatchNode* node = new MatchNode;
	node->data = m;
	node->prev = nullptr;
	node->next = nullptr;

	if (list->head == nullptr) {
		list->head = node;
		list->tail = node;
	}
	else {
		node->prev = list->tail;
		list->tail->next = node;
		list->tail = node;
	}
}

void RemoveMatch(MatchList* list, int id)
{
	MatchNode* cur = list->head;
	while (cur != nullptr) {
		if (cur->data.id == id) {
			if (cur->prev) cur->prev->next = cur->next;
			else           list->head = cur->next;
			if (cur->next) cur->next->prev = cur->prev;
			else           list->tail = cur->prev;
			delete cur;
			return;
		}
		cur = cur->next;
	}
}

void ClearMatchList(MatchList* list)
{
	MatchNode* cur = list->head;
	while (cur != nullptr) {
		MatchNode* next = cur->next;
		delete cur;
		cur = next;
	}
	list->head = nullptr;
	list->tail = nullptr;
}

void InitOrganizerList(OrganizerList* list)
{
	list->head = nullptr;
	list->tail = nullptr;
}

void AddOrganizer(OrganizerList* list, Organizer o)
{
	OrganizerNode* node = new OrganizerNode;
	node->data = o;
	node->prev = nullptr;
	node->next = nullptr;

	if (list->head == nullptr) {
		list->head = node;
		list->tail = node;
	}
	else {
		node->prev = list->tail;
		list->tail->next = node;
		list->tail = node;
	}
}

void RemoveOrganizer(OrganizerList* list, int id)
{
	OrganizerNode* cur = list->head;
	while (cur != nullptr) {
		if (cur->data.id == id) {
			if (cur->prev) cur->prev->next = cur->next;
			else           list->head = cur->next;
			if (cur->next) cur->next->prev = cur->prev;
			else           list->tail = cur->prev;
			delete cur;
			return;
		}
		cur = cur->next;
	}
}

OrganizerNode* FindOrganizerByAccountId(OrganizerList* list, int accountId)
{
	OrganizerNode* cur = list->head;
	while (cur != nullptr) {
		if (cur->data.accountId == accountId)
			return cur;
		cur = cur->next;
	}
	return nullptr;
}

void ClearOrganizerList(OrganizerList* list)
{
	OrganizerNode* cur = list->head;
	while (cur != nullptr) {
		OrganizerNode* next = cur->next;
		delete cur;
		cur = next;
	}
	list->head = nullptr;
	list->tail = nullptr;
}

// =====================================================
// Ñïèñîê çàÿâîê
// =====================================================

void InitApplicationList(TourApplicationList* list)
{
	list->head = nullptr;
	list->tail = nullptr;
}

void AddApplication(TourApplicationList* list, TourApplication a)
{
	TourApplicationNode* node = new TourApplicationNode;
	node->data = a;
	node->prev = nullptr;
	node->next = nullptr;

	if (list->head == nullptr) {
		list->head = node;
		list->tail = node;
	}
	else {
		node->prev = list->tail;
		list->tail->next = node;
		list->tail = node;
	}
}

void RemoveApplication(TourApplicationList* list, int id)
{
	TourApplicationNode* cur = list->head;
	while (cur != nullptr) {
		if (cur->data.id == id) {
			if (cur->prev) cur->prev->next = cur->next;
			else           list->head = cur->next;
			if (cur->next) cur->next->prev = cur->prev;
			else           list->tail = cur->prev;
			delete cur;
			return;
		}
		cur = cur->next;
	}
}

TourApplicationNode* FindApplicationByPlayerAndTournament(TourApplicationList* list, int playerId, int tournamentId)
{
	TourApplicationNode* cur = list->head;
	while (cur != nullptr) {
		if (cur->data.playerId == playerId &&
			cur->data.tournamentId == tournamentId)
			return cur;
		cur = cur->next;
	}
	return nullptr;
}

void ClearApplicationList(TourApplicationList* list)
{
	TourApplicationNode* cur = list->head;
	while (cur != nullptr) {
		TourApplicationNode* next = cur->next;
		delete cur;
		cur = next;
	}
	list->head = nullptr;
	list->tail = nullptr;
}

int CountApplications(TourApplicationList* list)
{
	int count = 0;
	TourApplicationNode* cur = list->head;
	while (cur != nullptr) {
		count++;
		cur = cur->next;
	}
	return count;
}