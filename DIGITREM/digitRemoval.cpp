#include <bits/stdc++.h>
using namespace std;

void digrem(int num,int n)
{int temp=num;
 int count=0;
 int j=-1;
 int k=-1;
 int rep8=0;
	while(temp>0)
	  {int a=temp%10;
	   temp=temp/10;
	   count++;
	   if(a==n)
	   	  {j=count-1;
	   	   k=count;
	   	   rep8=0;
	   	  }
	   	if(n==9 and j!=-1)
	   	  {if(a==8 and k+1==count)
	   	  	  {rep8=pow(10,k+1);
	   	  	   k=count;
	   	  	  }
	   	  }
	   }
	  if(j==-1)
	   	{cout<<0<<endl;
	   	}
	  else if(n!=0)
	    {
	     if(n==9 and rep8>0)
	      {int c=pow(10,k);
	       cout<<rep8-(num%c)<<endl;
	       }
	     else
	     {int c=pow(10,j+1);
	      int ans=((n+1)*pow(10,j))-(num%c);
	      cout<<ans<<endl;
	     }
	     
	    }
}

void digrem0(int num,int n)
{int temp=num;
	   	  int sum=0;
	   	  int count=0;
	   	  int sol=0;
	   	  int j=-1;
	   	  while(temp>0)
	   	    {int a=temp%10;
	   	     temp=temp/10;
	   	     count++;
	   	     sol+=1*pow(10,count-1);
	   	     if(a==n)
	   	       {sum=sol;
	   	       	j=count-1;
	   	       }
	   	    }
	   	if(j==-1)
	   	{cout<<0<<endl;
	   	}
	   	else
	   	{int c=pow(10,j);
	   	 int ans=sum-(num%c);
	   	 cout<<ans<<endl;
	   	}
	   	
}


int main(){
	int t;
	cin>>t;
	while(t--)
	  {int num,n;
	   cin>>num>>n;
	   
	   
	   if(n!=0)
	     {digrem(num,n);
	     }
	   else
	   	 {digrem0(num,n);
	   	 }

	  }  


}