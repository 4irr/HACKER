#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = "00000000";
	int k = 0;
	for (int i = 97; i < 123; i++)
	{
		str[0] = (char)i;
		for (int j = 97; j < 123; j++)
		{
			str[1] = (char)j;
			for (int f = 97; f < 123; f++)
			{
				str[2] = (char)f;
				for (int g = 97; g < 123; g++)
				{
					str[3] = (char)g;
					for (int q = 97; q < 123; q++)
					{
						str[4] = (char)q;
						for (int n = 97; n < 123; n++)
						{
							str[5] = (char)n;
							for (int m = 97; m < 123; m++)
							{
								str[6] = (char)m;
								for (int a = 97; a < 123; a++, k++)
								{
									str[7] = (char)a;
									if (k % 50000 == 0)
										cout << str << "   " << k << endl;
									cout << "Hello, world!" << endl;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

