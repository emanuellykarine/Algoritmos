import java.io.BufferedReader;
import java.io.IOException;
import java.util.List;
import java.util.ArrayList;
import java.io.FileReader;

public class selectionSort{
    public static void main(String[] args){
        ArrayList<Integer> lista = new ArrayList<Integer>(); //Criação da lista para guardar os valores
        try(BufferedReader br = new BufferedReader(new FileReader("100Numeros.txt"))){ //leitura do arquivo
            String line = br.readLine(); //linha por linha
            while (line != null){
                lista.add(Integer.parseInt(line)); //guarda linha na lista transformando para inteiro
                line = br.readLine();     
            }

            long tempoInicial = System.currentTimeMillis(); //tempo inicial antes da execução do código
            for (int i = 0; i < lista.size(); i++){ //vai até o ultimo
                int indiceDoMenor = i;
                for (int j = i + 1; j < lista.size(); j++){ // começa do numero da frente e vai ate o final
                    if (lista.get(j) < lista.get(indiceDoMenor)){ //se for menor
                        indiceDoMenor = j; //indice do menor recebe indice do atual 
                    }
                }
                //Depois que acha o menor de todos, traz ele pra frente
                int guarda = lista.get(i); //recebe valor de comparação inicial
                lista.set(i, lista.get(indiceDoMenor)); //guarda o menor valor no indice inicial
                lista.set(indiceDoMenor, guarda); //guardar o valor de comparação inicial na posição antiga do menor
                
            }
            System.out.print("tempo de execução:" + (System.currentTimeMillis() - tempoInicial) + " milisegundos \n"); 
        } catch (IOException e){
            System.err.println("Erro ao ler o arquivo: " + e.getMessage());
        }
    }        
} 

