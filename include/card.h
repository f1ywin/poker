#ifndef CARD_H_
#define CARD_H_
class Card
{
public:
	Card();
	~Card();
	//卡牌显示的正反面
	enum CardFace
	{
		CardFace_Hide,
		CardFace_Show
	};
	//扑克牌的花色
	enum CardSuit
	{
		CardSuit_Begin,
		Diamond,//方块
		Club,//梅花
		Heart,//红桃
		Spade,//黑桃
		CardSuit_End
	};
	//扑克牌的点数
	enum CardPoint
	{
		CardPoint_Begin,
		CardPoint_3,
		CardPoint_4,
		CardPoint_5,
		CardPoint_6,
		CardPoint_7,
		CardPoint_8,
		CardPoint_9,
		CardPoint_10,
		CardPoint_J,
		CardPoint_Q,
		CardPoint_K,
		CardPoint_A,
		CardPoint_2,
		CardPoint_SJ,//小王
		CardPoint_BJ,//大王
		CardPoint_End
	};
	
	void SetPoint(const CardPoint& point);
	void SetSuit(const CardSuit& suit);
	void SetFace(const CardFace& face);
	const CardPoint& GetPoint() const;
	const CardSuit& GetSuit() const;
	const CardFace& GetFace() const;

	bool operator==(const Card& card) const
	{
		return card.m_point == this->m_point && card.m_suit == this->m_suit;
	}
	bool operator<(const Card& card) const
	{
		return this->m_point < card.m_point;
	}

private:
	CardPoint m_point;
	CardSuit m_suit;
	CardFace m_face;//卡牌是正面还是反面
};
#endif // !CARD_H_

