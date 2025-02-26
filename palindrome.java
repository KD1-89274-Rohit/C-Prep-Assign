import java.util.Scanner;

public class palindrome {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter string to check :");
        String str = sc.nextLine();
        str = str.toLowerCase();
        boolean isPalindrome = true;
        int start =0,end =str.length()-1;
        while(start<=end) {
            if (str.charAt(start) != str.charAt(end)) {
                isPalindrome =false;
                break;
            }
            start++;
            end--;
        }
        if(isPalindrome){
            System.out.println("Palindrome");
        }
        else{
            System.out.println("Not a Palindrome");
        }
    }

}
