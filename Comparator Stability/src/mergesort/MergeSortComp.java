/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package mergesort;
import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;
/**
 *
 * @author dhunter3
 */
  
public class MergeSortComp {

  public static <E> void sort(E[] a, Comparator<? super E> comp) throws FileNotFoundException {
    mergeSort(a, 0, a.length - 1, comp);
  }


  private static <E> void mergeSort(E[] a, int from, int to, Comparator<? super E> comp) throws FileNotFoundException {
	  if(from == to)
	  {
		  return;
	  }
    int mid = (from + to) /2;
    
    mergeSort(a, from, mid ,comp);
    mergeSort(a, mid + 1, to, comp);
    merge(a, from, mid, to, comp);
  }

  private static <E> void merge(E[] a, int from, int mid, int to, Comparator<? super E> comp) {

  }
  
  public static void main(String[] args) throws IOException
  {
	  BufferedReader reader = new BufferedReader(new FileReader("src\\mergesort\\SampleCSVFile_119kb.csv"));
	  List<String> lines = new ArrayList<>();
	  String line = null;
	  while ((line = reader.readLine()) != null) {
	      lines.add(line);
	  }

	  System.out.println(lines.get(10));
  }
}
