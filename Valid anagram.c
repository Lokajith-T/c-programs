#pragma GCC optimize("O3", "unroll-loops")
bool isAnagram(char* s, char* t) {
    int f[26]={0};
    register int i;
    for(i=0; s[i]!='\0' && t[i]!='\0'; i++){
        f[s[i]-'a']++; 
        f[t[i]-'a']--;
    }
    if (s[i]!='\0' || t[i]!='\0') 
        return 0;
    for(register i=0; i<26; i++)
        if (f[i]!=0) return 0;
    return 1;
}
