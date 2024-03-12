import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

// 영어 알파벳은 총 26개이다.
public class baekjoon_10809 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String S = br.readLine();

        int[] arr = new int[26];
        for(int i=0; i<arr.length; i++) { //length에서 배열은 괄호를 쓰지 않는다.
            arr[i] = -1;
        }

        for(int i=0; i<S.length(); i++) {
            char c = S.charAt(i);
            if(arr[c - 'a'] == -1)
                arr[c - 'a'] = i;
        }

        for(int value : arr) { //배열 순회 간소화
            System.out.print(value + " ");
        }
    }
}