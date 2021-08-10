package firstSearch;

import edu.princeton.cs.algs4.DepthFirstPaths;
import edu.princeton.cs.algs4.Graph;
import edu.princeton.cs.algs4.Stack;
import edu.princeton.cs.introcs.In;
import edu.princeton.cs.introcs.StdOut;

/**
 * Version 0.1.
 * @author htha9587
 * 11-16-16
 */

public class DepthFirstSearch 
{
	 private boolean[] marked;    // marked[v] = is there an s-v path?
	    private int[] edgeTo;        // edgeTo[v] = last edge on s-v path
	    private int[] distTo;
	    private int s;         // source vertex

	    /**
	     * Computes a path between {@code s} and every other vertex in graph {@code G}.
	     * @param G the graph
	     * @param s the source vertex
	     * @return 
	     */
	    public void DepthFirstPaths(Graph G, int s) {
	        this.s = s;
	        edgeTo = new int[G.V()];
	        distTo = new int[G.V()];
	        marked = new boolean[G.V()];
	        dfs(G, s);
	    }

	    // depth first search from v
	    private void dfs(Graph G, int v) {
	        marked[v] = true;
	        for (int w : G.adj(v)) {
	            if (!marked[w]) {
	                edgeTo[w] = v;
	                distTo[w] = v;
	                dfs(G, w);
	            }
	        }
	    }

	    /**
	     * Is there a path between the source vertex {@code s} and vertex {@code v}?
	     * @param v the vertex
	     * @return {@code true} if there is a path, {@code false} otherwise
	     */
	    public boolean hasPathTo(int v) {
	        return marked[v];
	    }
	    
	    public int distTo(int v)
	    {
	    	return distTo[v];
	    }

	    /**
	     * Returns a path between the source vertex {@code s} and vertex {@code v}, or
	     * {@code null} if no such path.
	     * @param v the vertex
	     * @return the sequence of vertices on a path between the source vertex
	     *   {@code s} and vertex {@code v}, as an Iterable
	     */
	    public Iterable<Integer> pathTo(int v) {
	        if (!hasPathTo(v)) return null;
	        Stack<Integer> path = new Stack<Integer>();
	        for (int x = v; x != s; x = edgeTo[x])
	            path.push(x);
	        path.push(s);
	        return path;
	    }

	    /**
	     * Unit tests the {@code DepthFirstPaths} data type.
	     *
	     * @param args the command-line arguments
	     */
	    public static void main(String[] args) {
	        In in = new In();
	        Graph G = new Graph(in);
	        int s = Integer.parseInt(args[1]);
	        DepthFirstPaths dfs = new DepthFirstPaths(G, s);

	        for (int v = 0; v < G.V(); v++) {
	            if (dfs.hasPathTo(v)) {
	                StdOut.printf("%d to %d:  ", s, v);
	                for (int x : dfs.pathTo(v)) {
	                    if (x == s) StdOut.print(x);
	                    else        StdOut.print("-" + x);
	                }
	                StdOut.println();
	            }

	            else {
	                StdOut.printf("%d to %d:  not connected\n", s, v);
	            }

	        }
	    }

	}
