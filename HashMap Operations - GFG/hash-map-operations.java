// { Driver Code Starts
import java.util.Scanner;
import java.util.*;

class HashMap_Set3
{
	public static void main(String args[])
	{
	    //Taking input using class Scanner
		Scanner sc = new Scanner(System.in);
		
		//Taking total count of testcases
		int t = sc.nextInt();
		
		while(t>0)
		{
		        //Declaring and Initializing a HashMap of Integer,Integer Pair
				HashMap<Integer, Integer> hm = new HashMap<Integer, Integer>();
				
				//taking total count of queries
				int q = sc.nextInt();
				
				while(q>0)
				{
				    //Creating an object of class GfG
					GfG g = new GfG();
					
					//reading the type of query
					char c = sc.next().charAt(0);
					
					//if query type is 'a' we add
					// x, y to HashMap
					if(c=='a')
					{
						int x = sc.nextInt();
						int y = sc.nextInt();
						g.add_Value(hm,x,y);
					}
					if(c=='b')//at query type 'b' we find the value of y
					{
						int y = sc.nextInt();
						System.out.print(g.find_value(hm,y)+" ");
					}
					if(c=='c')//at query type 'c' we get size of the HashMap
						System.out.print(g.getSize(hm)+" ");
					if(c=='d')//at query type of 'd' we remove the key x 
					{
						int x = sc.nextInt();
						g.removeKey(hm,x);
					}
					q--;
				}
				System.out.println();
		t--;
		}
	}
	
}// } Driver Code Ends


/*You are required to complete below methods */
class GfG
{
    /*Inserts an entry with key x and value y in map */
    void add_Value(HashMap<Integer,Integer> hm, int x, int y)
    {
	//Your code here
	hm.put(x,y);
    }
	
    /*Returns the value with key x from the map */
    int find_value(HashMap<Integer, Integer> hm, int x)
    {
        //Your code here
        if(hm.containsKey(x))
        return hm.get(x);
        return -1;
    }
	
    /*Returns the size of the map */
    int getSize(HashMap<Integer, Integer> hm)
    {
	//Your code here
	return hm.size();
    }
		
    /*Removes the entry with key x from the map */	
    void removeKey(HashMap<Integer, Integer> hm, int x)
    {
	//Your code here	
	hm.remove(x);
    }
}