function print()
{
	document.write("click me haha");
	document.write("<span style='color:blue;'>"+"忠实粉丝"+"</span>");
}

function alertbutton()
{
	var mychar="testing";
	alert(mychar);
}

function confirmbutton()
{
	var mychar=confirm("你是女王吗？");
	if(mychar)
	{
		document.write("我是女王大人！");
	}
	else
	{
		document.write("我是小丫鬟！");
	}
}

function promptbutton()
{
	var myscore=prompt("please input your score","20");//20是文本框中的默认值
	if(myscore!== null)
	{
		if(myscore>=90)
		{
	   		document.write("你很棒!");
		}
		else if(myscore>=75)
    	{
	   		document.write("不错吆!");
		}
		else if(myscore>=60)
    	{	
	   		document.write("要加油!");
    	}
    	else
		{
       		document.write("要努力了!");
		}
	}
	else
	{
		alert("please input again");
	}
}

 function Wopen()
 {
    window.open('http://www.baidu.com',
    	'_blank', //_blank _self _top
    	'width=300,height=200,menubar=no,toolbar=no, status=no,scrollbars=yes'
    	);//返回一个窗口object
    /*close win*/
    /*
    var mywin = window.open('http://www.baidu.com');
    mywin.close();
    */
  } 

  function creatArray()
  {
  	//方法一
  	var myarr=new Array();//定义数组
 	myarr[0]=80; 
 	myarr[1]=60;
 	myarr[2]=99;
 	document.write(myarr[0]+myarr[1]+myarr[2] +myarr.length);//数组长度length是数组object的属性

 	//第二种方法：

	var myarray1 = new Array(66,80,90,77,59);//创建数组同时赋值

	//第三种方法：

 	var myarray2 = [66,80,90,77,59];//直接输入一个数组（称 “字面量数组”）

 	//二维数组的声明
 	var myarray = new Array();//先声明一维数组

	for(var i = 0; i < 3; i++)//注意循环变量i是var i而不是int i
	{
    myarray[i] = new Array();//再声明二维数组
    for(var j =0; j < 6; j++)
    	{
        	myarray[i][j] = i+j;
        	document.write(myarray[i][j] + "&nbsp");
    	}
	}
   }

function array2d()
{
	var infos = [['小A','女',21,'大一'],
	['小B','男',23,'大三'],
	['小C','男',24,'大四'],
	['小D','女',21,'大一'],
	['小E','女',22,'大四'],
	['小F','男',21,'大一'],
	['小G','女',22,'大二'],
	['小H','女',20,'大三'],
	['小I','女',20,'大一'],
	['小J','男',20,'大三']];
 	document.write(infos);
 
 //第一次筛选，找出都是大一的信息
 	for(var i = 0 ; i < 10; i++)
 	{
         if(infos[i][3] == "大一")
         {
         	document.write("大一" +　infos[i]);
            if(infos[i][1] == "女")
            {
              document.write("大一女生" + infos[i]);
            }
         }
    }
}

function add1(x,y)
{
	return x+y;
}
//onclick
//onmouseover
//onmouseout
//onfocus
//onblur
//onselect <input type="text"> <textarea></textarea>
//onchange
//onload <body onload=""></body>  
//Execute a JavaScript immediately after a page has been loaded 
//all content (including images, script files, CSS files, etc.).
//onunload <body onunload=""> window.onunload = functionname();
//onunload occurs when the user navigates away from the page 
//(by clicking on a link, submitting a form, closing the browser window, etc.).
//or reload the page

   function count()
{      
    //获取第一个输入框的值
    var x = parseInt(document.getElementById("txt1").value);
	//获取第二个输入框的值
    var y = parseInt(document.getElementById("txt2").value);
	//获取选择框的值
    var operation = document.getElementById("select").value;
	//获取通过下拉框来选择的值来改变加减乘除的运算法则
    //设置结果输入框的值 
    var result;
    switch(operation) //switch没有冒号
    {
        case '+':
            result = x + y;
            break;
        case "-":
            result = x - y;
            break;
        case "*":
            result = x * y;
            break;
        case "/":
            result = x/y;
            break;
        default:
            result = 0;
            break;
    }
    //将结果显示在input的text框里
    document.getElementById("fruit").value = result;
}