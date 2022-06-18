public class MusicaMain {
    public static void main(String[] args) {
        Musica m1,m2,m3;
        Compositor c1,c2,c3;
        
        //atribuicao atraves de construtores
        c1 = new Compositor("Henrique e Juliano", "Brasil");
        c2 = new Compositor("$UICIDEBOY$", "USA");
        c3 = new Compositor("Drake", "USA");
        
        m1 = new Musica("Ate voce voltar", 2014, "Sertanejo", c1);
        m2 = new Musica("Escape from BABYLON", 2022, "Hip-Hop", c2);
        m3 = new Musica("God's Plan", 2018, "Rap", c3);

        System.out.println("Musica 1\n" + m1);
        System.out.println("\nMusica 2\n" + m2);
        System.out.println("\nMusica 3\n" + m3);

    }
}
