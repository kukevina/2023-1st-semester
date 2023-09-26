/*
일단 나이순으로 정렬은 했는데... 나이가 같을 때는 들어온 순서대로 뽑는건 어떻게 하지??
내가 아는 선에서 최대한 풀어보았다..
다른 자료구조는 잘 모르겠고 배열 ㄱㄱ

해결 하기 위해 order[] 선언,
입력한 순서를 파악하는 용.

일단 정렬 후 나이가 같다? -> 순서 확인 후 먼저 들어온 거 우선으로 정렬 다시 해주기.
cnt를 기준으로 반복. 정렬을 한번도 안했다 -> 정렬 끝! 고로 break
*/




package baekjun;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class j10814 {

	public static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	public static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws NumberFormatException, IOException {
		int orderTimes = Integer.parseInt(br.readLine());
		int[] age = new int[orderTimes];
		String[] name = new String[orderTimes];
		int[] order = new int[orderTimes];

		for (int i = 0; i < orderTimes; i++) {
			String strFull = br.readLine();
			StringTokenizer tk = new StringTokenizer(strFull);
			age[i] = Integer.parseInt(tk.nextToken());
			name[i] = tk.nextToken();
			order[i] = i;
		}

		selectSort(age, name,order);

		orderSort(age, name, order);

		for (int i = 0; i < orderTimes; i++) {
			bw.write(age[i] + " " + name[i] + "\n");
		}

		bw.close();
	}

	private static void orderSort(int[] age, String[] name, int[] order) {
		int cnt = 0;
		while (true) {
			cnt = 0;
			for(int i=0; i<age.length-1; i++) {
				if(age[i] == age[i+1]) {
					if(order[i] > order[i+1]) {
						swap(order,i,i+1);
						swap(name,i,i+1);
						cnt++;
					}
				}
			}
			if(cnt == 0) {
				break;
			}
		}

	}

	private static void selectSort(int[] age, String[] name,int[] order) {
		for (int i = 0; i < age.length - 1; i++) {
			int minIndex = i;
			for (int j = i + 1; j < age.length; j++) {
				if (age[minIndex] > age[j]) {
					minIndex = j;
				}
			}
			if (i != minIndex) {
				swap(age, i, minIndex);
				swap(name, i, minIndex);
				swap(order,i,minIndex);
			}
		}
	}

	private static void swap(String[] name, int i, int minIndex) {
		String temp = name[i];
		name[i] = name[minIndex];
		name[minIndex] = temp;
	}

	private static void swap(int[] age, int i, int minIndex) {
		int temp = age[i];
		age[i] = age[minIndex];
		age[minIndex] = temp;
	}

}
