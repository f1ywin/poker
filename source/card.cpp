#include "../include/card.h"
Card::Card()
{
}

Card::~Card()
{
}


void Card::SetPoint(const CardPoint& point)
{
	this->m_point = point;
}

void Card::SetSuit(const CardSuit& suit)
{
	this->m_suit = suit;
}

void Card::SetFace(const CardFace& face)
{
	this->m_face = face;
}

const Card::CardPoint& Card::GetPoint() const
{
	return m_point;
}

const Card::CardSuit& Card::GetSuit() const 
{
	return m_suit;
}

const Card::CardFace& Card::GetFace() const 
{
	return m_face;
}
