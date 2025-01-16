import java.util.Random;
import java.io.FileWriter;
import java.io.PrintWriter;

public class bubbleSort{
    public static void main(String[] args){
        Random gerador = new Random();
        FileWriter arq = new FileWriter("100Valores.txt");
        PrintWriter valores = new PrintWriter(arq);

        for (int i = 0; i < 100; i++){
            valores.print(gerador);
        }

        valores.close();

    }
}

// https://www.geeksforgeeks.org/bubble-sort-algorithm/