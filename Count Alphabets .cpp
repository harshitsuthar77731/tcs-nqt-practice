int Count(string S){
    //complete the function here
    int count = 0;
   for(auto x: S){
            if((x>='A'&&x<='Z')||(x>='a'&&x<='z'))
                count++;
        }
        return count;
}https://github.com/harshitsuthar77731/tcs-nqt-practice
