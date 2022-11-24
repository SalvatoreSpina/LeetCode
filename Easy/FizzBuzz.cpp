class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answ;
        string str = "";
        
        for (int i = 1; i <= n; i++) {
            str = "";
            if (!(i % 3))
                str += "Fizz";
            if (!(i % 5))
                str += "Buzz";
           str == "" ? answ.push_back(to_string(i)) : answ.push_back(str);
        }
        return answ;
    }
};