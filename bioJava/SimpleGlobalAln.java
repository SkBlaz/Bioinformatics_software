VERSION 1


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package globalalignment;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.text.DecimalFormat;

public class Globalalignment {
    
    static DecimalFormat df = new DecimalFormat("#0.00"); 
    
    public static void aln() throws FileNotFoundException, IOException{
        
        
        BufferedReader br1 = new BufferedReader(new InputStreamReader(System.in));
        String f1;   

        System.out.println("Enter first fasta: ");
        f1 = br1.readLine();
        
        BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));
        String f2;   

        System.out.println("Enter second fasta: ");
        f2 = br1.readLine();
        
        
       String a1 = f1;
       String a2 = f2;
        
        double hit = 0;               
        double ratio;

        int l1 = a1.length();      
        int l2 = a2.length();
        
     if(l1 <= l2 || l1 == l2){    
        for(int i=0;i < l1;i++){

            if (a1.charAt(i) == a2.charAt(i) ){
                hit++;
            }

        }       
    }else{
         for(int i=0;i< l2;i++){

            if (a2.charAt(i) == a1.charAt(i) ){
                hit++;
            }

        }        
     }
     
     
         
    int pres;       
    pres = (int) hit;
    ratio = hit/l1; 
    System.out.println("number of hits: " + pres + "\n" +"Align ratio: " + df.format(ratio) );
        
    }
    
public static void main(String[] args) throws IOException {
    
        Globalalignment.aln();
    }
    
}


VERSION 2

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package globalalignment;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.text.DecimalFormat;

public class Globalalignment {
    
    static DecimalFormat df = new DecimalFormat("#0.00"); 
    private static String f1;
    private static String f2;
    
    public static void aln() throws FileNotFoundException, IOException{
        
        BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));
        String p2;   

        System.out.println("Enter first fasta: ");
        p2 = br2.readLine();
        
        BufferedReader br3 = new BufferedReader(new InputStreamReader(System.in));
        String p1;   

        System.out.println("Enter second fasta: ");
        p1 = br3.readLine();
        
        f1 = readerf.readFile(p2);
        f2 = readerf.readFile(p1);
        
        
       String a1 = f1;
       String a2 = f2;
        
        double hit = 0;               
        double ratio;

        int l1 = a1.length();      
        int l2 = a2.length();
        
     if(l1 <= l2 || l1 == l2){    
        for(int i=0;i < l1;i++){

            if (a1.charAt(i) == a2.charAt(i) ){
                hit++;
            }

        }       
    }else{
         for(int i=0;i< l2;i++){

            if (a2.charAt(i) == a1.charAt(i) ){
                hit++;
            }

        }        
     }
     
     
         
    int pres;       
    pres = (int) hit;
    ratio = hit/l1; 
    System.out.println("number of hits: " + pres + "\n" +"Align ratio: " + df.format(ratio) );
        
    }
    
public static void main(String[] args) throws IOException {
    
        Globalalignment.aln();
    }
    
}


﻿READER CLASS

package globalalignment;

import java.io.File;
import java.io.FileReader;
import java.io.IOException;
 
 
public class readerf {

public static String readFile(String filename)
{
   String content = null;
   File file = new File(filename); //for ex foo.txt
   try {
       try (FileReader reader = new FileReader(file)) {
           char[] chars = new char[(int) file.length()];
           reader.read(chars);
           content = new String(chars);
       }
   } catch (IOException e) {
   }
   return content;
}
    
}