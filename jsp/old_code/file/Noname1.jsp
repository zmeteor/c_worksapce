<%@ page contentType="text/html; charset=GB2312" %> 
<%@ taglib tagdir = "/WEB-INF/tags/file" prefix = "file" %>

<HEAD>
	<A href = "giveContent.jsp">��Ҫд�ļ�</A>
	<A href = "lookContent.jsp">��Ҫ���ļ�</A>
</HEAD>
<HTML>
<BODY>
<FONT size = 3>
<FORM action = "WriteContent.jsp" Method = post >
	��ѡ��һ��Ŀ¼��
	<Select name = "fileDir">
		<Option value = "C:/">C:/
		<Option value = "D:/">D:/
		<Option value = "D:/1000">D:/1000
	</Select>
	<BR>���뱣���ļ������֣�<Input type = "text" name = "fileName">
	<BR>�����ļ�������: </BR>

	<TextArea name = "fileContent" Rows = "10" Cols = "16" ></TextArea>
	<BR><Input type = submit value = "�ύ">
</FORM>

</FONT>
</BODY>
</HTML>