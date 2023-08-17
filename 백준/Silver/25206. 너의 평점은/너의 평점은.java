import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		// For making easier to convert letter to number.
		Map<String, Double> finalLetterTable = new HashMap<>() {{
			put("A+", 4.5);
			put("A0", 4.0);
			put("B+", 3.5);
			put("B0", 3.0);
			put("C+", 2.5);
			put("C0", 2.0);
			put("D+", 1.5);
			put("D0", 1.0);
			put("F", 0.0);
		}};
		
		String buffer;
		double credit;
		double totalCredit = 0.0;
		double allSum = 0.0;
		String letter;
		
		for(int i = 0; i < 20; i++) {
			buffer = sc.next();
			credit = sc.nextDouble();
			letter = sc.next();
			
			if(finalLetterTable.get(letter) != null) {
				totalCredit += credit;
				allSum += credit * finalLetterTable.get(letter);
			}
		}
		
		System.out.println(allSum / totalCredit);
	}
}