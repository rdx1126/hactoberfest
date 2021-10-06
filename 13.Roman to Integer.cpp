class Solution {
public:
    int romanToInt(string s) {
          map<char,int> pr;
    pr['I']=1;
    pr['V']=5;
    pr['X']=10;
    pr['L']=50;
    pr['C']=100;
    pr['D']=500;
    pr['M']=1000;
    pr[' ']=0;
    
    int sum=0;
    int curr=0;
    for(int i=s.length()-1;i>=0;i--){
        
       
        if(pr[s[i]]<curr){
           
            sum=sum-pr[s[i]];
            curr=pr[s[i]];
        }else{
            curr=pr[s[i]];
        sum=sum+pr[s[i]];
        }
        
    }
    
    return sum;
        
    }
};
