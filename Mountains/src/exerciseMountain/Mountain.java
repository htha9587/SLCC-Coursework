package exerciseMountain;

import java.util.Comparator;

public class Mountain {
	public static final Comparator<? super Mountain> ByName = null;
	public static final Comparator<? super Mountain> ByContinent = null;
	public static final Comparator<? super Mountain> ByAltitude = null;
	private String name;
	private Continent continent;	
	private String country;
	private int altitude;
	
	public Mountain(String name, Continent continent, String country,
			int altitude) {
		this.name = name;
		this.continent = continent;
		this.country = country;
		this.altitude = altitude;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public int getAltitude() {
		return altitude;
	}

	public void setAltitude(int altitude) {
		this.altitude = altitude;
	}

	public String getCountry() {
		return country;
	}

	public void setCountry(String country) {
		this.country = country;
	}

	public Continent getContinent() {
		return continent;
	}

	@Override
	public String toString() {
		return String.format("%-13s %-15s %-13s %dm",
				name, continent, country, altitude);
	}	
	
	public static class ByName implements Comparator<Continent>
	{
		public int compare(Continent v, Continent w) {
			return v.name.compareTo(w.name); 
		}
	}
	
	public static class ByContinent implements Comparator<Continent>
	{
		public int compare(Continent v, Continent w) {
			return v.continent - w.continent;
		}
	}
	
	public static class ByAltitude implements Comparator<Continent>
	{
		public int compare(Continent v, Continent w) {
			return v.altitude - w.altitude;
		}
	}
	
	
	
	
}
