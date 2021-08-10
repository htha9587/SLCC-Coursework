package table;

import edu.princeton.cs.algs4.ST;

public class Router 
{
	private Value[] vals;
	private Key[] keys;
	private int N = 0;
	
	public Router()
	{
		keys = (Key[])new Object[maxN];
		vals = (Value[])new Object[maxN];
	}
	
	public void delete()
	{
		
	}
	
	public void size()
	{
		
	}
	
	 public void put(Key key, Value val)
		{
			int i;
			for(i = 0; i< N; i++)
				if(key.equals(keys[i]))
					break;
			vals[i] = val;
			keys[i] = key;
			if (i == N) N++;
		}
		 
		 public Value get(Key key, Value val)
		 {
			for  (int i = 0; i<N; i++)
			 if(keys[i].equals(key))
				 return vals[i];
			return null;
		 }
	
	public static void main(String[] args)
	{
		ST<String, Double> grades = new ST<String, Double>();
		 grades.put("A", 4.00);
		 grades.put("B", 3.00);
		 grades.put("C", 2.00);
		 grades.put("D", 1.00);
		 grades.put("F", 0.00);
		 grades.put("A+", 4.33);
		 grades.put("B+", 3.33);
		 grades.put("C+", 2.33);
		 grades.put("A-", 3.67);
		 grades.put("B-", 2.67);
		 
		 
	}
}
