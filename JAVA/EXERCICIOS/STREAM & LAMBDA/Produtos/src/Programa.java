import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

import javax.swing.JOptionPane;

public class Programa {
    public static void main(String[] args) {
        Set<Produto> set = new HashSet<>();

        String path = JOptionPane.showInputDialog(null, "File path");

        try(BufferedReader bf = new BufferedReader(new FileReader(path))){
            String line = bf.readLine();
            while(line != null){
                String[] fields = line.split(",");
                set.add(new Produto(fields[0], Double.parseDouble(fields[1])));
                line = bf.readLine();
            }

            List<Produto> sorted = set.stream()
                    .filter(p -> p.getValor() < set.stream().mapToDouble(x -> x.getValor()).average().getAsDouble())
                    .sorted((p1, p2) -> - p1.getNome().toUpperCase().compareTo(p2.getNome().toUpperCase()))
                    .toList();
            
            Double avg = set.stream().mapToDouble(x -> x.getValor()).average().getAsDouble();
            
            StringBuilder sb = new StringBuilder();
            sb.append("PRODUTOS COM VALOR ABAIXO DA MEDIA\n");
            sb.append("Media: R$" + String.format("%.2f", avg) + "\n");
            for(Produto p : sorted) sb.append(p.getNome() + "\n");
            JOptionPane.showMessageDialog(null, sb.toString(), "PRODUTOS", JOptionPane.INFORMATION_MESSAGE);
            
        }
        catch(IOException e){
            System.out.println("Erro: " + e.getMessage());
        }
    }
}
