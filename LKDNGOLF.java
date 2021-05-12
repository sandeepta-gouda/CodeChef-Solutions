import java.util.*;

import java.lang.*;

import java.io.*;


class Codechef{

	public static void main (String[] args) throws IOException{

	    BufferedReader br=new BufferedReader(new InputStreamReader(System.in));

	    try{

	       int TestCase = Integer.parseInt(br.readLine());

	       while(TestCase-- > 0){

	            String[] input = br.readLine().split(" ");

	            int totalNumTiles = Integer.parseInt(input[0]);

	            totalNumTiles++;

	            int tileNumWhereHole = Integer.parseInt(input[1]);

	            int bouncingLength = Integer.parseInt(input[2]);

	            

	            int i = tileNumWhereHole % bouncingLength;

	            if (i == 0){

	                System.out.println("Yes");

	                continue;

	            }

	            i = totalNumTiles - tileNumWhereHole;

	            if (i % bouncingLength == 0)

	                System.out.println("Yes");

	                

	            else

	                System.out.println("No");

    	    }

	    }catch(Exception e){}

	}

}