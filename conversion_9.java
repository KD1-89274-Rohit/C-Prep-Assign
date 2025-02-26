import java.util.Scanner;

public class conversion_9 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Integer Number: ");
        int num = sc.nextInt();
        //int a = 7/8;
        //System.out.print("Enter Integer Number: "+a);
        int oct = octal(num);
        String hex = hexa(num);
        int no = binary(num);
        System.out.println("Enter Integer Number octal conversion :" + oct);
        System.out.println("Enter Integer Number hexa conversion :" + hex);
        System.out.print("Enter Integer Number Binary conversion :" + no);
    }
    static int binary(int num){
        int n =0;
        int i=0;
        while(num!=0){
            int bit = num & 1;
            n = (int) (bit * Math.pow(10,i)+ n);
            num = num>>1;
            i++;
        }
        return n;
    }
    static int  octal(int num){
        int a,b,c,rem,ans =0,d=0;
        while(num>0) {
            rem = num / 8;
            ans = ans * 10 + (num % 8);
            num = rem;
        }
        while(ans!=0){
            c = ans%10;
            d = d*10 + c;
            ans = ans/10;
        }
        return d;
    }
    static String hexa(int num){
        char [] hexadec= {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
        int rem;
        //String ans = "";
        StringBuilder ans = new StringBuilder();
        while(num>0){
            rem = num % 16 ;
            ans.insert(0,hexadec[rem]);
            num = num /16 ;
        }
        return ans.toString();

    }
}
