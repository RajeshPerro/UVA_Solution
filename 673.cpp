#include<stdio.h>
#include<string.h>
#include<stack>
#include<stdlib.h>
using namespace std;

int main()
{
	int T,i,len,flag,t;
	char input[129];
	scanf("%d",&T);
	scanf("\n");
	for(t=1;t<=T;t++)
	{
		stack<char>st;
        flag = 1;
		gets(input);
		len=strlen(input);
		for(i=0;i<len;i++)
		{
			if(input[i]=='(' || input[i]=='[')
			{
				st.push(input[i]);
			}
			else
			{
				if(st.empty())
				{
					flag = 0;
                    break;
				}
				else
				{
					if(input[i]==')')
					{
						if(st.top() == '(')
						{
                          st.pop();
						}
						else
						{
							flag = 0;
                            break;
						}
					}
					else if(input[i]==']')
					{
						if(st.top()=='[')
						{
							st.pop();
						}
						else
						{
							flag = 0;
                            break;
						}
					}
				}
			}
		}
	

	if(len==0)
	{
		printf("Yes\n");
	}
	else
	{
		if(!st.empty())
		{
			printf("No\n");
		}
		else
		{
			if(flag)
			{
             printf("Yes\n");
			}
             else
			 {
              printf("No\n");
			 }
		}
	}
	}
	
	return 0;
}