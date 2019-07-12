#include<stdio.h>
struct students
{
	char name[20], num[20];
	int score;
};
int main()
{
	int n, i;
	struct students school[3];

	scanf("%d", &n);
	if (n != 1)
	{

		scanf("%s", school[0].name);
		scanf("%s", school[0].num);
		scanf("%d", &school[0].score);

		scanf("%s", school[1].name);
		scanf("%s", school[1].num);
		scanf("%d", &school[1].score);
		if (school[0].score > school[1].score)
		{
			school[2] = school[0];
			school[0] = school[1];
			school[1] = school[2];
		}

		if (n > 2)
		{
			for (i = 1; i < n - 1; i++)
			{
				scanf("%s", school[2].name);
				scanf("%s", school[2].num);
				scanf("%d", &school[2].score);

				if (school[2].score > school[1].score)
					school[1] = school[2];
				else if (school[2].score < school[0].score)
					school[0] = school[2];
			}
		}
	}

	else
	{
		scanf("%s", school[0].name);
		scanf("%s", school[0].num);
		scanf("%d", &school[0].score);
		school[1] = school[0];
	}

	printf("%s %s\n", school[1].name, school[1].num);
	printf("%s %s\n", school[0].name, school[0].num);
	return 0;
}
