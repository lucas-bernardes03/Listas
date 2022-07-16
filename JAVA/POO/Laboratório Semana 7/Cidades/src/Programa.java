import java.util.Locale;

public class Programa {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Cidade c1,c2,c3,c4,c5;

        c1 = new Cidade("APS", "Anapolis", 918.3);
        c2 = new Cidade("APG", "Aparecida de Goiania", 723.6);
        c3 = new Cidade("GYN", "Goiania", 1259.9);
        c4 = new Cidade("SP", "Sao Paulo", 3200.2);
        c5 = new Cidade("JTI", "Jatai", 350.3);
        
        //adicionando populacao
        c1.setPopulacao(400000);
        c2.setPopulacao(590000);
        c3.setPopulacao(2000000);
        c4.setPopulacao(12330000);
        c5.setPopulacao(102000);

        //adicionando fronteiras
        c1.addFronteira(c2);
        c1.addFronteira(c4);
        c1.addFronteira(c5);

        c2.addFronteira(c1);
        c2.addFronteira(c3);
        c2.addFronteira(c5);

        c3.addFronteira(c1);
        c3.addFronteira(c2);
        c3.addFronteira(c5);

        c5.addFronteira(c1);
        c5.addFronteira(c2);
        c5.addFronteira(c3);

        //mostraDados
        System.out.println("Mostra dados: ");
        System.out.println(c1.mostraDados());
        System.out.println(c2.mostraDados());
        System.out.println(c3.mostraDados());
        System.out.println(c4.mostraDados());
        System.out.println(c5.mostraDados());
        System.out.println();


        //testando isLimitrofe
        System.out.println("===== isLimitrofe: =====");
        System.out.println("C1 - C2: " + c1.isLimitrofe(c2));
        System.out.println("C1 - C3: " + c1.isLimitrofe(c3));
        System.out.println("C1 - C4: " + c1.isLimitrofe(c4));
        System.out.println("C2 - C5: " + c2.isLimitrofe(c5));
        System.out.println("C2 - C4: " + c2.isLimitrofe(c4));
        System.out.println("C4 - C5: " + c4.isLimitrofe(c5));
        System.out.println();

        //testando isIgual
        System.out.println("===== isIgual: =====");
        System.out.println("C1 - C1: " + c1.isIgual(c1));
        System.out.println("C1 - C2: " + c1.isIgual(c2));
        System.out.println("C2 - C3: " + c2.isIgual(c3));
        System.out.println("C2 - C5: " + c2.isIgual(c5));
        System.out.println("C3 - C3: " + c3.isIgual(c3));
        System.out.println("C3 - C5: " + c3.isIgual(c5));
        System.out.println("C4 - C4: " + c4.isIgual(c4));
        System.out.println();

        //classificacao
        System.out.println("===== Classificacao =====");
        System.out.println(c1.getNome() + " - " + c1.classificacao());
        System.out.println(c2.getNome() + " - " + c2.classificacao());
        System.out.println(c3.getNome() + " - " + c3.classificacao());
        System.out.println(c4.getNome() + " - " + c4.classificacao());
        System.out.println(c5.getNome() + " - " + c5.classificacao());
        System.out.println("=========================");



    }
}
