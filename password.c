#include<stdio.h>
#include<string.h>
void print(char *num, int n){
	int i;
	for ( i = 0 ; i < n ; i++){
		printf("%c ", num[i]);
	}
	printf("\n");
}
int main(){
	char num[1000]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','0','1','2','3','4','5','6','7','8','9'};	

	int temp;
    	int i, n, j;
	n=strlen(num);
        printf("\n list of all possible combinations:\n");
        for(i=0; i<n; i++)
	{
		if(num[i]==' ')
		{
			for(j=i; j<n; j++)
			{
				num[j]=num[j+1];
			}
		n--;
		}
	}
    for (j = 1; j <= n; j++) {
        for (i = 0; i < n-1; i++) {
            temp = num[i];
            num[i] = num[i+1];
            num[i+1] = temp;
            print(num, n);
	}
    }
}
