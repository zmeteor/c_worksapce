
<%@ page contentType="text/html; charset=GB2312" %> 
<%@ taglib tagdir = "/WEB-INF/tags/file" prefix = "file" %>
<HTML>
<BODY>
<FONT size = 3>

<%
	String fileDir = request.getParameter("fileDir");
	String fileName = request.getParameter("fileName");
	String fileContent = request.getParameter("fileContent");
	byte c[] = fileContent.getBytes("iso-8859-1");
	fileContent = new String(c);
%>
<file:Write fileDir = "<% =fileDir%>"  fileName = "<% =fileName%>" fileContent = "<% =fileContent%>"/>

</FONT>
</BODY>
</HTML>