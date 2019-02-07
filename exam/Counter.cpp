#include "pch.h"
#include "Counter.h"

int Counter::getAnswer()
{
	char SPACE = ' ';
	

	int	i,
		j,
		q,
		z,
		median = 0;

	int** tmp;
	int cortage[Counter::CORTEGE_LENGTH];

	tmp = this->explodeArray(SPACE);
	

	for (i = 0; i < Counter::ARRAY_SIZE; i++)
	{
		for (j = 0; j < Counter::ARRAY_SIZE; j++)
		{	
			for (q = 0; q < Counter::ARRAY_DIMENSION; q++)
			{
				for (z = 0; z < Counter::CORTEGE_LENGTH; z++)
				{
					int x = i;
					int y = j;
					if (q == 0)
					{
						int y = Counter::ARRAY_SIZE < (j + z) ? Counter::ARRAY_SIZE - Counter::CORTEGE_LENGTH : (j + z);
					}
					else
					{
						int x = Counter::ARRAY_SIZE < (i + z) ? Counter::ARRAY_SIZE - Counter::CORTEGE_LENGTH : (i + z);
					}

					//if (x < 20 && y < 20)
					{
						int maxIntNumber = CORTEGE_LENGTH / 2,
							currentMaxIntNumber = 0,
							tmpMedian = 0;

						if (tmp[x][y] > tmpMedian)
						{
							median = tmp[x][y];
							currentMaxIntNumber++;
						}
						else if (currentMaxIntNumber == maxIntNumber)
						{
							median = tmpMedian;
							break;
						}
					}
				}
			}
		}
	}
	
	return median;
}
