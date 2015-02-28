import java.util.Scanner;

public class Main {
	
	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);

		while (scanner.hasNextInt()) {

			int i = scanner.nextInt();
			int j = scanner.nextInt();
			
			int from = i;
			int to = j;
			
			if (from>to) {
				int tmp = from;
				from = to;
				to = tmp;
			}

			long maxCycle = 0;
			long tmpCycle;

			for (; from <= to; from++) {

				tmpCycle = 1;
				int n = from;
				while (n != 1) {
					if (n % 2 == 1)
						n = 3 * n + 1;
					else
						n >>= 1; // shft opr( same n /= 2)

					tmpCycle++;
				}

				if (tmpCycle > maxCycle)
					maxCycle = tmpCycle;
			}

			System.out.println(i + " " + j + " " + maxCycle);
		}
		scanner.close();
	}

}
