#include "../include/card.h"
Card::Card()
{
}

Card::~Card()
{
}


void Card::SetPoint(CardPoint point)
{
	this->m_point = point;
}

void Card::SetSuit(CardSuit suit)
{
	this->m_suit = suit;
}

void Card::SetFace(CardFace face)
{
	this->m_face = face;
}

Card::CardPoint Card::GetPoint()
{
	return m_point;
}

Card::CardSuit Card::GetSuit()
{
	return m_suit;
}

Card::CardFace Card::GetFace()
{
	return m_face;
}
