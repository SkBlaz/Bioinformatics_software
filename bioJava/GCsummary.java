package substringfinder;

public class GC {

      

      public static void main(String[] args) {

            String s = "ATGCGTAGCGCATGCGATGCCGATGCTGACA";

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

                

                case 'N': N++;

                

                }

               

            }

            System.out.println("Total number of nucleotides: " + tot);

            System.out.println("A: " + A);

            System.out.println("T: " + T);

            System.out.println("G: " + G);

            System.out.println("C: " + C);

            System.out.println("N: " + C);

            System.out.println("GC content is " + (GC/tot)*100 + "%");

            

      }

}