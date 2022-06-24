package entities;

import java.util.ArrayList;
import java.util.List;

public abstract class Item {
    private String titulo;
    private int ano;
    private int tempoDuracao;
    private List<String> comentarios = new ArrayList<>();

    public Item(){}
    
    public Item(String titulo, int ano, int tempoDuracao) {
        this.titulo = titulo;
        this.ano = ano;
        this.tempoDuracao = tempoDuracao;
    }

    public String getTitulo() {
        return titulo;
    }
    
    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }
    
    public int getAno() {
        return ano;
    }
    
    public void setAno(int ano) {
        this.ano = ano;
    }
    
    public int getTempoDuracao() {
        return tempoDuracao;
    }
    
    public void setTempoDuracao(int tempoDuracao) {
        this.tempoDuracao = tempoDuracao;
    }

    public List<String> getComentarios() {
        return comentarios;
    }

    public void addcomentario(String comentario){
        comentarios.add(comentario);
    }
    
    public void removeComentario(String comentario){
        comentarios.remove(comentario);
    }
    
    public abstract String toString();
        
    
}
