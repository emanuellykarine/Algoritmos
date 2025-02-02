import java.io.BufferedReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.io.FileReader;

public class insertionSort{
    public static void main(String[] args){
        List<Integer> lista = new ArrayList<>();
<<<<<<< HEAD
        try(BufferedReader br = new BufferedReader(new FileReader(args[0]))){ //leitura do arquivo
            String line = br.readLine(); //linha por linha
            
=======
        try(BufferedReader br = new BufferedReader(new FileReader("100Numeros.txt"))){ //leitura do arquivo
            String line = br.readLine(); //linha por linha
            int a = 0;
>>>>>>> 273086a59f771fb0dd65dc7593955e5980724e29
            while (line != null){
                lista.add(Integer.parseInt(line)); //guarda linha na lista transformando para inteiro
                line = br.readLine();     
            }

            int[] array = lista.stream().mapToInt(i -> i).toArray();
<<<<<<< HEAD

            long tempoInicial = System.currentTimeMillis(); //tempo inicial antes da execução do código
            for (int i = 1; i < array.length; i++){ //Vai até o final da lista
                int valor = array[i]; //Pega o valor e usa como principal de comparação
                int j = i - 1; //j começa do anterior a esse valor
                while (j >= 0 && valor < array[j]){ //Enquanto a variável j for maior ou igual a 0 e valor for menor
                    array[j+1] = array[j]; //Empurra o maior pra frente e vem trazendo o menor valor 
                    j = j - 1; //Diminui do indice j
                } // Caso o j seja menor que 0 é por que chegou no início da lista e não tem mais comparações
                  // Caso o valor seja maior que o anterior, ele fica na posição a frente do menor valor  

                array[j+1] = valor; //Guarda o valor no pedaço do array ja ordenado 
=======

            long tempoInicial = System.currentTimeMillis(); //tempo inicial antes da execução do código
            for (int i = 1; i < array.length; i++){ //vai até o final da lista
                int valor = array[i]; //pega o valor e usa como principal de comparação
                int j = i - 1; //j começa do anterior
                while (j >= 0 && valor < array[j]){ //enquanto j for maior ou igual a 0 e valor for menor
                    array[j+1] = array[j]; //empurra o maior pra frente
                    j = j - 1; //diminui do indice j
                }

                array[j+1] = valor; //guarda o menor valor na posição que restou antes dos maiores 
>>>>>>> 273086a59f771fb0dd65dc7593955e5980724e29
            }

            System.out.print("tempo de execução:" + (System.currentTimeMillis() - tempoInicial) + " milisegundos \n"); 

        } catch (IOException e){
            System.err.println("Erro ao ler o arquivo: " + e.getMessage());
        }
    }        
} 