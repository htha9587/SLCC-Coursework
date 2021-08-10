package searchingApp;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.NoSuchElementException;
import java.util.TreeMap;

import edu.princeton.cs.algs4.ST;
import edu.princeton.cs.introcs.In;
import edu.princeton.cs.introcs.StdIn;
import edu.princeton.cs.introcs.StdOut;

/******************************************************************************
 *  Compilation:  javac LookupCSV.java
 *  Execution:    java LookupCSV file.csv keyField valField
 *  Dependencies: ST.java In.java StdIn.java StdOut.java
 *  Data files:   http://algs4.cs.princeton.edu/35applications/DJIA.csv
 *                http://algs4.cs.princeton.edu/35applications/UPC.csv
 *                http://algs4.cs.princeton.edu/35applications/amino.csv
 *                http://algs4.cs.princeton.edu/35applications/elements.csv
 *                http://algs4.cs.princeton.edu/35applications/ip.csv
 *                http://algs4.cs.princeton.edu/35applications/morse.csv
 *  
 *  Reads in a set of key-value pairs from a two-column CSV file
 *  specified on the command line; then, reads in keys from standard
 *  input and prints out corresponding values.
 * 
 *  % java LookupCSV amino.csv 0 3     % java LookupCSV ip.csv 0 1 
 *  TTA                                www.google.com 
 *  Leucine                            216.239.41.99 
 *  ABC                               
 *  Not found                          % java LookupCSV ip.csv 1 0 
 *  TCT                                216.239.41.99 
 *  Serine                             www.google.com 
 *                                 
 *  % java LookupCSV amino.csv 3 0     % java LookupCSV DJIA.csv 0 1 
 *  Glycine                            29-Oct-29 
 *  GGG                                252.38 
 *                                     20-Oct-87 
 *                                     1738.74
 *
 *
 ******************************************************************************/

/**
 *  The {@code LookupCSV} class provides a data-driven client for reading in a
 *  key-value pairs from a file; then, printing the values corresponding to the
 *  keys found on standard input. Both keys and values are strings.
 *  The fields to serve as the key and value are taken as command-line arguments.
 *  <p>
 *  For additional documentation, see <a href="http://algs4.cs.princeton.edu/35applications">Section 3.5</a> of
 *  <i>Algorithms, 4th Edition</i> by Robert Sedgewick and Kevin Wayne.
 *  
 *  @author Robert Sedgewick
 *  @author Kevin Wayne
 */
public class StocksApp {

    // Do not instantiate.
    private StocksApp() { }
    
    private static ST<Date, Double> readInDataFromCsv(double valField, String stockFile) throws ParseException
    {
		return null;
		
    	
    }

    public static void main(String[] args) throws ParseException {
        int keyField = Integer.parseInt(args[1]);
        double valField = Integer.parseInt(args[2]);
        
        //Date.
        SimpleDateFormat formatter = new SimpleDateFormat("yyyy-MM-dd");
        String dateInString = "2012-04-01";
        java.util.Date date = formatter.parse(dateInString);
        System.out.println(date);

        // read in the data from csv file
        In in = new In(args[0]);
        StocksApp.readInDataFromCsv(valField, dateInString);
        while (in.hasNextLine()) {
            String line = in.readLine();
            String[] tokens = line.split(",");
            String key = tokens[keyField];
            String val = tokens[(int) valField];
            .put(key, val);
        }

        while (!StdIn.isEmpty()) {
            String s = StdIn.readString();
            if (st.contains(s)) StdOut.println(st.get(s));
            else                StdOut.println("Not found");
        }
    }
    
    public class ST<Key, Value> extends Comparable<Key, Value>
    {
    	private TreeMap<Key, Value> st;
    	
    	public Key min() {
            if (st.isEmpty()) return null;
            return keys[0]; 
        }
    	
    	public Key max() {
            if (st.isEmpty()) return null;
            return keys[n-1];
        }
    	
    	public Key floor(Key key)
    	{
    		if (key == null) throw new IllegalArgumentException("called floor() with null key");
            Key k = st.floorKey(key);
            if (k == null) throw new NoSuchElementException("all keys are greater than " + key);
            return k;
    	}
    	
    	public Key ceiling(Key key)
    	{
    		if (key == null) throw new IllegalArgumentException("called ceiling() with null key");
            Key k = st.ceilingKey(key);
            if (k == null) throw new NoSuchElementException("all keys are less than " + key);
            return k;
    	}
    	
    	public int rank(Key key)
    	{
    		
    	}
    	
    	public Key select(int k)
    	{
    		if (k < 0 || k >= n) return null;
            return keys[k];
    	}
    	
    	public void deleteMin() {
            if (st.isEmpty()) throw new NoSuchElementException("Symbol table underflow error");
            delete(min());
        }
    	
    	 public void deleteMax()
    	{
    		 if (k < 0 || k >= n) return null;
    	        return keys[k];
    	}

    	 public int size(Key lo, Key hi)
    	{
    		return st.size();
    	}
    	
    	public Iterable<Key> keys()
    	{
    		
    	}
    	
    	public Iterable<Key> keys(Key lo, Key hi)
    	{
    		
    	}
    	
    }
    
}