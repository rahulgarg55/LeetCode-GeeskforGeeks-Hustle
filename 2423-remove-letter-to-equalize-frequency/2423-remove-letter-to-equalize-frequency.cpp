class Solution {
public:
    bool isEqual(string str, int i)
{
	str.erase(i,1);  
	unordered_map<char, int> m; 
	

	for (int i = 0; i < str.size(); i++)  m[str[i]]++;
	
	
	for (int i = 1; i < str.size(); i++)
		if (m[str[i]] != m[str[i-1]])  return 0;

	return 1;
}
    bool equalFrequency(string word) {
 for (int i = 0; i < word.size(); i++)
		if (isEqual(word, i)) return true;		
	return false;       
    }
};