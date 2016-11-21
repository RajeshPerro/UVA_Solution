#include<stdio.h>
//#include<conio.h>

int main()
{
	long int tc,M,N,X,Y,i;
	 freopen("11498.txt","r",stdin);
	 while(scanf( "%ld", &tc ) == 1 )
	 {
		 if(tc==0) break;
		 scanf( " %ld %ld " , &N ,&M);
		 for(i=1;i<=tc;i++)
		 {
			 scanf(" %ld %ld", &X ,&Y);
			 if( X == N || Y == M)
				 printf("divisa\n");
			 else if( X > N && Y > M )
				 printf("NE\n");
			 else if( X < N && Y > M)
				 printf("NO\n");
			 else if( X < N && Y < M )
				 printf("SO\n");
			 else
				 printf("SE\n");
		 }
	 }
//	getch();
	return 0;
}
