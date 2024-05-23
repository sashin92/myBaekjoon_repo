import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int a;
        int b;
        int c;
        
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        b = sc.nextInt();
        c = a + b;
        System.out.println(c);
    }
} 

// cf. 데이터스트림으로 입출력
// import java.io.BufferedReader;
// import java.io.InputStreamReader;
// import java.io.IOException;

// public class Main {
//     public static void main(String[] args) throws IOException {
//         int a;
//         int b;
//         int c;
        
//         BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
// 		String buf = br.readLine();
//         String[] bufArr = buf.split(" ");
// 		a = Integer.parseInt(bufArr[0]);
// 		b = Integer.parseInt(bufArr[1]);
//         c = a + b;
//         System.out.println(c);
//     }
// } 

