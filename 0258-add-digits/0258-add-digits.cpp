class Solution {
public:
    int addDigits(int num) {
        if(num<10)return num;
        int sum=0;
        while(num>9)
        {
            sum=0;
            while(num)
          {
            int rem=num%10;
            sum+=rem;
            num/=10;
          }
          num=sum;
        }
        return sum;
    }
};