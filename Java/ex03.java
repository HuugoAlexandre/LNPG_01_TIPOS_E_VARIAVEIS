import java.util.Scanner;

public class ex03 {
    public static void main(String[] args){
        System.out.print("Insira a temperatura em Celsius: ");
        Scanner in = new Scanner(System.in);

        float celsius = in.nextFloat();
        float fahrenheit = celsius * 1.8f + 32;

        System.out.println(celsius + "° Celsius em Fahrenheit: " + fahrenheit);
        
        in.close();
    }
}
