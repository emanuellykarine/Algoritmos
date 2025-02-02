import java.io.BufferedReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.io.FileReader;

public class selectionSort{
    public static void main(String[] args){
        List<Integer> lista = new ArrayList<>(); //Criação da lista para guardar os valores
<<<<<<< HEAD
        try(BufferedReader br = new BufferedReader(new FileReader(args[0]))){ //leitura do arquivo
=======
        try(BufferedReader br = new BufferedReader(new FileReader("100Numeros.txt"))){ //leitura do arquivo
>>>>>>> 273086a59f771fb0dd65dc7593955e5980724e29
            String line = br.readLine(); //linha por linha
            while (line != null){
                lista.add(Integer.parseInt(line)); //guarda linha na lista transformando para inteiro
                line = br.readLine();     
            }

            int[] array = lista.stream().mapToInt(i -> i).toArray();

            long tempoInicial = System.currentTimeMillis(); //tempo inicial antes da execução do código
<<<<<<< HEAD
            for (int i = 0; i < array.length; i++){ //Percorre todo o array
                int indiceDoMenor = i; // Recebe o índice do valor atual 
                for (int j = i + 1; j < array.length; j++){ // Começa do numero da frente e vai ate o final do array
                    if (array[j] < array[indiceDoMenor]){ //Se valor no índice j for menor que o anterior
                        indiceDoMenor = j; //Indice do menor recebe indice do atual, pois o menor é o atual
                    }
                }
                //Depois que acha o menor de todos, traz ele pra frente
                int guarda = array[i]; //Variável guarda recebe valor de comparação inicial que estava no índice i 
                array[i] = array[indiceDoMenor]; //Guarda o menor valor encontrado no indice inicial
                array[indiceDoMenor] = guarda; //Guarda o valor de comparação inicial na posição antiga do menor valor encontrado, os trocando de posição  
=======
            for (int i = 0; i < array.length; i++){ //vai até o ultimo
                int indiceDoMenor = i;
                for (int j = i + 1; j < array.length; j++){ // começa do numero da frente e vai ate o final
                    if (array[j] < array[indiceDoMenor]){ //se for menor
                        indiceDoMenor = j; //indice do menor recebe indice do atual 
                    }
                }
                //Depois que acha o menor de todos, traz ele pra frente
                int guarda = array[i]; //recebe valor de comparação inicial
                array[i] = array[indiceDoMenor]; //guarda o menor valor no indice inicial
                array[indiceDoMenor] = guarda; //guardar o valor de comparação inicial na posição antiga do menor
                
>>>>>>> 273086a59f771fb0dd65dc7593955e5980724e29
            }
            System.out.print("tempo de execução:" + (System.currentTimeMillis() - tempoInicial) + " milisegundos \n"); 
            for (int i = 0; i < array.length; i++){
                System.out.println(array[i]);
            }
        } catch (IOException e){
            System.err.println("Erro ao ler o arquivo: " + e.getMessage());
        }
    }        
} 