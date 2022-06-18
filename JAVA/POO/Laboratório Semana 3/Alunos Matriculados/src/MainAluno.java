public class MainAluno {
    public static void main(String[] args) {
        Aluno a1,a2,a3;
        Curso c1,c2,c3;
        Departamento d1,d2;

        //atribuindo departamentos via set
        d1 = new Departamento();
        d2 = new Departamento();

        d1.setNome("Instituto de Informatica");
        d1.setSigla("INF");
        
        d2.setNome("Instituto de Fisica");
        d2.setSigla("IF");

        //atribuindo cursos via set
        c1 = new Curso();
        c2 = new Curso();
        c3 = new Curso();
        
        c1.setNome("Engenharia de Software");
        c1.setSigla("ES");
        c1.setDpto(d1);

        c2.setNome("Inteligencia Artificial");
        c2.setSigla("IA");
        c2.setDpto(d1);

        c3.setNome("Bacharelado em Fisica");
        c3.setSigla("BF");
        c3.setDpto(d2);


        //atribuindo alunos via construtor
        a1 = new Aluno("Lucas", 202201, 2022, c1);
        a2 = new Aluno("Marcos", 202003, 2020, c2);
        a3 = new Aluno("Julia", 202106, 2021, c3);


        //printando as informacoes usando toString
        System.out.println("Perfil do Aluno 1: \n" + a1);
        System.out.println("\nPerfil do Aluno 2: \n" + a2);
        System.out.println("\nPerfil do Aluno 3: \n" + a3);

    }
}
