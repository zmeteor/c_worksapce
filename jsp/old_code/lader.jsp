
<%@ page contentType="text/html; charset=GB2312" %> 
<HTML>
<BODY>
<FONT size = 3>

<%  String  a = request.getParameter("shangDi"),
		   b = request.getParameter("xiaDi"),
		   h = request.getParameter("high");
	try
	{
	  double sd=Double.parseDouble(a);
	  double xd=Double.parseDouble(b);
	  double hi=Double.parseDouble(h);
	  double mianJi=(sd+xd)*hi/2;
%>
	<P>�����ε�����ǣ�<%=mianJi%>
<%
	}
	catch(NumberFormatException e)
	{
		out.print("<BR>"+"���ݴ������");
	}
%>

</FONT>
<BODY>
</HTML>