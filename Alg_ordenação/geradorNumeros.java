import java.util.Random;
import java.io.FileWriter;
import java.io.BufferedWriter;
import java.io.IOException;

public class geradorNumeros{
    public static void main(String[] args){
        String arquivo = "1000000Numeros.txt";

        Random gerador = new Random();
        try (BufferedWriter br = new BufferedWriter(new FileWriter(arquivo))){
            for (int i = 0; i < 1000000; i++){
                int numero = gerador.nextInt(1000000);
                br.write(String.valueOf(numero));
                br.newLine();
            }
        } catch (IOException e){
            System.err.println("Erro ao escrever no arquivo: " + e.getMessage());
        }
    }
}