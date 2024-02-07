import java.util.Scanner;

public class ex02 {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        System.out.print("Digite um numero: ");
        long num = in.nextLong();

        if (num % 2 == 0){
            System.out.println("Eh par");
        }
        else{
            System.out.println("Eh impar");
        }

        in.close();
    }    
}
