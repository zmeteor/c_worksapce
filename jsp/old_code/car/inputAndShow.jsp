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
    汽车牌号：<input type="text" name="number"> 如：“陕A1234”<br>
    汽车品牌：<input type="text" name="name"> 如： “BYD牌”<br>
    生产日期：<input type="text" name="madeTime"> 如：“2016.10”<br>
    <input type="submit" value="提交">
</form>
<jsp:setProperty property="*" name="car"/>
最后一个提交的数据为：
<table border=1>
    <tr><th>汽车牌号</th>
        <th>汽车品牌</th>
        <th>生产日期</th>
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
 
<br/>目前已登记的车辆：
<%= result %>
</body>
</html>