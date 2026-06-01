#pragma once
#include "Structs.h"
#include <string.h>

// =====================================================
// List.h — Äâóñâÿçíûå ñïèñêè äëÿ êàæäîé ñòğóêòóğû
// =====================================================


// =====================================================
// ÑÏÈÑÎÊ ÀÊÊÀÓÍÒÎÂ
// =====================================================

struct AccountNode
{
    Account      data;
    AccountNode* prev;
    AccountNode* next;
};

struct AccountList
{
    AccountNode* head;
    AccountNode* tail;
};

void InitAccountList(AccountList* list);
void AddAccount(AccountList* list, Account acc);
void RemoveAccount(AccountList* list, int id);
AccountNode* FindAccountById(AccountList* list, int id);
AccountNode* FindAccountByLoginPass(AccountList* list, const char* login, const char* password);
void ClearAccountList(AccountList* list);
int  CountAccounts(AccountList* list);


// =====================================================
// ÑÏÈÑÎÊ ÈÃĞÎÊÎÂ
// =====================================================

struct PlayerNode
{
    Player      data;
    PlayerNode* prev;
    PlayerNode* next;
};

struct PlayerList
{
    PlayerNode* head;
    PlayerNode* tail;
};

void InitPlayerList(PlayerList* list);
void AddPlayer(PlayerList* list, Player p);
void RemovePlayer(PlayerList* list, int id);
PlayerNode* FindPlayerById(PlayerList* list, int id);
PlayerNode* FindPlayerByNickname(PlayerList* list, const char* nickname);
void ClearPlayerList(PlayerList* list);
int  CountPlayers(PlayerList* list);


// =====================================================
// ÑÏÈÑÎÊ ÒÓĞÍÈĞÎÂ
// =====================================================

struct TournamentNode
{
    Tournament      data;
    TournamentNode* prev;
    TournamentNode* next;
};

struct TournamentList
{
    TournamentNode* head;
    TournamentNode* tail;
};

void InitTournamentList(TournamentList* list);
void AddTournament(TournamentList* list, Tournament t);
void RemoveTournament(TournamentList* list, int id);
TournamentNode* FindTournamentById(TournamentList* list, int id);
void ClearTournamentList(TournamentList* list);
int  CountTournaments(TournamentList* list);


// =====================================================
// ÑÏÈÑÎÊ ÁÀÍÎÂ
// =====================================================

struct BanNode
{
    Ban      data;
    BanNode* prev;
    BanNode* next;
};

struct BanList
{
    BanNode* head;
    BanNode* tail;
};

void InitBanList(BanList* list);
void AddBan(BanList* list, Ban b);
BanNode* FindActiveBan(BanList* list, int targetId);
void ClearBanList(BanList* list);

// =====================================================
// ÑÏÈÑÎÊ ÄÈÑÖÈÏËÈÍ
// =====================================================

struct DisciplineNode
{
    Discipline      data;
    DisciplineNode* prev;
    DisciplineNode* next;
};

struct DisciplineList
{
    DisciplineNode* head;
    DisciplineNode* tail;
};

void InitDisciplineList(DisciplineList* list);
void AddDiscipline(DisciplineList* list, Discipline d);
void RemoveDiscipline(DisciplineList* list, int id);
void ClearDisciplineList(DisciplineList* list);

struct MatchNode
{
    Match      data;
    MatchNode* prev;
    MatchNode* next;
};

struct MatchList
{
    MatchNode* head;
    MatchNode* tail;
};

void InitMatchList(MatchList* list);
void AddMatch(MatchList* list, Match m);
void RemoveMatch(MatchList* list, int id);
void ClearMatchList(MatchList* list);

// =====================================================
// ÑÏÈÑÎÊ ÎĞÃÀÍÈÇÀÒÎĞÎÂ
// =====================================================
struct OrganizerNode
{
    Organizer      data;
    OrganizerNode* prev;
    OrganizerNode* next;
};
struct OrganizerList
{
    OrganizerNode* head;
    OrganizerNode* tail;
};
void InitOrganizerList(OrganizerList* list);
void AddOrganizer(OrganizerList* list, Organizer o);
void RemoveOrganizer(OrganizerList* list, int id);
OrganizerNode* FindOrganizerByAccountId(OrganizerList* list, int accountId);
void ClearOrganizerList(OrganizerList* list);