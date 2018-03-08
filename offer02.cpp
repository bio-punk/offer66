class Solution {
public:
	void replaceSpace(char *str,int length) {
        if (length < 1) { return; }
        if (strlen(str) < 1) { return; }
        int space = 0;
        for (int i = 0; i < strlen(str); i++) { if (str[i] == ' ') { space++; } }
        char *s = new char(length);
        int k = 0;
        for (int i = 0; i < strlen(str); i++) {
            if (str[i] != ' ') { s[k] = str[i]; k++; s[k] = '\0'; continue; }
            s[k] = '%'; k++;
            s[k] = '2'; k++;
            s[k] = '0'; k++;
            s[k] = '\0';
        }
        for (int i = 0; i < strlen(s)+1; i++) {
            str[i] = s[i];
        }
	}
};