import java.util.Scanner;

public class ex04 {
    public static void main(String[] args){
        System.out.print("Insira sua idade: ");
        Scanner in = new Scanner(System.in);

        byte idade = in.nextByte();
        boolean maior;

        if (idade>=18){
            maior = true;
        }else{
            maior = false;
        }

        if(maior){
            System.out.println("Voce eh maior de idade!");
        }else{
            System.out.println("Voce eh menor de idade!");
        }

        in.close();
    }    
}
