/*
다 만들고 나니 시간초과가 났다.
알고 보니 scanner 와 sysout은 동작시간이 매우 느린것을 확인하였다.

이를 BufferReader, BufferWriter로 변경해주어야 한다.
*/




package baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Java10845{

	public static void main(String[] args) throws IOException {
		//Scanner scan = new Scanner(System.in);
		BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
		int orderTime = Integer.parseInt(bf.readLine());
		int[] que = new int[10001];

		for (int i = 0; i < orderTime; i++) {
			
			//scan.nextLine();
			StringTokenizer orderFull = new StringTokenizer(bf.readLine());
			String order = orderFull.nextToken();
			switch (order) {
			case "push":
				int orderNum = Integer.parseInt(orderFull.nextToken());
				push(orderNum, que);
				break;
			case "pop":
				pop(que);
				break;
			case "size":
				size(que);
				break;
			case "empty":
				empty(que);
				break;
			case "front":
				front(que);
				break;
			case "back":
				back(que);
				break;
			}
		}
	}

	public static int lengthCal(int[] que) {
		int length = 0;
		for (int i = 0; i < que.length; i++) {
			if (que[i] != 0) {
				length++;
			}
		}
		return length;
	}

	public static void front(int[] que) {
		//lengthCal(que) 가 -1이 될수도 있다. 예외처리
		if (lengthCal(que) != 0  && que[lengthCal(que) - 1] != 0)
			System.out.println(que[lengthCal(que) - 1]);
		else
			System.out.println("-1");
	}

	public static void back(int[] que) {
		if (que[0] != 0) {
			System.out.println(que[0]);
		} else {
			System.out.println("-1");
		}
	}

	public static void empty(int[] que) {
		if (lengthCal(que) == 0) {
			System.out.println("1");
		} else
			System.out.println("0");
	}

	public static void size(int[] que) {
		System.out.println(lengthCal(que));
	}

	public static void pop(int[] que) {
		if (lengthCal(que) != 0) {
			System.out.println(que[lengthCal(que)-1]);
			que[lengthCal(que)-1] = 0;
		} else {
			System.out.println("-1");
		}
	}

	public static void push(int orderNum, int[] que) {
		if(que[0] != 0) {
			for(int i=lengthCal(que)-1; i>=0; i--) {
				que[i+1] = que[i]; 
			}
			que[0] = orderNum;
		}
		else {
			que[0] = orderNum;
		}
	}
}
