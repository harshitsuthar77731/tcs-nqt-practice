int countWords(string s)
{
    //code here
    int count = 0;
    bool flag = false;
    bool f = true;
    for(int i=0;i<s.size();i++){
        int t = s[i];
        if(s[i]==' '){
             f=true;
            continue;
        }
        else if(t==92){
            i++;
            f=true;
            continue;
        }
        else {
            if(f==true)
              count++;
            f=false;
        }
    }

        return count;
    
}
