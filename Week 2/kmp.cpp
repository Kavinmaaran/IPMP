#include <bits/stdc++.h>
using namespace std;

void computeLPS(char *pat, int *lps, int M);

void KMPSearch(char *pat, char *txt){
    int M = strlen(pat);
    int N = strlen(txt);
    int lps[M];

    computeLPS(pat,lps,M);
    int  j=0;
    int i=0;

    while( (N-i) >= (M-j)){
        if(pat[j]==txt[i]){
            i++;
            j++;
        }

        if(j==M){
            printf("Found index %d ", i - j);
            j = lps[j-1];
        }else if(i<N && pat[j]!=txt[i]){
            if(j!=0){
                j = lps[j-1];
            }
            else{
                i++;
            }
        }
    }

}

void computeLPS(char *pat, int *lps, int M){
    int len=0;
    lps[0]=0;
    int i=1;
    while(i<M){
        if(pat[i]==pat[len]){
            len++;
            lps[i]=len;
            i++;
        }else{
            if(len!=0){
                len=lps[len-1];
            }else{
                lps[i]=0;
                i++;
            }
        }
    }

}

int main(){
    char txt[] = "ABABDABACDABABCABAB";
    char pat[] = "ABABCABAB";
    KMPSearch(pat, txt);
    return 0;
}