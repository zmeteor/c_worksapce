<%@ tag pageEncoding = "GB2312"%>
<%@ tag import = "java.io.*"%>
<%@ attribute name = "fileContent" required = "true" %>
<%@ attribute name = "fileDir" required = "true" %>
<%@ attribute name = "fileName" required = "true" %>

<%
	File f =new File(fileDir,fileName);
	try{
		FileOutputStream output = new FileOutputStream(f);
		byte bb[] = fileContent.getBytes();
		output.write(bb,0,bb.length);
		output.close();
		out.println("�ļ�д��ɹ���");
		out.println("<BR>�ļ�����Ŀ¼��"+fileDir);
		out.println("<BR>�ļ������֣�"+fileName);
	}
	catch(IOException e){
		out.println("�ļ�д��ʧ��"+e);
	}
%>