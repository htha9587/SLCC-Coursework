package exerciseMountain;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import exerciseMountain.Continent;
import exerciseMountain.Mountain;

public class MountainApp {

	public static void main(String[] args) {
		List<Mountain> mountains = new ArrayList<Mountain>();
		mountains.add(new Mountain("Everest", Continent.ASIA, "Nepal", 8848));
		mountains.add(new Mountain("Mt McKinley", Continent.NORTH_AMERICA, "USA", 6194));
		mountains.add(new Mountain("Timpanogos", Continent.NORTH_AMERICA, "USA", 3582));
		mountains.add(new Mountain("Kilimanjaro", Continent.AFRICA, "Tanzania", 5895));
		mountains.add(new Mountain("Mt Fuji", Continent.ASIA, "Japan", 3776));
		mountains.add(new Mountain("Matterhorn", Continent.EUROPE, "Switzerland", 4478));
		mountains.add(new Mountain("Mt Rainier", Continent.NORTH_AMERICA, "USA", 4392));
		mountains.add(new Mountain("Nanga Parbat", Continent.ASIA, "PAKISTAN", 8126));		
		
		Collections.sort(mountains);
		
		for (Mountain m : mountains) 
			System.out.println(m);
		
		for(Mountain n : mountains);
		System.out.println(n);
		
		for(mountains.sort(Mountain.ByContinent);
		System.out.println(m);
		
		for(mountains.sort(Mountain.ByAltitude);
		System.out.println(m);
	}
}

