
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
	当前猜测结果：<%=message%>
<% 
	if(message.startsWith("您猜对了"))
	{
		%> 
			<BR><A HREF = "guessletter.jsp">重新获得这个数</A>
		<%
	}
	else
	{
		%> 
		<BR>输入您的猜测：
		<FORM action = "" method = "post" name = form>
			<INPUT type = "text" name = "guessletter" >
			<INPUT type = "submit" value = "送出" name = "submit">
		</FORM>

		<%
	}
%>

</FONT>
<BODY>
</HTML>