class Solution
{
  public:
    string modify (string s)
    {
        //code here.
       s.erase(remove(s.begin(),s.end(),' '),s.end());
       return s;
    }
};
