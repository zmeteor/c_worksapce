<%@ tag language="java" pageEncoding="UTF-8"%>
<%@ tag import="java.sql.*" %>
<%@ attribute name="stunumber" required="true" %>
<%@ variable name-given="queryResultByNumber" scope="AT_END" %>
<%  StringBuffer result;
	String driver="com.mysql.jdbc.Driver";
	String url="jdbc:mysql://localhost:3306/student";
	String user="root";
    String password="950512";
    result=new StringBuffer();
    try{   
    		Class.forName(driver);
       }
    catch(Exception e) { result.append(e);} 
    Connection con;
    Statement sql; 
    ResultSet rs;
    int n=0;
    try{  result.append("<table border=1>"); 
          con=DriverManager.getConnection(url,user,password);
          DatabaseMetaData metadata=con.getMetaData();
          ResultSet rs1=metadata.getColumns(null,null,"stu",null);
          int 字段个数=0;
          result.append("<tr>");
          while(rs1.next())
           { 字段个数++;
             String clumnName=rs1.getString(4);
             result.append("<td>"+clumnName+"</td>");
           }
          result.append("</tr>");
          sql=con.createStatement();
          String condition="SELECT * FROM stu Where Sno = '"+stunumber+"'";
          rs=sql.executeQuery(condition);
          while(rs.next())
          {  result.append("<tr>");
             for(int k=1;k<=字段个数;k++) 
             {  result.append("<td>"+rs.getString(k)+"</td>");
             }
             result.append("</tr>");
           }
          result.append("</table>");
          con.close();
        }
       catch(SQLException e)
        {  
    	   result.append(e);
        }
       jspContext.setAttribute("queryResultByNumber",new String(result)); 
%> 