#include<stdio.h>
#include<conio.h>
void main(){
         int t;
		scanf("%d",&t);
		while(t-- > 0) {
			int ans,n;
			int c=1;
			scanf("%d",&n);
			char s;
			int f = 0;
			while(n>0) {
				int d = n%10;
				ans = d*c;
				if(d!=0) {
					s += ans+" ";
					f++;
				}
				c = c*10;
				n = n/10;
			}
			printf("%d",f);
			printf("\n%d",s);
			}
}
