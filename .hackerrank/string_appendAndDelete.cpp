string appendAndDelete(string s, string t, int k) {
    int slen = s.size();
    int tlen = t.size();
    int total = 0, i;
    
    // calculate total moves required to convert s -> t
    for (i = 0; i < slen && i < tlen; ++i){
        if (s[i] != t[i])
            break;   
    }
    total = slen + tlen - 2*i;
    
    // if total <= k
    if (total <= k){
        // if one of the total or k == odd and other is even
        if ((total + k) & 1){
            // if s.empty() -> return "Yes"
            if (k > (slen + tlen))
                return "Yes";
            else
                return "No";
        }
        // if all else fails
        return "Yes";
    }
    else{
        // if total > k -> return "No"
        return "No";
    }
}
