#include<iostream>
using namespace std ;


int convert(int a){
	return (5/9)*(a-32);
}



int cint(int n,int m){
	if(n==0||m==0||n>m)
 	 {   
	   cout <<"数据非法";
	   return 0;
	}
	int c1=1 ,c2=1;
	for(int i=c1;i>=1;i--)
	{
		c1=c1*i ;
	}
	for(int i=c2;i>=1;i--)
	{
		c2=c2*i ;
	}
	return c2/c1;
}

float mi(int x,int y)
{
	 float sum = 1;
        if(y>0){
            sum = x*mi(x,y-1);
        }
        return sum;

}


void main()
{
	int a1=20 ,m=3,n=7,x=4,y=8;

	cout<< convert (a1)<<"/n";
	cout<<cint(m,n)<<"/n";
	cout<< mi(x,y)<<"/n";
}



