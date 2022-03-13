#include<iostream>
#include "../include/Cards.h"
#include "../include/card.h"
int main()
{
	Card x;
	Card y;
	
	x.SetPoint(Card::CardPoint::CardPoint_J);
	x.SetSuit(Card::CardSuit::Club);
	x.SetFace(Card::CardFace::CardFace_Show);
	y.SetPoint(Card::CardPoint::CardPoint_5);
	y.SetSuit(Card::CardSuit::Heart);
	y.SetFace(Card::CardFace::CardFace_Hide);
	
	Cards p;
	p.getCards();
	p.SetIsShow(true);
	p.AddCard(x);
	p.AddCard(y);
	p.ShowCard();
	

	return 0;
}