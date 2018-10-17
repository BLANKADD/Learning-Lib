package First;
import javax.imageio.ImageIO;
import javax.media.jai.JAI;
import javax.media.jai.RenderedOp;

import com.sun.media.jai.codec.BMPEncodeParam;
import com.sun.media.jai.codec.ImageCodec;
import com.sun.media.jai.codec.ImageEncoder;

import java.awt.*;
import java.awt.image.BufferedImage;
import java.awt.image.MemoryImageSource;
import java.awt.image.PixelGrabber;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.OutputStream;
public class Png2Bmp {
	public void Png2Bmp(){
		
	}
	public void Run_second() throws IOException{
		System.out.println("this function has been used");
		String inputFile = "C:\\Users\\10276\\Desktop\\test_2.png";  
		String outputFile = "C:\\Users\\10276\\Desktop\\now1_2.bmp";  
		RenderedOp src = JAI.create("fileload", inputFile);  //将原数据转换为一个中间态的数据流
		OutputStream os = new FileOutputStream(outputFile); //输出数据流 
		BMPEncodeParam param = new BMPEncodeParam();  //BMP编码
		ImageEncoder enc = ImageCodec.createImageEncoder("BMP", os,param);  
		enc.encode(src);  
		os.close();//关闭流 

	}
	 public void Run(String filePath,String saveFileName) {
	        try {
	            BufferedImage sourceImg = ImageIO.read(new File(filePath));
	            int h = sourceImg.getHeight();
	            int w = sourceImg.getWidth();
	            System.out.println(h);
	            int[] pixel = new int[w*h];
	            PixelGrabber pixelGrabber = new PixelGrabber(sourceImg,0,0,w,h,pixel,w, h);
	            pixelGrabber.grabPixels();
	            MemoryImageSource m = new MemoryImageSource(w,h,pixel,0,w);
	            Image image = Toolkit.getDefaultToolkit().createImage(m);
	            BufferedImage buff = new BufferedImage(w,h,BufferedImage.TYPE_INT_ARGB);
	            buff.createGraphics().drawImage(image,0,0,null);
	            ImageIO.write(buff,"bmp",new File(saveFileName));
	        }catch (InterruptedException e){
	            e.printStackTrace();
	        }catch (IOException e){
	            e.printStackTrace();
	        }
	 }
	 public static void main(String[] args) throws IOException{
	            Png2Bmp test=new Png2Bmp();
	            test.Run_second();
	            //test.Run("C:\\Users\\10276\\Desktop\\test.png","C:\\Users\\10276\\Desktop\\now1.bmp ");
	            System.out.println("Hello World!");
	        }
}

