class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1.size()==s2.size())
        {
            vector<int> ar;
            for(int i=0;i<s1.size();i++)
            {
                if(s1[i]!=s2[i])
                {
                    ar.push_back(i);
                }
            }
            if(ar.size()==0)
            return true;
            else if(ar.size()==2)
            {
                return (s1[ar[0]]==s2[ar[1]])&&(s2[ar[0]]==s1[ar[1]])?true:false;
            }
        }
        return false;
    }
};



/*

Accepted : 0ms,100%, 8.35Mb 38.95%


Testcases:
"aa"
"ac"

"abcd"
"dcba"

"rywib"
"bywir"

"xlkrjiiklmmtezp"
"xnfbamkizybugtm"

"gemvejmohpmkg"
"hemvejmogpmkg"

"siyolsdcjthwsiplccjbuceoxmpjgrauocx"
"siyolsdcjthwsiplccpbuceoxmjjgrauocx"

"djrxsradfumetmknyvsyydhnibbtvphmhcjmeemgczdjttkbmayivbfowsnlhytqy"
"djrxsradfumetmknxvsyydhnibbtvphmhcjmeemgcydjttkbmayivbfowsnlhytqy"

"xbmkpymqnuhknexweggxfrygymgauyrlbrgqbphyefzpeblqlgqwzvnenlzhdoxkwptuibvjkcb"
"xbmkpymqnnhkuexweggxfrygymgauyrlbrgqbphyefzkeblqlgqwzvnenlzhdoxpwptuibvjkcb"
*/
