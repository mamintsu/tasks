1 #define SWAP(a,b)  {int temp;temp=a;a=b;b=temp;}
2 #include <stdio.h>
3
4
5 
6 void bubble(int n,int a[])
7 {
8         int m,j,k,t,tmp;
9
10         k=n-1;
11
12         for(m=1;m<=k;m++)
13         {
14          printf("\n(step%d)\n",m);
15          for(j=0;j<n-m;j++)
16           {
17            if(a[j]>a[j+1]) SWAP(a[j],a[j+1]);
18            printf("compare %d and %d",j+1,j+2);
19            for(t=0;t<20;t++)printf("%4d",a[t]);printf("\n");
20           }
21             printf("step%d result",m);
22             for(t=0;t<20;t++)printf("%4d",a[t]);printf("\n");
23         }
24}
25
26 int main(){
27
28         int n=20;
29         int data[n];
30         int i;
31         srand((unsigned) time(NULL));
32
33         for(i=0;i<n;i++){
34         data[i]=rand()%100+1;
35         }
36
37         bubble(n,data);
38           }

		       24 }

