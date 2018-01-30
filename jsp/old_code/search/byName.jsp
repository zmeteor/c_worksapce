<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ taglib tagdir="/WEB-INF/tags" prefix="inquire" %>
<HTML><BODY><Font size=2>
<% 
    request.setCharacterEncoding("UTF-8");
	String name=request.getParameter("myname");
%>
<inquire:NameCondition stuname="<%=name%>"/>
 ИљОнаеУћ
<BR><%=queryResultByNumber%>
</Font></BODY></HTML>