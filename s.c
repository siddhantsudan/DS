#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    int a0;
    for(a0 = 0; a0 < t; a0++){
        char* s = (char *)malloc(10240 * sizeof(char));
        int x;
        for( x=0;x<10240;x++)
            {
            s[x]=NULL;
        }
        
        scanf("%s",s);
        
        int i=0;char stack[10240],top=-1;
        while(s[i]!=NULL)
            {
            	printf("%c",s[i]);
            if(s[i]=='['||s[i]=='{'||s[i]=='(')
                {
                top++;
                 stack[top]=s[i];
            }
//             else if(s[i]==']'||s[i]=='}'||s[i]==')')
//                {
//                top--;
//                 break;
//            }
            else if(s[i]=='}')
                {
                if(stack[top]=='{')
                    top--;
            }
             else if(s[i]==']')
                {
                if(stack[top]=='[')
                    top--;
            }
             else if(s[i]==')')
                {
                if(stack[top]=='(')
                    top--;
            }
          
            i++;
               
        }
        if(top==-1)
            printf("YES\n");
            else
            printf("NO\n");
        
        free(s);
    }
    return 0;
}

