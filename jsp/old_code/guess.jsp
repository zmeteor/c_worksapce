
<%@ page contentType="text/html; charset=GB2312" %> 
<%@ taglib tagdir = "/WEB-INF/tags/guessletter" prefix = "guess"%>
<HTML>
<BODY>
<FONT size = 3>
<% 
	String str=request.getParameter("guessletter");
	if(str==null) 
	{ str="*";
	}
	if(str.length()==0)
	{ str="*";
	}
%>
	<guess:guessTag letter = "<%=str%>" />
	��ǰ�²�����<%=message%>
<% 
	if(message.startsWith("���¶���"))
	{
		%> 
			<BR><A HREF = "guessletter.jsp">���»�������</A>
		<%
	}
	else
	{
		%> 
		<BR>�������Ĳ²⣺
		<FORM action = "" method = "post" name = form>
			<INPUT type = "text" name = "guessletter" >
			<INPUT type = "submit" value = "�ͳ�" name = "submit">
		</FORM>

		<%
	}
%>

</FONT>
<BODY>
</HTML>