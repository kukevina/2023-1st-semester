package baekjun;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

/*
백준 10828 : 스택 구현
*/
public class j10828 {
	
	public static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	
	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
		int orderTime = Integer.parseInt(bf.readLine());
		int[] stack = new int[10001];
		
        for (int i = 0; i < orderTime; i++) {
			StringTokenizer orderFull = new StringTokenizer(bf.readLine());
			String order = orderFull.nextToken();
			switch (order) {
			case "push":
				int orderNum = Integer.parseInt(orderFull.nextToken());
				push(orderNum, stack);
				break;
			case "pop":
				pop(stack);
				break;
			case "size":
				size(stack);
				break;
			case "empty":
				empty(stack);
				break;
			case "top":
				top(stack);
				break;
			}
		}
        bw.close();
	}
	
	
	public static void top(int[] stack) throws IOException {
		if(lengthCal(stack) > 0) {
			bw.write(stack[lengthCal(stack)-1] + "\n");
		}
		else {
			bw.write("-1\n");
		}
	}


	public static void empty(int[] stack) throws IOException {
		if(lengthCal(stack) == 0) 
			bw.write("1\n");
		else
			bw.write("0\n");
	}


	public static void size(int[] stack) throws IOException {
		bw.write(lengthCal(stack)+"\n");
	}


	public static void pop(int[] stack) throws IOException {
		if(lengthCal(stack) != 0) {
			bw.write(stack[lengthCal(stack)-1]+"\n");
			stack[lengthCal(stack)-1] = 0;
		}
		else {
			bw.write("-1\n");
		}
	}

	public static void push(int orderNum, int[] stack) {
		if(lengthCal(stack) != 0) {
			stack[lengthCal(stack)] = orderNum;
		}
		else{
			stack[0] = orderNum;
		}
	}

	public static int lengthCal(int[] stack) {
		int length = 0;
		for (int i = 0; i < stack.length; i++) {
			if (stack[i] != 0) {
				length++;
			}
		}
		return length;
	}
}
