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
					// kor 시프트 연사는 2로 나누는 것과 같다.
					// eng shif to right is same opr div 2.
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

	static long function3Nplus1(long k) {
		long len = 1;
		while (k != 1) {
			len++;
			if (k % 2 == 1)
				k = 3 * k + 1;
			else
				k >>= 1;
		}// end while
		return len;
	}// end of find
}
