# Crepe엔진 탑재용 Json 알고리즘
CRUD에 기반한 알고리즘

# 기능
## void JsonCreate(string Ckey, string CValue);
CRUD Create 입니다. Json데이터를 만듭니다.
``` c++
/* Before
	{
		"apple" : "a"
	}
*/
JsonCreate("banana", "b");
/* After
	{
		"apple" : "a",
		"banana" : "b"
	}
*/
```
## const char* JsonRead(string Ckey)
CRUD Read 입니다. Json데이터를 문자열로 반환합니다.
``` c++
/* Json
	{
		"apple" : "a"
	}
*/
JsonRead("apple");
/*
	return "a"
*/

```
## int JsonUpdate(string Ckey, string CValue)
CRUD Update 입니다. Json Value를 변경합니다.
``` c++
/* Before
	{
		"apple" : "a"
	}
*/
JsonUpdate("apple", "b");
/* After
	{
		"apple" : "b",
	}
*/
```
## int JsonDelete(string Ckey)
CRUD Delete 입니다. Json데이터를 제거합니다.
``` c++
/* Before
	{
		"apple" : "a",
		"banana" : "b"
	}
*/
JsonDelete("apple");
/* After
	{
		"banana" : "b",
	}
*/
```
## const char* JsonExport()
클래스에 저장된 Json 데이터들을 문자열 형식으로 반환합니다