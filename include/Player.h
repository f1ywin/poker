#pragma once
#ifndef PLAYER_H_
#include <string>
#include <memory>
#include "../include/Cards.h"
class Player
{
public:
	// 玩家性别
	enum Sex
	{
		Man,
		Woman
	};
	// 玩家角色
	enum Role
	{
		Lord,
		Farmer
	};
	// 玩家类型
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
	* 设置是否胜利，并返回当前是否胜利
	*/ 
	bool SetIsWin(const bool is_win);

	std::string GetName() const;
	Sex GetSex() const;
	Role GetRole() const;
	long GetMoney() const;
	Type GetType() const;
	// 获取是否胜利
	bool GetIsWin() const;
	std::shared_ptr<Player> GetPrevPlayer() const;
	std::shared_ptr<Player> GetNextPlayer() const;

	// 抢地主
	void GrabLordBet(const int point);
	// 发牌
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