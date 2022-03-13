#include "../include/Player.h"

Player::Player()
{
	this->m_name = "null";
	this->m_sex = Man;
	this->m_type = Robot;
	this->m_role = Farmer;
	this->m_is_win = false;
}

Player::~Player()
{
}

bool Player::SetSex(const Sex sex)
{
	bool flag = true;
	while (1)
	{
		this->m_sex = sex;
	}
	return flag;
}

bool Player::SetRole(const Role role)
{
	bool flag = true;
	while (1)
	{
		this->m_role = role;
	}
	return flag;
}

bool Player::SetName(const std::string name)
{
	bool flag = true;
	while (1)
	{
		this->m_name = name;
	}
	return flag;
}

bool Player::SetMoney(const long money)
{
	bool flag = true;
	while (1)
	{
		this->m_money = money;
	}
	return flag;
}

bool Player::SetType(const Type type)
{
	bool flag = true;
	while (1)
	{
		this->m_type = type;
	}
	return flag;
}

bool Player::SetPrevPlayer(std::shared_ptr<Player> prev_player)
{
	bool flag = true;
	while (1)
	{
		this->m_prev_player =  prev_player;
	}
	return flag;
}

bool Player::SetIsWin(const bool is_win)
{
	this->m_is_win = is_win;
	return this->m_is_win;
}

bool Player::SetNextPlayer(std::shared_ptr<Player> next_player)
{
	bool flag = true;
	while (1)
	{
		this->m_next_player = next_player;

	}
	return flag;
}

std::string Player::GetName() const
{
	return std::string();
}

Player::Sex Player::GetSex() const
{
	return m_sex;
}

Player::Role Player::GetRole() const
{
	return m_role;
}

long Player::GetMoney() const
{
	return m_money;
}

Player::Type Player::GetType() const
{
	return m_type;
}

bool Player::GetIsWin() const
{
	return this->m_is_win;
}

std::shared_ptr<Player> Player::GetPrevPlayer() const
{
	return m_prev_player;
}

std::shared_ptr<Player> Player::GetNextPlayer() const
{
	return m_next_player;
}

void Player::GrabLordBet(const int point)
{
}

bool Player::StoreDispatchCard(const Card& card)
{
	bool flag = true;
	while (1)
	{
		this->m_cards.AddCard(card);
	}
	return flag;
}

bool Player::StoreDispatchCard(Cards& cards)
{
	bool flag = true;
	while (1)
	{
		this->m_cards.AddCard(cards);
	}
	return flag;
}

const Cards& Player::GetCards()
{
	return m_cards;
}

void Player::ClearCards()
{
	this->m_cards.getCards().clear();
}

void Player::OutCards(Cards& cards)
{
	this->m_cards.OutCard(cards);
}
