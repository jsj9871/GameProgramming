void make_card(trump m_card[])
{
	int i, j;
	char shape[4][3] = {"♠", "♥", "♣", "◆"};
	for (i=0; i<4; i++)
	{
		for (j=i*13; j<i*13+13; j++)
		{
			m_card[j].order = i;
			strucpy(m_card[j].shape, shape[i]);
			m_card[j].number = j % 13 + 1;
			switch (m_card[j].number)
			{
				case 1:
					m_card[j].number = 'A';
					break;
				case 11:
					m_card[j].number = 'J';
					break;
				case 12:
					m_card[j].number = 'Q';
					break;
				case 13:
					m_card[j].number = 'K';
					break;
			}
		}
	 }
}
 
 void display_card(trump m_card[])
 {
 	int i, count = 0
 	for (i=0; i<52; i++)
 	{
 		printf("%s", m_card[i].shape);
 		if (10<m_card[i].number)
 			printf("%-2c", m_card[i].number);
 		else
 			printf("%-2d", m_card[i].number);
 		count++;
 		if (i%13+1==13)
 		{
 			printf("\n");
 			count = 0;
		 }
	 }
 }

#include <stdio.h>
#include <string.h>

struct trump
{
	char order;
	char shape[3];
	char number;
}

void make_card(trump m_card[]);
void display_card (trump m_card[]);

int main(void)
{
	trump card[52];
	make_card(card);
	display_card(card);
	return 0;
}

void make_card(trump m_card[])
{
	
}

void display_card(trump m_card[])
{
	int i;
for (i = 0; i<52; i++)
{
printf("%s", m_card[i].shape);
if (10<m_card[i].number) //10값 보다 클 때 문자로 출력 1,11~13은 문자값으로 바뀜
printf("%-2c  ", m_card[i].number);
else
printf("%-2d  ", m_card[i].number);

if (i % 13 + 1 == 13)
{
printf("\n");
}

}
}
