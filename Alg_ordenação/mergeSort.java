import java.io.BufferedReader;
import java.io.IOException;
import java.util.ArrayList;
import java.io.FileReader;

public class mergeSort{
    public static void main(String[] args){
        ArrayList<Integer> lista = new ArrayList<Integer>(); //Criação da lista para guardar os valores
        try(BufferedReader br = new BufferedReader(new FileReader("100Numeros.txt"))){ //leitura do arquivo
            String line = br.readLine(); //linha por linha
            while (line != null){
                lista.add(Integer.parseInt(line)); //guarda linha na lista transformando para inteiro
                line = br.readLine();     
            }

            long tempoInicial = System.currentTimeMillis(); //tempo inicial antes da execução do código
            
            System.out.print("tempo de execução:" + (System.currentTimeMillis() - tempoInicial) + " milisegundos \n"); 
        } catch (IOException e){
            System.err.println("Erro ao ler o arquivo: " + e.getMessage());
        }
    }        
} 

// https://joaoarthurbm.github.io/eda/posts/merge-sort/
//https://github.com/joaoarthurbm/eda-implementacoes/blob/master/java/src/sorting/MergeSort.java