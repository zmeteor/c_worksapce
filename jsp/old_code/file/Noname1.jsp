<%@ page contentType="text/html; charset=GB2312" %> 
<%@ taglib tagdir = "/WEB-INF/tags/file" prefix = "file" %>

<HEAD>
	<A href = "giveContent.jsp">我要写文件</A>
	<A href = "lookContent.jsp">我要读文件</A>
</HEAD>
<HTML>
<BODY>
<FONT size = 3>
<FORM action = "WriteContent.jsp" Method = post >
	请选择一个目录：
	<Select name = "fileDir">
		<Option value = "C:/">C:/
		<Option value = "D:/">D:/
		<Option value = "D:/1000">D:/1000
	</Select>
	<BR>输入保存文件的名字：<Input type = "text" name = "fileName">
	<BR>输入文件的内容: </BR>

	<TextArea name = "fileContent" Rows = "10" Cols = "16" ></TextArea>
	<BR><Input type = submit value = "提交">
</FORM>

</FONT>
</BODY>
</HTML>