package reader;

import java.io.File;

import java.io.FileNotFoundException;

import java.util.Scanner;

public class reader {

                

                

                

                public static String gc() throws FileNotFoundException {

                               

                               Scanner user_input = new Scanner(System.in);

                               

                               String inpt;

                               

                               System.out.print("enter the name of the sequence:  ");

                               

                               String seq1 = user_input.next();

                               

                               

                               

                               Scanner scanner = new Scanner(new File(seq1));

                               scanner.nextLine();

                               String content = scanner.useDelimiter("\\Z").next();

                               

                               return content;

                               

                               

                               

                }

}






package reader;

import java.io.FileNotFoundException;

public class GC {

      

      public static void main(String[] args) throws FileNotFoundException {

            reader seq = new reader();

            String s = reader.gc();

            int G =0, A = 0,T = 0, C = 0;

            double GC = 0, tot = 0; 

            int N = 0;

            for(int i = 0; i < s.length(); i++)

            {

                switch(s.charAt(i)){

                case 'G': G++;GC++;tot++;

                

                case 'C': C++;GC++;tot++;

                

                case 'T': T++;tot++;

                

                case 'A': A++;tot++;

                

                case 'N': N++;tot++;

                

                }

               

            }

            System.out.println("Total number of nucleotides: " + tot);

            System.out.println("A: " + A);

            System.out.println("T: " + T);

            System.out.println("G: " + G);

            System.out.println("C: " + C);

            System.out.println("N: " + C);

            System.out.println("GC content is " + (GC/tot)*100 + "%");

            System.out.println("Percent of unknown:  " + (N/tot)*100 + "%");       

      }

}