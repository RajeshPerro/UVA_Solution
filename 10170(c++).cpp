#include<iostream>
using namespace std;
 class day
 {      long  int s,d,n,i;
 public:
     void getdata();
     //void dispdata();

 };
 void day::getdata()
 {
     while(EOF)
     {
         cin>>s>>d;
         n=0;
         for(i=s;;i++)
         {
             n+=i;
             if(n>d||n==d)
             {
              cout<<i<<"\n";
             break;
			}
         }
     }
 }
 main()
 {
     day a;
     a.getdata();
  return 0;
 }
