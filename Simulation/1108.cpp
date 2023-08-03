class Solution {
public:
    string defangIPaddr(string address) {
        string defangedAddress = "";
        for (char ch : address) {
            if (ch == '.') {
                defangedAddress += "[.]";
            } else {
                defangedAddress += ch;
            }
        }
        return defangedAddress;     
    }
};
