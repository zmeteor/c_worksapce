<%@ page language="java" import="java.util.*,java.sql.*"  
    pageEncoding="UTF-8"%>  
  
  
<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">  
<html>  
<head>  
</head>  
<body>  
    <%  
    Connection con;  
    Statement sql;  
    ResultSet rs;  
    try {  
        Class.forName("com.mysql.jdbc.Driver");  
    } catch (Exception e) {  
        out.print(e);  
    }  
    try {  
        String uri = "jdbc:mysql://127.0.0.1:3306/student";  
        con = DriverManager.getConnection(uri, "root", "yongheng123");  
        out.println("Hello");  
        out.print("</table>");  
        con.close();  
    } catch (SQLException e1) {  
        out.print(e1);  
    }  
%>  
</body>  
</html>  