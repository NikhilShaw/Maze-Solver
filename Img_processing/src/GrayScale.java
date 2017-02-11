import java.awt.*;
import java.awt.geom.AffineTransform;
import java.awt.image.BufferedImage;

import java.io.*;

import javax.imageio.ImageIO;
import javax.swing.JFrame;

public class GrayScale {

   BufferedImage  image;
   int width;
   int height;
   
   public GrayScale() {
   
      try {
         File input = new File("trforreal.jpg");
         image = ImageIO.read(input);
         width = image.getWidth();
         height = image.getHeight();
         
         for(int i=0; i<height; i++){
         
            for(int j=0; j<width; j++){
            
               Color c = new Color(image.getRGB(j, i));
               int red = (int)(c.getRed() * 0.299);
               int green = (int)(c.getGreen() * 0.587);
               int blue = (int)(c.getBlue() *0.114);
               Color newColor = new Color(red+green+blue,
               
               red+green+blue,red+green+blue);
               image.setRGB(j,i,newColor.getRGB());
               
            }
         }
         System.out.println("yolo");
         File ouptut = new File("tryforrealgrayscale.jpg");
         ImageIO.write(image, "jpg", ouptut);
         
      } catch (Exception e) {System.out.println(e.getMessage());}
   
   //////////////////////////////

      try{
   	   
    	BufferedImage sbi;
    	int imageType=BufferedImage.TYPE_BYTE_BINARY, dWidth,  dHeight;
    	double fWidth, fHeight; 
  	    File input = new File("tryforrealgrayscale.jpg");
         sbi = ImageIO.read(input);
         dWidth = image.getWidth();
         dHeight = image.getHeight();
         fWidth = 0.15;
         fHeight = 0.15;
  	    BufferedImage dbi = null;
  	    if(sbi != null) {
  	        dbi = new BufferedImage(dWidth, dHeight, imageType);
  	        Graphics2D g = dbi.createGraphics();
  	        AffineTransform at = AffineTransform.getScaleInstance(fWidth, fHeight);
  	        g.drawRenderedImage(sbi, at);
  	    }
  	    System.out.println("yo");
         File ouptut = new File("tryforreal_pixelated.jpg");
         ImageIO.write(dbi, "jpg", ouptut);
  	   
     }catch(Exception e){System.out.println(e.getMessage()+" reduce pixel");};
   
      
      
      ////////////
      try {
          File input = new File("tryforreal_pixelated.jpg");
          image = ImageIO.read(input);
          width = image.getWidth();
          height = image.getHeight();
          
          Color black = new Color(0,0,0);
          Color white = new Color(255,255,255);
          int threshold, max=0, min=255, avg=0;
          
        for(int i=0; i<height; i++){
          
             for(int j=0; j<width; j++){
             
                Color c = new Color(image.getRGB(j, i));
                int red = (int)(c.getRed());
                if(red>max)
                {
                  max=red;
                }
                if(red<min)
                  min=red;
             }
          }
          
          	threshold = (min+max)/2;
          //	threshold = avg/(height*width);
          	System.out.println("Thresh: "+threshold);
          System.out.println(min+" "+max+" "+threshold);
          
          for(int i=0; i<height; i++){
              
              for(int j=0; j<width; j++){
              
                 Color c = new Color(image.getRGB(j, i));
                 int red = (int)(c.getRed());
                 
                 if(red>threshold)
                 {
                   image.setRGB(j,i,white.getRGB());
                 }
                 else
                 {
                   image.setRGB(j,i,black.getRGB());
                 }
       
                
             }
          }
          System.out.println("yolo21");
          File ouptut = new File("tryforrealgrayscale_half.jpg");
          ImageIO.write(image, "jpg", ouptut);
          
       } catch (Exception e) {System.out.println(e.getMessage()+" 2");
     } 
      
      
      
     /////////////

      try{
   	   
    	BufferedImage sbi;
    	int imageType=BufferedImage.TYPE_BYTE_BINARY, dWidth,  dHeight;
    	double fWidth, fHeight; 
  	    File input = new File("tryforrealgrayscale_half.jpg");
         sbi = ImageIO.read(input);
         dWidth = image.getWidth();
         dHeight = image.getHeight();
         fWidth = 0.15;
         fHeight = 0.15;
  	    BufferedImage dbi = null;
  	    if(sbi != null) {
  	        dbi = new BufferedImage(dWidth, dHeight, imageType);
  	        Graphics2D g = dbi.createGraphics();
  	        AffineTransform at = AffineTransform.getScaleInstance(fWidth, fHeight);
  	        g.drawRenderedImage(sbi, at);
  	    }
  	    System.out.println("yo");
         File ouptut = new File("tryforreal_pixelated2.jpg");
         ImageIO.write(dbi, "jpg", ouptut);
  	   
     }catch(Exception e){System.out.println(e.getMessage()+" reduce pixel");};
   
      try {
          File input = new File("tryforreal_pixelated2.jpg");
          width = image.getWidth();
          height = image.getHeight();
          
          Color black = new Color(0,0,0);
          Color white = new Color(255,255,255);
          int threshold, max=0, min=255, avg=0;
          
        for(int i=0; i<height; i++){
          
             for(int j=0; j<width; j++){
             
                Color c = new Color(image.getRGB(j, i));
                int red = (int)(c.getRed());
                if(red>max)
                {
                  max=red;
                }
                if(red<min)
                  min=red;
             }
          }
          
          	threshold = (min+max)/2;
          //	threshold = avg/(height*width);
          	System.out.println("Thresh: "+threshold);
          System.out.println(min+" "+max+" "+threshold);
          
          for(int i=0; i<height; i++){
              
              for(int j=0; j<width; j++){
              
                 Color c = new Color(image.getRGB(j, i));
                 int red = (int)(c.getRed());
                 
                 if(red>threshold)
                 {
                   image.setRGB(j,i,white.getRGB());
                 }
                 else
                 {
                   image.setRGB(j,i,black.getRGB());
                 }
       
                
             }
          }
          System.out.println("yolo21");
          File ouptut = new File("tryforrealgrayscale_half2.jpg");
          ImageIO.write(image, "jpg", ouptut);
          System.out.println(image.getWidth()+" "+image.getHeight());
          
       } catch (Exception e) {System.out.println(e.getMessage()+" 2");
     } 
      
    
     ///////////////////////// REDUCE
     try{

          File input = new File("tryforrealgrayscale_half2.jpg");
          image = ImageIO.read(input);
          width = image.getWidth();
          height = image.getHeight();
          System.out.println(width+" "+height);
          int count=0;
          for (int i=0;i<(width-1);i++)
          {
              boolean flag=true;
              for(int j=0;j<height;j++)
              {
                Color c1 = new Color(image.getRGB(i, j));
                int red1 = (int)(c1.getRed());
                Color c2 = new Color(image.getRGB(i+1, j));
                int red2 = (int)(c2.getRed());
                if(red1!=red2)
                {
                  flag=false;
                  break;
                }

              }

             if(flag==true)
             {
               count=count+1;
               for(int j=0;j<height;j++)
               {
                 Color c1 = new Color(image.getRGB(i, j));
                 image.setRGB(i+1,j,c1.getRGB());

               } 
             }

          }
          
          System.out.println("Count: "+count);
          File ouptut = new File("tryforrealgrayscale_half2_red.jpg");
          ImageIO.write(image, "jpg", ouptut);



     } catch(Exception e){ System.out.println(e.getMessage()+" Error in reduce ");}

/////////////////////////


   }
   
   
   static public void main(String args[]) throws Exception 
   {
      GrayScale obj = new GrayScale();
      
   }
}
