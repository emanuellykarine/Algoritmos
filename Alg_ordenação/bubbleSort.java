import java.io.BufferedReader;
import java.io.IOException;
import java.util.ArrayList;
import java.io.FileReader;

public class bubbleSort{
    public static void main(String[] args){
        ArrayList<Integer> lista = new ArrayList<Integer>(); //Criação da lista para guardar os valores
        try(BufferedReader br = new BufferedReader(new FileReader("1000000Numeros.txt"))){ //leitura do arquivo
            String line = br.readLine(); //linha por linha
            while (line != null){
                lista.add(Integer.parseInt(line)); //guarda linha na lista transformando para inteiro
                line = br.readLine();     
            }

            long tempoInicial = System.currentTimeMillis(); //tempo inicial antes da execução do código
            for (int i = 0; i < lista.size() - 1; i++){ //vai até o antepenultimo
                boolean troca = false; //não teve trocas
                for (int j = 0; j < lista.size() - i - 1; j++){ // vai ate o tamanho menos i menos 1, pq dps que ja trocou os ultimos, os maiores ja vao estar no final
                    if (lista.get(j) > lista.get(j + 1)){
                        int guarda = lista.get(j);
                        lista.set(j, lista.get(j+1));
                        lista.set(j+1, guarda);
                        troca = true;
                    }
                }

                if (!troca){
                    break;
                }
            }
            System.out.print("tempo de execucao:" + (System.currentTimeMillis() - tempoInicial) + " milisegundos \n"); 

        } catch (IOException e){
            System.err.println("Erro ao ler o arquivo: " + e.getMessage());
        }
    }        
} 

// https://www.geeksforgeeks.org/bubble-sort-algorithm/