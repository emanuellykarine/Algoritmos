import java.io.BufferedReader;
import java.io.IOException;
import java.util.ArrayList;
import java.io.FileReader;

public class insertionSort{
    public static void main(String[] args){
        ArrayList<Integer> lista = new ArrayList<Integer>(); //Criação da lista para guardar os valores
        try(BufferedReader br = new BufferedReader(new FileReader("100000Numeros.txt"))){ //leitura do arquivo
            String line = br.readLine(); //linha por linha
            while (line != null){
                lista.add(Integer.parseInt(line)); //guarda linha na lista transformando para inteiro
                line = br.readLine();     
            }

            long tempoInicial = System.currentTimeMillis(); //tempo inicial antes da execução do código
            for (int i = 1; i < lista.size(); i++){ //vai até o final da lista
                int valor = lista.get(i); //pega o valor e usa como principal de comparação
                int j = i - 1; //j começa do anterior
                while (j >= 0 && valor < lista.get(j)){ //enquanto j for maior ou igual a 0 e valor for menor
                    lista.set(j+1, lista.get(j)); //empurra o maior pra frente
                    j = j - 1; //diminui do indice j
                }

                lista.set(j+1, valor); //guarda o menor valor na posição que restou antes dos maiores 
            }
            System.out.print("tempo de execução:" + (System.currentTimeMillis() - tempoInicial) + " milisegundos \n"); 
        } catch (IOException e){
            System.err.println("Erro ao ler o arquivo: " + e.getMessage());
        }
    }        
} 

