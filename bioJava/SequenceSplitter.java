/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package GC;

import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author bibaleze69
 */
public class splitsDNA {

    public static List<String> splitEqually(String DNA1, int size) {
    // Give the list the right capacity to start with. You could use an array
    // instead if you wanted.
    List<String> ret = new ArrayList<String>((DNA1.length() + size - 1) / size);

    for (int start = 0; start < DNA1.length(); start += size) {
        ret.add(DNA1.substring(start, Math.min(DNA1.length(), start + size)));
    }
    return ret;
}
    
}
