
<%@ page contentType="text/html; charset=GB2312" %> 

<HEAD>
	<A href = "giveContent.jsp">我要写文件</A>
	<A href = "lookContent.jsp">我要读文件</A>
</HEAD>

<HTML>
<BODY>
<FONT size = 3>

	<FORM action = "ReadContent.jsp" method = "post" name = "form">
		输入文件的路径（如：d:/1000）:<Input type = "text" name = "fileDir">
		<BR>输入文件的名字（如:Hello.java）:<Input type = "text" name = "fileName">
		<BR><Input type = "submit" value = "读取" name = "submit">
		
	</FORM>

</FONT>
</BODY>
</HTML>