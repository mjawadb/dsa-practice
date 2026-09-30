bool isIsomorphic(char* s, char* t) {
    int mapS[256] = {0};
    int mapT[256] = {0};

    for(int i = 0; i < strlen(s); i++) {
        char a = s[i];
        char b = t[i];

        if(mapS[a] != 0 && mapS[a] != b) {
            return false;
        }

        if(mapT[b] != 0 && mapT[b] != a) {
            return false;
        }

        mapS[a] = b;
        mapT[b] = a;
    }

    return true;
}