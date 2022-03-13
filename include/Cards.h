#ifndef CARDS_H_
#define CARDS_H_
#include "card.h"
#include <set>
#include <iostream>

class Cards
{
public:
	Cards()
	{
		this->m_IsShow = false;
	}
	//发牌
	void AddCard(const Card& card);
	void AddCard(const Cards& cards);
	//出牌
	void OutCard(Cards& cards);
	const std::set<Card>& getCards() const 
	{
		return m_cards;
	}
	// 显示所有卡牌
	void ShowCard();
	void SetIsShow(const bool show);
	bool IsShow() const
	{
		return m_IsShow;
	}
private:
	std::set<Card> m_cards;
	bool m_IsShow;
	constexpr static const char* buf_point[14] = { "0","3","4","5","6","7","8","9","10","J","Q","K","小王","大王" };
	constexpr static const char* buf_suit[5] = { "0","#","*","@","&" };
	constexpr static const char* buf_face[1] = { "--" };
};

#endif // !CARDS_H_

