<%@ page contentType="text/html;charset=GB2312" %>

<HEAD>
  <jsp:include page="head.txt"/>
</HEAD>
<HTML>
 <BODY bgcolor>
 <P><Font size=3>
    This is two.jsp.
    </Font>
  <Font size=3>
  <% 
     String s=request.getParameter("number");
     out.println("<BR>传递过来的值是"+s);
  %>
  <BR><img src="1.jpg" width="<%=s%>" height="<%=s%>" ></img>
  </FONT>
  </BODY>
</HTML>