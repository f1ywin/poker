#ifndef CARD_H_
#define CARD_H_
class Card
{
public:
	Card();
	~Card();
	//������ʾ��������
	enum CardFace
	{
		CardFace_Hide,
		CardFace_Show
	};
	//�˿��ƵĻ�ɫ
	enum CardSuit
	{
		CardSuit_Begin,
		Diamond,//����
		Club,//÷��
		Heart,//����
		Spade,//����
		CardSuit_End
	};
	//�˿��Ƶĵ���
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
		CardPoint_SJ,//С��
		CardPoint_BJ,//����
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
	CardFace m_face;//���������滹�Ƿ���
};
#endif // !CARD_H_

