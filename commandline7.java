public class commandline7 {
    public static void main(String[] args) {
        //int num = Integer.parseInt(Arrays.toString(args));
        int num = Integer.parseInt(args[0]);
        for(int i = 1; i<=10; i++){
            System.out.println(num + " * " + i + " = " +num * i);
        }
    }
}