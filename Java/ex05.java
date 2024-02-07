import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class ex05 {
    public static void main(String[] args){
        List<Float> listaNotas = new ArrayList<>();
        List<Float> listaPesos = new ArrayList<>();

        byte i;
        float nota, peso;
        try (Scanner in = new Scanner(System.in)) {
            for (i = 1; i <= 3; i++) {
                System.out.print("Digite a " + i + "ª nota: ");
                nota = in.nextFloat();
                listaNotas.add(nota);

                System.out.print("Digite o peso da " + i + "ª nota: ");
                peso = in.nextFloat();
                listaPesos.add(peso);
            }
        }

        float numParcial,pesoParcial;
        float resultadoParcial = 0;
        float pesoTotal = 0;

        for (i = 0; i <= 2; i++) {
            numParcial = listaNotas.get(i);
            pesoParcial = listaPesos.get(i);
            pesoTotal = pesoTotal + pesoParcial;

            resultadoParcial = resultadoParcial + (numParcial*pesoParcial);
        } 

        float resultadoFinal = resultadoParcial/pesoTotal;
        System.out.println("Resultado final: " + resultadoFinal);
    }
}
