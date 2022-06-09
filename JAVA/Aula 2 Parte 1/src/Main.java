package P1;
public class Main {
    public static void main(String[] args){
        Pessoa p1, p2, p3;

        p1 = new Pessoa("Lucas", 19, 'M', 12345678);
        p2 = new Pessoa("Maria", 23, 'F', 987654321);
        p3 = new Pessoa("Pablo", 88, 'M', 394878948);

        p1.dados();
        p2.dados();
        p3.dados();
    }
}
