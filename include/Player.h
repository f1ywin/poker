#pragma once
#ifndef PLAYER_H_
#include <string>
#include <memory>
#include "../include/Cards.h"
class Player
{
public:
	// ����Ա�
	enum Sex
	{
		Man,
		Woman
	};
	// ��ҽ�ɫ
	enum Role
	{
		Lord,
		Farmer
	};
	// �������
	enum Type
	{
		Usr,
		Robot
	};
	Player();
	~Player();
	bool SetSex(const Sex sex);
	bool SetRole(const Role role);
	bool SetName(const std::string name);
	bool SetMoney(const long money);
	bool SetType(const Type type);
	bool SetNextPlayer(std::shared_ptr<Player> next_player);
	bool SetPrevPlayer(std::shared_ptr<Player> prev_player);
	/*
	* �����Ƿ�ʤ���������ص�ǰ�Ƿ�ʤ��
	*/ 
	bool SetIsWin(const bool is_win);

	std::string GetName() const;
	Sex GetSex() const;
	Role GetRole() const;
	long GetMoney() const;
	Type GetType() const;
	// ��ȡ�Ƿ�ʤ��
	bool GetIsWin() const;
	std::shared_ptr<Player> GetPrevPlayer() const;
	std::shared_ptr<Player> GetNextPlayer() const;

	// ������
	void GrabLordBet(const int point);
	// ����
	bool StoreDispatchCard(const Card& card);
	bool StoreDispatchCard(const Cards& cards);

	const Cards& GetCards();
private:
	std::string m_name;
	Sex m_sex;
	Role m_role;
	long m_money;
	Type m_type;
	bool m_is_win;
	std::shared_ptr<Player> m_prev_player;
	std::shared_ptr<Player> m_next_player;
	Cards m_cards;
};

#endif // !PLAYER_H_