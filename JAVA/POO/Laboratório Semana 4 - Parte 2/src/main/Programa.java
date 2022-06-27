package main;

import java.util.ArrayList;
import java.util.List;

import entities.CD;
import entities.Filme;
import entities.Item;
import entities.Jogo;

public class Programa {
    public static void main(String[] args) {
        List<Item> list = new ArrayList<>();

        Item cd1 = new CD("Summer Eletrohits 5", 2005, 41, "Mix", 13);
        cd1.addcomentario("Muito Bom!");
        cd1.addcomentario("Irado!");
        list.add(cd1);

        Item cd2 = new CD("Leonardo - Ao Vivo", 2011, 33, "Leonardo", 10);
        cd2.addcomentario("Ele e demais");
        cd2.addcomentario("Saudades demais ouvindo isso!");
        list.add(cd2);

        Item cd3 = new CD("Meteora", 2009, 47, "Linkin Park", 13);
        cd3.addcomentario("Incredible!");
        cd3.addcomentario("We miss you Charlie");
        list.add(cd3);

        Item f1 = new Filme("Top Gun", 2022, 115, "Tony Scott");
        f1.addcomentario("Tom Cruise still got it.");
        f1.addcomentario("Thats an Oscar winning movie!");
        list.add(f1);

        Item f2 = new Filme("Homem-Aranha", 2008, 100, "Sam Raimi");
        f2.addcomentario("We love Tobey, we do!");
        f2.addcomentario("The best from them all!");
        list.add(f2);

        Item f3 = new Filme("Kimi No Na Wa", 2016, 112, "Makoto Shinkai");
        f3.addcomentario("とても良い!");
        f3.addcomentario("マンガの素晴らしい適応");
        list.add(f3);

        Item f4 = new Filme("Quem quer ser um Milionario?", 2008, 115, "Danny Boyle");
        f4.addcomentario("बहुत अच्छा!");
        f4.addcomentario("अनोखी कहानी!");
        list.add(f4);

        Item j1 = new Jogo("The Last of Us", 2011, 600, 2, "Playstation");
        j1.addcomentario("GOTY!");
        j1.addcomentario("Incrivel!");
        list.add(j1);

        Item j2 = new Jogo("God of War", 2019, 900, 1, "Playstation");
        j2.addcomentario("GOTY! GOTY! GOTY!");
        j2.addcomentario("Otima evolucao dos anteriores");
        list.add(j2);

        Item j3 = new Jogo("Halo: Infinite", 2021, 500, 1, "Xbox");
        j3.addcomentario("Boa continuacao da franquia");
        j3.addcomentario("Masterpiece");
        list.add(j3);
        
        for(Item i : list){
            System.out.println();
            System.out.println(i.toString());
            //checar se o item é um jogo
            if(i instanceof Jogo){
                Jogo tmp = (Jogo) i;
                System.out.println(tmp.platJogo());
            }
        }

    }
}
