import java.util.ArrayList;
import java.util.List;

public class Program {
    public static void main(String[] args) {
        List<Produto> list = new ArrayList<>();

        list.add(new Produto("TV", 1000));
        list.add(new Produto("Notebook", 3000));
        list.add(new Produto("PS5", 5000));
        list.add(new Produto("Tablet", 500));
        list.add(new Produto("CPU", 800));

        //predicate 
        list.removeIf(p -> p.getValor() > 1000);
        for(Produto p : list) System.out.println(p);
        System.out.println();

        //consumer
        list.forEach(p -> p.setValor(p.getValor() * 1.2));
        for(Produto p : list) System.out.println(p);
        System.out.println();

        //map
        List<String> nomes = list.stream().map(p -> p.getNome().toUpperCase()).toList();
        for(String s : nomes) System.out.println(s);
        System.out.println();

        double sum = list.stream().filter(p -> p.getNome().charAt(0) == 'T').mapToDouble(p -> p.getValor()).sum();
        System.out.println(sum);
    }
}
