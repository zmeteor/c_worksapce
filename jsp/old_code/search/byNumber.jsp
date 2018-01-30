<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ taglib tagdir="/WEB-INF/tags" prefix="inquire" %>
<HTML><BODY><Font size=2>
<% String number=request.getParameter("sno");
%>
<inquire:NumberCondition stunumber="<%=number%>"/>
 ¸ù¾ÝÑ§ºÅ
<BR><%=queryResultByNumber%>
</Font></BODY></HTML>