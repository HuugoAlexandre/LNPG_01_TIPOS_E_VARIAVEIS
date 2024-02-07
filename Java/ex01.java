import java.util.Scanner;

public class ex01 {
    public static void main(String[] args){    
        double soma, sub, div, multi;
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite o primeiro numero: ");
        double n1 = scanner.nextDouble();
        System.out.print("Digite o segundo numero: ");
        double n2 = scanner.nextDouble();
    
        soma = n1 + n2;
        sub = n1 - n2;
        div = n1 / n2;
        multi = n1 * n2;
        
        System.out.println("Soma: "+ soma);
        System.out.println("Subtracao: "+ sub);
        System.out.println("Divisao: "+ div);
        System.out.println("Multiplicacao: "+ multi);
        
        scanner.close();
    }
}
