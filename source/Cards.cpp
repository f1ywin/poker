#include "../include/Cards.h"

void Cards::AddCard(const Card& card)
{
	m_cards.insert(card);
}

void Cards::AddCard(Cards& cards)
{
	for (auto card : cards.getCards())
	{
		m_cards.insert(card);
	}
}

void Cards::OutCard(Cards& cards)
{
	for (std::set<Card>::iterator it = cards.m_cards.begin(); it != cards.m_cards.end(); it++)
	{
		for(std::set<Card>::iterator it2 = this->m_cards.begin(); it2 != m_cards.end(); it2++)
		{
			if (*it == *it2)
			{
				this->m_cards.erase(it);
			}
		}
	}
	
}

void Cards::ShowCard() const
{
	if (this->IsShow())
	{
		for (auto card : m_cards)
		{
			std::cout << buf_suit[card.GetSuit()] << buf_point[card.GetPoint()] << " ";
		}
	}
	else
	{
		int num = m_cards.size();
		for (int i = 0; i < num; ++i)
		{
			std::cout << buf_face[0] << " ";
		}
	}
}

void Cards::SetIsShow(const bool show)
{
	this->m_IsShow = show;
}
