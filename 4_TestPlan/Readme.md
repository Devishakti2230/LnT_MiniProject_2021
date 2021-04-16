<h1>TEST PLAN:</h1>

<h2>Table no: High level test plan</h2>

|Test ID|	Description|	Exp I/P	|Exp O/P|	Actual Out|
|:----:|:------:|:------:|:------:|:------:|
|H_01|Call of arithmetic_implementation function|	arthmetic_operation()|	TRUE	|TRUE|
|H_02|	Call of special_case_implementation function	|special_operation()	|TRUE	|TRUE|

<h2>Table no: Low level test plan</h2>

|Test ID	|Description	|HL ID|	Exp IN	|Exp OUT	|Actual Output	|Type Of Test|
|:----:|:-----:|:-----:|:------:|:--------:|:--------:|:-------:|
|L_01|  Arthmetic operation '+'|	H_01|	add()|	TRUE|TRUE|	Requirement based|
|L_02|  Arthmetic operation '+'|	H_01|	add()|	TRUE|TRUE|	scenario based|
|L_03|  Arthmetic operation '+'|	H_01|	add()|	TRUE|TRUE|	boundary based|
|L_04|  Arthmetic operation '-'|	H_01|	sub()|	TRUE|TRUE|	Requirement based|
|L_05|  Arthmetic operation '-'|	H_01|	sub()|	TRUE|TRUE|	scenario based|
|L_06|  Arthmetic operation '-'|	H_01|	sub()|	TRUE|TRUE|	boundary based|
|L_07|  Arthmetic operation '*'|	H_01|	mul()|	TRUE|TRUE|	Requirement based|
|L_08|  Arthmetic operation '*'|	H_01|	mul()|	TRUE|TRUE|	scenario based|
|L_09|  Arthmetic operation '*'|	H_01|	mul()|	TRUE|TRUE|	boundary based|
|L_10|  Arthmetic operation '/'|	H_01|	divv()|	TRUE|TRUE|	Requirement based|
|L_11|  Arthmetic operation '/'|	H_01|	divv()|	TRUE|TRUE|	scenario based|
|L_12|  Arthmetic operation '%'|	H_01|	modd()|	TRUE|TRUE|	Requirement based|
|L_13|  Special operation Power|	H_02|	power()|	TRUE|TRUE|	Requirement based|
|L_14|  Special operation Power|	H_02|	power()|	TRUE|TRUE|	scenario based|
|L_15|  Special operation square|	H_02|	sqr()|	TRUE|TRUE|	Requirement based|
|L_16|  Special operation square_root|	H_02|	sqrtt()|	TRUE|TRUE|	Requirement based|
|L_17|  Special operation cube|	H_02|	cubee()|	TRUE|TRUE|	Requirement based|
|L_18|  Special operation cube_root|	H_02|	cubert()|	TRUE|TRUE|	Requirement based|
|L_19|  Special operation logarithm|	H_02|	logg()|	TRUE|TRUE|	Requirement based|
|L_20|  Special operation factorial|	H_02|	factorial()|	TRUE|TRUE|	Requirement based|





