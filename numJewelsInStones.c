int numJewelsInStones(char* J, char* S) {
    int n = 0;
    for(int i=0; i< strlen(J); i++)
        for (int t=0; t< strlen(S); t++)
            if(J[i] == S[t])
                n++;
    return n;
}
