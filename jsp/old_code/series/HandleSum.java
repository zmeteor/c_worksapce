
package user.yourservlet; 
import user.yourbean.*; 
import java.io.*;
import javax.servlet.*; 
import javax.servlet.http.*;

public class HandleSum extends HttpServlet { 
	public void init(ServletConfig config) throws ServletException 
	{  
		super.init(config);    
	}    
	public void doPost(HttpServletRequest request,HttpServletResponse response) throws ServletException,IOException {  
		Series shulie=new Series();          
		request.setAttribute("lie",shulie);         
		double a=Double.parseDouble(request.getParameter("firstItem"));         
		double d=Double.parseDouble(request.getParameter("var"));        
		int n=Integer.parseInt(request.getParameter("number"));         
		shulie.setFirstItem(a);                     
		shulie.setVar(d);                   
		shulie.setNumber(n);                
		double sum=0,item=a;        
		int i=1;         
		shulie.setName("等差数列的公差");        
		while(i<=n)                                
		{  
			sum=sum+item;            
			i++;           
			item=item+d;          
		}         
		shulie.setSum(sum);         
		RequestDispatcher dispatcher=request.getRequestDispatcher("showResult.jsp");         
		dispatcher.forward(request,response);  
		
	}     
	public  void  doGet(HttpServletRequest request,HttpServletResponse response)throws ServletException,IOException{    
		Series shulie=new Series();          
		request.setAttribute("lie",shulie);         
		double a=Double.parseDouble(request.getParameter("firstItem"));         
		double d=Double.parseDouble(request.getParameter("var"));        
		int n=Integer.parseInt(request.getParameter("number"));         
		shulie.setFirstItem(a);                    
		shulie.setVar(d);                    
		shulie.setNumber(n);               
		double sum=0,item=a;        
		int i=1;         
		shulie.setName("等比数列的公比");         
		while(i<=n)                         
		{ 
			sum=sum+item;           
			i++;           
			item=item*d;          
		}         
		shulie.setSum(sum);         
		RequestDispatcher dispatcher=request.getRequestDispatcher("showResult.jsp");         
		dispatcher.forward(request,response);       
	} 
}