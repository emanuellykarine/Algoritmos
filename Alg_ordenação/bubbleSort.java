import java.io.BufferedReader;
import java.io.IOException;
import java.util.ArrayList;
import java.io.FileReader;

public class bubbleSort{
    public static void main(String[] args){
        ArrayList<Integer> lista = new ArrayList<Integer>(); //Criação da lista para guardar os valores
        try(BufferedReader br = new BufferedReader(new FileReader(args[0]))){ //leitura do arquivo
            String line = br.readLine(); //linha por linha
            while (line != null){
                lista.add(Integer.parseInt(line)); //guarda linha na lista transformando para inteiro
                line = br.readLine();     
            }

            long tempoInicial = System.currentTimeMillis(); //tempo inicial antes da execução do código
            for (int i = 0; i < lista.size() - 1; i++){ //Vai até o antepenultimo
                boolean troca = false; //Não teve trocas
                for (int j = 0; j < lista.size() - i - 1; j++){ // Vai ate o tamanho menos i menos 1, por que depois que ja houve as trocas, os maiores ja vao ser empurrados pro final
                    if (lista.get(j) > lista.get(j + 1)){ // Se elemento no índice j for maior do que o elemento no índice j+1, ou seja do que o elemento da frente 
                        int guarda = lista.get(j); // Recebe maior valor
                        lista.set(j, lista.get(j+1)); // Guarda o menor no lugar do maior
                        lista.set(j+1, guarda); // Guarda o maior no lugar do menor, ou seja na frente do menor
                        troca = true; // Troca para true pra informar que houve uma troca
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