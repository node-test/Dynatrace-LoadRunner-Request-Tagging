##############################################################################################
#Project Name:        BI CAF� - GA Release - MAR 09				                             #                       
#Test Case Name     : BI CAF� - Renewal Rate Dashboard -                                     #
#                     Most Frequently Used (Renewal Opportunities Report)				     # 
#Brief Description  : Dim:  Sales Hiearrchy, Time Measure: Renewal Opportunity				 #
#Author             : Jayanthi                                                               #
#Date of Creation   : 02/19/2009                                                             #
#LR Version:        : 9.1                                                                    #          
#Protocol           : Web Protocol HTTP/HTML                                                 #
#Recording Mode     : HTML                                                                   #
#Application URL    : http://wwwin-tools-stage.cisco.com/oraclebi/ccssbi/saw.dll?Dashboard   #
##############################################################################################
Action()
{
	//Test comments and commands that do not concern the Script Converter
	/* A block comment before a unused command*/
	//A line comment that\
		continues on the next line
    web_cache_cleanup();
	web_cleanup_cookies();

	//Try to confuse the converter by inserting a ";" inside a String
	lr_vuser_status_message( ";Iteration #:%s", lr_eval_string("{Iteration_No}") );
	
	//Try to confuse the converter by inserting a "\"" in front of ";" inside a String
	lr_vuser_status_message( "\";Iteration #:%s", lr_eval_string("{Iteration_No}") );

	//Start off easy: No Transaction set

	web_url("saw.dll", 
		"URL=http://wwwin-tools-stage.cisco.com/oraclebi/ccssbi/saw.dll?Dashboard", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);
		
	//Let's start a transaction
	
	lr_start_transaction("transaction");

	web_submit_data("saw.dll_2",
		"Action=http://wwwin-tools-stage.cisco.com/oraclebi/ccssbi/saw.dll?Dashboard",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://wwwin-tools-stage.cisco.com/oraclebi/ccssbi/saw.dll?Dashboard",
		"Snapshot=t2.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=_scid", "Value={scid}", ENDITEM,
		"Name=PortalPath", "Value=/shared/6RR SSOT/_portal/5Renewal Rate", ENDITEM,
		LAST);
    
	//end the transaction
	lr_end_transaction("transaction", LR_AUTO);

	web_submit_data("saw.dll_2",
		"Action=http://wwwin-tools-stage.cisco.com/oraclebi/ccssbi/saw.dll?Dashboard",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://wwwin-tools-stage.cisco.com/oraclebi/ccssbi/saw.dll?Dashboard",
		"Snapshot=t2.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=_scid", "Value={scid}", ENDITEM,
		"Name=PortalPath", "Value=/shared/6RR SSOT/_portal/5Renewal Rate", ENDITEM,
		LAST);
		
	//Let's try a nested Transaction
	
	lr_start_transaction("transaction1");
		lr_start_transaction("transaction2");
		
		web_submit_data("saw.dll_2",
			"Action=http://wwwin-tools-stage.cisco.com/oraclebi/ccssbi/saw.dll?Dashboard",
			"Method=POST",
			"TargetFrame=",
			"RecContentType=text/html",
			"Referer=http://wwwin-tools-stage.cisco.com/oraclebi/ccssbi/saw.dll?Dashboard",
			"Snapshot=t2.inf",
			"Mode=HTML",
			ITEMDATA,
			"Name=_scid", "Value={scid}", ENDITEM,
			"Name=PortalPath", "Value=/shared/6RR SSOT/_portal/5Renewal Rate", ENDITEM,
			LAST);
		
		lr_end_transaction("transaction2", LR_AUTO);
		
		web_submit_data("saw.dll_2",
			"Action=http://wwwin-tools-stage.cisco.com/oraclebi/ccssbi/saw.dll?Dashboard",
			"Method=POST",
			"TargetFrame=",
			"RecContentType=text/html",
			"Referer=http://wwwin-tools-stage.cisco.com/oraclebi/ccssbi/saw.dll?Dashboard",
			"Snapshot=t2.inf",
			"Mode=HTML",
			ITEMDATA,
			"Name=_scid", "Value={scid}", ENDITEM,
			"Name=PortalPath", "Value=/shared/6RR SSOT/_portal/5Renewal Rate", ENDITEM,
			LAST);
			
	lr_end_transaction("transaction1", LR_AUTO);
	
	web_submit_data("saw.dll_2",
		"Action=http://wwwin-tools-stage.cisco.com/oraclebi/ccssbi/saw.dll?Dashboard",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://wwwin-tools-stage.cisco.com/oraclebi/ccssbi/saw.dll?Dashboard",
		"Snapshot=t2.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=_scid", "Value={scid}", ENDITEM,
		"Name=PortalPath", "Value=/shared/6RR SSOT/_portal/5Renewal Rate", ENDITEM,
		LAST);
		
	//Let's try comments in front of a keyword
	
	web_submit_data("saw.dll_2",
		"Action=http://wwwin-tools-stage.cisco.com/oraclebi/ccssbi/saw.dll?Dashboard",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://wwwin-tools-stage.cisco.com/oraclebi/ccssbi/saw.dll?Dashboard",
		"Snapshot=t2.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=_scid", "Value={scid}", ENDITEM,
		"Name=PortalPath", "Value=/shared/6RR SSOT/_portal/5Renewal Rate", ENDITEM,
		LAST);
		
	/*This time trying a block comment in front of a keyword*/
	
	web_submit_data("saw.dll_2",
		"Action=http://wwwin-tools-stage.cisco.com/oraclebi/ccssbi/saw.dll?Dashboard",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://wwwin-tools-stage.cisco.com/oraclebi/ccssbi/saw.dll?Dashboard",
		"Snapshot=t2.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=_scid", "Value={scid}", ENDITEM,
		"Name=PortalPath", "Value=/shared/6RR SSOT/_portal/5Renewal Rate", ENDITEM,
		LAST);
		
	/* A block comment that contains a keyword: web_submit_data("saw.dll_10", LAST)*/
	
	web_submit_data("saw.dll_2",
		"Action=http://wwwin-tools-stage.cisco.com/oraclebi/ccssbi/saw.dll?Dashboard",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://wwwin-tools-stage.cisco.com/oraclebi/ccssbi/saw.dll?Dashboard",
		"Snapshot=t2.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=_scid", "Value={scid}", ENDITEM,
		"Name=PortalPath", "Value=/shared/6RR SSOT/_portal/5Renewal Rate", ENDITEM,
		LAST);
	
	// A line comment that contains a keyword: web_submit_data("saw.dll_10", LAST)
	
	web_submit_data("saw.dll_2",
		"Action=http://wwwin-tools-stage.cisco.com/oraclebi/ccssbi/saw.dll?Dashboard",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://wwwin-tools-stage.cisco.com/oraclebi/ccssbi/saw.dll?Dashboard",
		"Snapshot=t2.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=_scid", "Value={scid}", ENDITEM,
		"Name=PortalPath", "Value=/shared/6RR SSOT/_portal/5Renewal Rate", ENDITEM,
		LAST);
		
	//Try a line comment inside an instruction
	
	web_submit_data("saw.dll_2",
		"Action=http://wwwin-tools-stage.cisco.com/oraclebi/ccssbi/saw.dll?Dashboard",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		// A line comment that contains a keyword: web_submit_data("saw.dll_10", LAST)
		"Referer=http://wwwin-tools-stage.cisco.com/oraclebi/ccssbi/saw.dll?Dashboard",
		"Snapshot=t2.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=_scid", "Value={scid}", ENDITEM,
		"Name=PortalPath", "Value=/shared/6RR SSOT/_portal/5Renewal Rate", ENDITEM,
		LAST);
		
	//Try a block comment inside an instruction
	
	web_submit_data("saw.dll_2",
		"Action=http://wwwin-tools-stage.cisco.com/oraclebi/ccssbi/saw.dll?Dashboard",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		/* A line comment that contains a keyword: web_submit_data("saw.dll_10", LAST)*/
		"Referer=http://wwwin-tools-stage.cisco.com/oraclebi/ccssbi/saw.dll?Dashboard",
		"Snapshot=t2.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=_scid", "Value={scid}", ENDITEM,
		"Name=PortalPath", "Value=/shared/6RR SSOT/_portal/5Renewal Rate", ENDITEM,
		LAST);
		
	
	//Let's try a transaction that contains "\""
	
	lr_start_transaction("trans\"action");

	web_submit_data("saw.dll_2",
		"Action=http://wwwin-tools-stage.cisco.com/oraclebi/ccssbi/saw.dll?Dashboard",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://wwwin-tools-stage.cisco.com/oraclebi/ccssbi/saw.dll?Dashboard",
		"Snapshot=t2.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=_scid", "Value={scid}", ENDITEM,
		"Name=PortalPath", "Value=/shared/6RR SSOT/_portal/5Renewal Rate", ENDITEM,
		LAST);
		
	//Let's try a keyword that contains "\""
	
	lr_start_transaction("transaction");

	web_submit_data("saw.\"dll_2",
		"Action=http://wwwin-tools-stage.cisco.com/oraclebi/ccssbi/saw.dll?Dashboard",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://wwwin-tools-stage.cisco.com/oraclebi/ccssbi/saw.dll?Dashboard",
		"Snapshot=t2.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=_scid", "Value={scid}", ENDITEM,
		"Name=PortalPath", "Value=/shared/6RR SSOT/_portal/5Renewal Rate", ENDITEM,
		LAST);
	
	lr_end_transaction("transaction", LR_AUTO);
	lr_end_transaction("trans\"action", LR_AUTO);
	
	
	lr_start_transaction("keywords");
			
	//Test all Keywords
	
	web_url("saw.dll_2",LAST);
	
	web_link("saw.dll_2",LAST);
	
	web_image("saw.dll_2",LAST);
	
	web_submit_form("saw.dll_2",LAST);
	
	web_submit_data("saw.dll_2",LAST);
	
	web_custom_request("saw.dll_2",LAST);
	
	web_browser("saw.dll_2",LAST);
	
	web_button("saw.dll_2",LAST);
	
	web_check_box("saw.dll_2",LAST);
	
	web_edit_field("saw.dll_2",LAST);
	
	web_element("saw.dll_2",LAST);
	
	web_file("saw.dll_2",LAST);
	
	web_image_link("saw.dll_2",LAST);
	
	web_image_submit("saw.dll_2",LAST);
	
	web_list("saw.dll_2",LAST);
	
	web_map_area("saw.dll_2",LAST);
	
	web_radio_group("saw.dll_2",LAST);
	
	web_reg_dialog("saw.dll_2",LAST);
	
	web_static_image("saw.dll_2",LAST);
	
	web_table("saw.dll_2",LAST);
	
	web_text_area("saw.dll_2",LAST);
	
	web_text_link("saw.dll_2",LAST);
	
	lr_end_transaction("keywords", LR_AUTO);
	
	return 0;
}

