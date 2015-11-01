class Solution {
public:
    bool isUgly(int num) {
        if(num == 0) return false;
        if (num == 1) return true;
        int tmp = num;
        while(tmp % 2 == 0 ){
            tmp /= 2;
        }
        while(tmp % 3 == 0 ){
            tmp /= 3;
        }
        while(tmp % 5 == 0 ){
            tmp /= 5;
        }
        return tmp == 1 ? true:false;
    }
};
