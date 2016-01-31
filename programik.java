/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package square;

/**
 *
 * @author Krzychu
 */
public class Square {

   public static void main(String[] args) {
     
    }
   private double side=0;
   
   public Square () {
   }
   public Square (double side) {
       setSide(side);
   }
   
   public double getSide () {
       return side;
   }
   public void setSide (double side) {
       this.side=side;
   }
   public double getSquere () {
       return side*side;
   }
   }
  
