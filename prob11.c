# include<stdio.h>
# include<stdlib.h>
int main (int argc,char *argv[])
{
	int n,count=0;
	FILE *fd;
	char ch;
	fd = fopen(argv[1],"r");
	if(fd == NULL)
	{
		printf("File is empty or invalid file name\n");
		exit(1);
	}
	while ((ch = fgetc(fd)) != EOF)
	{
		count++;
	}
	count -= 1;
	fclose(fd);
	printf("Count=%d\n",count);
	fd = fopen(argv[1],"r");
	char a[count];
	n = count/2;
	 int k = 0;
	 while ((ch = fgetc(fd)) != EOF)
        {
                a[k++] = ch;
        }
	fclose(fd);
	int m = n/2;
	int o = n;
	int x = -1;
	count = 0;
	int temp;
	int i;
	printf("Total number of students(2n):%d\n",(2*n));
	printf("Student data:\n");
	for(i = 0;i < (2*n);i++)
		printf("%c",a[i]);
	while(count != n/2)
	{
		count++;
		x += 2;
		temp = a[x];
		a[x] = a[o];
		a[o] = temp;
		o += 2;
	}
	printf ("\nThe goups are:\nGroup1(%d):\n",m);
	for (i = 0;i < m;i++)
		printf("%c",a[i]);
	printf("\nGroup2(%d):\n",(2*m));
	int y = m+(2*m);
	for (i = m;i < y;i++)
		printf("%c",a[i]);
	printf("\nGroup3(%d):\n",m);
	for(i = y;i < 2*n;i++)
		printf("%c",a[i]);
	printf("\n");
	return 0;
}
