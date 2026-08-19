import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
    public static void main(String[] args) {
        double venda= 3.2;
        double taxa= 1.3;
        int meses = 3;
        double resultado = venda * Math.pow(taxa,meses);
        System.out.println("O resultado é " + resultado);
    }
}