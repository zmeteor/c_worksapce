<%@ page contentType="text/html;charset=GB2312" %>
<HEAD>
  <jsp:include page="head.txt"/>
</HEAD>
<HTML>
 <BODY >
 <P><Font size=5 >
    This is error.jsp.
    </Font>
  <Font size=2>
  <% 
     String s=request.getParameter("mess");
     out.println("<BR>传递过来的错误信息"+s);
  %>
  <BR><img src="1.jpg" width="120" height="120" ></img>
  </FONT>
  </BODY>
</HTML>