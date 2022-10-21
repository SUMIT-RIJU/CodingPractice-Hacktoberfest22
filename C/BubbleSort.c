#include <stdio.h>
int bubblesort_r(int a[],int n);
int main()
{
	int  k,T,n,i,j,temp ;
   	printf("Enter no of testcase:");
	 scanf("%d",&T);
	    for(k=0;k<T;k++)
	    {
		  
	      scanf("%d",&n);
	      int a[n];
	      	
	        for(i=0;i<n;i++)
	        {
	         scanf("%d ",&a[i]);
	        }
	    
	     bubblesort_r(a,n);
	      
	      for(i=0;i<n;i++)
	      {
	       printf("%d ",a[i]);
	      }
	    }
return 0;
}   	

int bubblesort_r(int a[],int n)
{
 int i,j,temp;
 i=n;
 if(i>0)
   {
     for(j=0;j<n-1;j++)
	       {
	         if(a[j]>a[j+1])
	           {
	            temp=a[j];
	            a[j]=a[j+1];
	            a[j+1]=temp;
	           }
        	}
        bubblesort_r(a,n-1);		
   } 
   else
    {
   	 return;
	  }     
 }
