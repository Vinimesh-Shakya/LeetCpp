class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size()-1,c = 0;
        if(n==0) // only one digit
        {
            if(digits[n]==9) // ckeck last digit 9
            {
                digits[n]=0;
                digits.insert(digits.begin(),1);
                return digits;
            }
            else
            {
                digits[n]= digits[n]+1;
                return digits;
            }
        }
        else if(n>0 && digits[n]==9)
        {
            c = 1;
            digits[n]=0;
            n--;
            while(c==1)
            {
                if(digits[n]==9)
                {
                    c=1,digits[n]=0;
                    n--;
                    if(n<0)
                    break;
                }
                else
                {
                    c=0;
                    digits[n]= digits[n]+1;
                    return digits;
                }
            }
            if(c==1&&n<0)
            digits.insert(digits.begin(),1);
            return digits;
        }
        else
        {
            digits[n]= digits[n]+1;
            return digits; 
        }
    }
};

/*
0ms 100% 10.70Mb 99.98%
Testcases:
digits = [1,2,3] out = [1,2,4]
digits = [4,3,2,1] out = [4,3,2,2]
digits = [9] out = [1,0]

*/
