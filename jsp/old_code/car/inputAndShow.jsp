<%@ page language="java" contentType="text/html; charset=GB2312" pageEncoding="GB2312"%>
<%@ page import="tom.jiafei.Car" %>
<%@ page language = "java" import = "java.sql.Statement" import="java.sql.*" %>
<jsp:useBean id="car" class="tom.jiafei.Car" scope="request" />
<html>
<head>
    <title></title>
</head>
<body>

<form action="" method="post">
    �����ƺţ�<input type="text" name="number"> �磺����A1234��<br>
    ����Ʒ�ƣ�<input type="text" name="name"> �磺 ��BYD�ơ�<br>
    �������ڣ�<input type="text" name="madeTime"> �磺��2016.10��<br>
    <input type="submit" value="�ύ">
</form>
<jsp:setProperty property="*" name="car"/>
���һ���ύ������Ϊ��
<table border=1>
    <tr><th>�����ƺ�</th>
        <th>����Ʒ��</th>
        <th>��������</th>
    </tr>
    <tr><td><jsp:getProperty name="car" property="number" /></td>
        <td><jsp:getProperty name="car" property="name" /></td>
        <td><jsp:getProperty name="car" property="madeTime" /></td>
    </tr>
</table>
<%
request.setCharacterEncoding("GB2312");
String number=request.getParameter("number"); 
String name=request.getParameter("name"); 
String madeTime=request.getParameter("madeTime"); 
%>


<%!
	int id = 0;
%>


<%
StringBuffer result;
result = new StringBuffer();
 try{
Class.forName("org.gjt.mm.mysql.Driver");
 }catch(Exception e){}
 try{
 Connection connect=DriverManager.getConnection("jdbc:mysql://localhost:3306/student?user=root&password=yongheng123&useUnicode=true&characterEncoding=GB2312");

 
   Statement stmt = connect.createStatement();
   if(number != null || name != null || madeTime != null)
   {
	   id++;
	   stmt.executeQuery("SET NAMES UTF8");  
	   try {   
	       stmt.execute("insert into car values('"+id+"','"+number+"','"+name+"','"+madeTime+"')");   
	   }catch(Exception e)  {  
	       e.printStackTrace();  
	   }

	   try{
		   result.append("<table border=1>");
		   DatabaseMetaData metadata=connect.getMetaData();
		   ResultSet rs1=metadata.getColumns(null,null,"car",null);
		   int n=0;
		   result.append("<tr>");
		  
		   while(rs1.next())
		    { n++;
		      String clumnName=rs1.getString(4);
		      result.append("<td>"+clumnName+"</td>");
		    }
		   result.append("</tr>");
		   
		   
		   Statement sql = connect.createStatement();
		   sql=connect.createStatement();
		   ResultSet rs=sql.executeQuery("select * from car");
		   while(rs.next())
		     {  result.append("<tr>");
		        for(int k=1;k<=n;k++) 
		         {  result.append("<td>"+rs.getString(k)+"</td>");
		         }
		       result.append("</tr>");
		     }
		     result.append("</table>");
		     connect.close();
		     
		 }catch(Exception e){ result.append(e);}
   }  
	   
}catch (Exception e){}
 %> 
 
<br/>Ŀǰ�ѵǼǵĳ�����
<%= result %>
</body>
</html>