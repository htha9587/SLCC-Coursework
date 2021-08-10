package table;

import edu.princeton.cs.algs4.ST;
import edu.princeton.cs.introcs.StdIn;
import edu.princeton.cs.introcs.StdOut;

public class GPA <Key extends Comparable<Key>, Value>
{
	private Value[] vals;
	private Key[] keys;
	private int N = 0;
	
	public GPA(int maxN)
	{
		keys = (Key[])new Object[maxN];
		vals = (Value[])new Object[maxN];
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
	 
	 
	 public static void main(String [] args)
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
		 
		 ST<String, Double> students = new ST<String, Double>();
		 students.put("George", 24.00);
		 students.put("Luke", 16.00);
		 students.put("Ike", 24.00);
		 students.put("JC", 20.00);
		 students.put("Forrest", 16.00);
		 students.put("Alec", 20.00);
		 
		 
		 //Student<N> [A,C,A,B];
		 
		 int n = 0;
		 int i = 0;
		 
		 
		 for(n = 0; n < 6; n++)
		 {
			 double total = 0.0;
			 //for(i= 0;  i < 4; i++)
			 //for(i= 0;  i < students.keys(); i++)
			 {
				 String grade = StdIn.readString();
				 double value = grades.get(grade);
				 total += value;
			 }
			 double gpa = total / i;
			 System.out.println(total);
			 System.out.println(i);
			 System.out.println("GPA = " + gpa);
		 }
	 }
}
