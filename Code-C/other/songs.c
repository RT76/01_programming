/*
 * @姓名：杜文茁 
 * @学号：21376398
 * @作品名称：C语言点歌台ヾ(≧▽≦*)o 
 * @版本：3.0
 * 更新日志：
 *     1.0：《孤勇者》单曲（4.22 
 *     2.0：新增曲目、创立点歌系统（4.24 
 *     2.1：修复了部分1.0系统在2.0系统中不配适的问题（4.24 
 *     3.0：更新曲库、增加随机播放系统、优化部分歌词的视觉效果 （4.26 
 * @提交日期：2022-04-26
 * 
 * @输入：按照提示输入数字代码(～￣▽￣)～ 
 * 
 * @输出：好听的C语言Music！(带歌词的那种哦>v<
 * 
 * @功能说明：利用C语言Beep函数演奏音乐，并进行同步的歌词欣赏，并加入点播功能 
 * 
 * @补充说明：某鸽子说曲库可能会持续更新？咕咕~）https://bhpan-443.e1.buaa.edu.cn:443/link/D47F5D2584351E57303C5F5C9506955B
 * 
 * @参考来源：百度 : )    C语言音乐实现-百度知道，Beep函数应用-百度知道+CSDN技术社区，音乐简谱-网易云，音调与频率对应关系-百度，
 *                        识谱技术(现学现卖了属于是)-百度百科+百度知道。哦对，还有：颜文字-颜文字大全(*^▽^*)
 */

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>//Beep()函数，头文件windows.h
//根据频率定义一系列音调
#define qdo 262
#define qre 294
#define qmi 330
#define qfa 349
#define qso 392
#define qla 440
#define qsi 494
#define do 523
#define re 587
#define mi 659
#define fa 698
#define so 784
#define la 880
#define si 988
#define do1 1046
#define re1 1175
#define mi1 1318
#define fa1 1397
#define so1 1568
#define la1 1760
#define si1 1976
#define sqdo 277
#define sqre 311
#define sqfa 370
#define sqso 415
#define sqla 466
#define sdo 554
#define sre 622
#define sfa 740
#define sso 831
#define sla 932
#define sdo1 1046
#define sre1 1245
#define sfa1 1480
#define sso1 1661
#define sla1 1865
#define qqdo 131
#define qqre 147
#define qqmi 165
#define qqfa 175
#define qqso 196
#define qqla 220
#define qqsi 247

void ps()//输出文字说明 
{
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("请输入数字代码进行点歌：\n");
	printf("0：随机播放\n");
	printf("1：孤勇者—陈奕迅\n");
	printf("2：无名的人—毛不易\n");
	printf("3：稻香-周杰伦\n");
	printf("4：小星星\n");
	printf("5：热爱105°C的你\n");
	printf("6：生日快乐歌\n");
	printf("7：卡农\n");
	printf("8：芒种\n");
	printf("9：牵丝戏\n");
	printf("\n");
}

//1、孤勇者 
typedef struct
{
int freq;//赫兹
int duration;//持续时间
char text[32];//文本内容
}
STU1;
STU1
t1[]={//函数内容(赫兹，持续时间)
{0,200,"孤"},{0,200,"勇"} ,{0,200,"者"},{0,200,"—"},{0,600,"—"},{0,200,"陈"},{0,200,"奕"},{0,200,"迅\n"},{0,1000,"\n"},

{mi,1600,"都"},{0,1000," "},{do,200,"是"},{re,200,"勇"},{do,200,"敢"},
{mi,1600,"的"},{0,600,"\n"},{do,200,"你"},{re,200,"额"},{do,200,"头"},{re,200,"的"},{mi,200,"伤"},
{qla,600,"口 "},{do,200,"你"},{qla,600,"的"},{do,200,"不"},{qla,600,"同 "},{do,200,"你"},{re,400,"犯"},{do,400,"的"},
{qsi,1600,"错"},{0,1600,"\n"},
{mi,1600,"都"},{0,1000," "},{do,200,"不"},{re,200,"必"},{do,200,"隐"},
{mi,1600,"藏"},{0,600,"\n"},{do,200,"你"},{re,200,"破"},{do,200,"旧"},{re,200,"的"},{mi,200,"玩"},
{qla,600,"偶 "},{do,200,"你"},{qla,600,"的"},{do,200,"面"},{qla,600,"具 "},{do,200,"你"},{mi,400,"的"},{re,400,"自"},
{qsi,1600,"我"},{0,1600,"\n"},
{qla,200,"他"},{do,200,"们"},{la,600,"说"},{la,200,"要"},{la,200,"带"},{so,200,"着"},{la,400,"光"},{la,200,"驯"},{so,200,"服"},{la,200,"每"},{so,200,"一"},{la,200,"头"},{so,200,"怪"},
{mi,200,""},{mi,1400,"兽"},{0,1200,"\n"},{qla,200,"他"},{do,200,"们"},
{la,600,"说"},{la,200,"要"},{la,200,"缝"},{so,200,"好"},{la,200,"你"},{so,200,"的"},{si,600,"伤"},{si,200,"没"},{si,200,"有"},{la,200,"人"},{si,600,"爱"}, 
{la,400,"小"},{mi,1600,"丑"},{0,400,"\n"},{mi,200,"为"},{so,200,"何"},{mi,200,"孤"},
{re,600,"独"},{mi,200,"不"},{re,600,"可"},{mi,200,"光"},{re,600,"荣\n"},{mi,200,"人"},{so,200,"只"},{mi,200,"有"},{so,200,"不"},{mi,200,"完"},
{re,600,"美"},{mi,200,"值"},{re,600,"得"},{mi,200,"歌"},{re,800,"颂"},{0,400,"\n"},{do,200,"谁"},{re,200,"说"},
{mi,400,"污"},{qla,400,"泥"},{do,400,"满"},{mi,400,"身"},{re,600,"的"},{mi,200,"不"},{re,200,"算"},{do,200,""},{do,400,"英"},
{qla,1600,"雄"},{0,1200,"\n"},

{la,200,"爱"},{si,200,"你"},
{do1,200,"孤"},{re1,200,"身"},{si,200,"走"},{do1,200,"暗"},{do1,400,"巷 "},{do1,200,"爱"},{si,200,"你"},{do1,200,"不"},{re1,200,"跪"},{si,200,"的"},{do1,200,"模"},{do1,400,"样\n"},{do1,200,"爱"},{re1,200,"你"},
{mi1,200,"对"},{re1,200,"峙"},{mi1,200,"过"},{re1,200,"绝"},{mi1,400,"望 "},{mi1,200,"不"},{re1,200,"肯"},{mi1,400,"哭"},{so1,400,"一"},{mi1,400,"场\n"},{la,200,"爱"},{si,200,"你"},
{do1,200,"破"},{re1,200,"烂"},{si,200,"的"},{do1,200,"衣"},{do1,400,"裳 "},{do1,200,"却"},{si,200,"敢"},{do1,200,"堵"},{re1,200,"命"},{si,200,"运"},{do1,200,"的"},{do1,400,"枪\n"},{do1,200,"爱"},{re1,200,"你"},
{mi1,200,"和"},{re1,200,"我"},{mi1,200,"那"},{re1,200,"么"},{mi1,400,"像 "},{mi1,200,"缺"},{re1,200,"口"},{mi1,400,"都"},{so1,400,"一"},{mi1,400,"样\n"},{so1,400,"去"},
{mi1,600,"吗"},{so1,200,"配"},{mi1,600,"吗"},{so1,200,"这"},{mi1,200,"褴"},{so1,200,"褛"},{la1,200,"的"},{mi1,200,"披"},{so1,400,"风\n"},{so1,400,"战"}, 
{mi1,600,"吗"},{so1,200,"战"},{mi1,600,"啊"},{so1,200,"以"},{mi1,200,"最"},{so1,200,"卑"},{la1,200,"微"},{mi1,200,"的"},{so1,400,"梦\n"},{so1,200,"致"}, {so1,200,"那"},
{mi1,200,"黑"},{re1,200,""},{re1,400,"夜"},{re1,400,"中"},{do1,200,"的"},{mi1,400,"呜"},{re1,200,""},{re1,400,"咽"},{re1,400,"与"},{do1,200,"怒"},{do1,200,"吼"},
{la,1600,""},{0,1200,"\n"},{so1,200,"谁"}, {so1,200,"说"},
{mi1,200,"站"},{re1,200,""},{re1,400,"在"},{re1,400,"光"},{do1,200,"里"},{mi1,400,"的"},{re1,200,""},{re1,400,"才"},{re1,400,"算"},{do1,200,"英"},{do1,200,"雄"},
{la,1600,"\n\n"},

{0,200,"少"},{0,200,"年"},{0,200,"与"},{0,200,"爱"},{0,200,"永"},{0,200,"不"},{0,200,"老"},{0,200,"去"},{0,600,"。\n"},
};

//2、无名的人 
typedef struct
{
int freq;//赫兹
int duration;//持续时间
char text[32];//文本内容
}
STU2;
STU2
t2[]={//函数内容(赫兹，持续时间)
{0,200,"无"},{0,200,"名"},{0,200,"的"},{0,200,"人"},{0,200,"—"},{0,600,"—"},{0,200,"毛"},{0,200,"不"},{0,200,"易\n"},{0,1000,"\n"},

{0,600,""},{qqso,200,"我"},{qdo,200,"是"},{qdo,200,"这"},{qdo,200,"路"},{qqsi,600,"上 "},{qqsi,200,"没"},{qqsi,200,"名"},{qqsi,200,"字"},{qdo,400,"的"},{qdo,1800,"人"},
{0,2200,"\n"},{qqso,200,"我"},{qdo,200,"没"},{qdo,200,"有"},{qdo,200,"新"},{qqsi,600,"闻 "},{qdo,200,"没"},{qdo,200,"有"},{qdo,200,"人"},{qre,400,"评"},{qmi,1800,"论"},
{0,2200,"\n"},{qmi,200,"要"},{qmi,200,"拼"},{qso,200,"尽"},{qmi,200,"所"},{qre,1000,"有"},{0,400," "},{qdo,200,"换"},{qre,200,"得"},
{qmi,400,"普"},{qmi,400,"通"},{qre,400,"的"},{qmi,200,"剧"},{qdo,1800,"本"},
{0,400,"\n"},{qdo,400,"曲"},{qre,400,"折"},{qmi,400,"辗"},{qre,400,"转 "},{qdo,200,"不"},{qqsi,600,"过"},{qdo,400,"谋"},
{qdo,1600,"生"},{0,1600,"\n"},
    {0,0,"\n"},
{qso,200,"我"},{qla,400,"是"},{qla,400,"离"},{qso,200,""},{qso,400,"开 "},{qso,400,"小"},{qla,200,"镇"},{qla,600,"上"},{qso,200,"的"},{qso,200,"人"},
{qmi,1600,""},{0,1600,"\n"},
{qso,200,"是"},{qla,400,"哭"},{qla,400,"笑"},{qso,200,""},{qso,400,"着 "},{do,400,"吃"},{qsi,200,"过"},{qla,400,"饭"},{qso,200,""},{qso,200,"的"},{qmi,200,""},
{qmi,1600,"人"},{0,2000,"\n"},
{qso,200,"是"},{qso,200,"赶"},{qla,200,"路"},{qso,200,""},{qso,200,"的"},{qso,1000,"人"},{0,400," "},{qdo,200,"是"},{qre,200,"养"},
{qmi,800,"家"},{qre,400,"的"},{qdo,400,""},{qdo,1600,"人"},
{0,400,"\n"},{qdo,400,"是"},{qre,400,"城"},{qmi,400,"市"},{qre,400,"背"},{qdo,200,"景"},{qqsi,600,"的 "},{qdo,400,"无"},
{qdo,1600,"声"},{0,2000,"\n"},
    {0,0,"\n"},
{qso,200,"我"},{qla,200,"不"},{do,400,"过 "},{qso,200,"想"},{qla,200,"亲"},{do,400,"手"},{re,200,"触"},{re,600,"摸\n"},{do,200,"弯"},{re,200,"过"},
{mi,400,"腰"},{mi,400,"的"},{re,400,"每"},{mi,200,"一"},{do,1000,"刻\n"},{mi,200,"留"},{re,400,"下"},{do,600,"的 "},
{do,200,"湿"},{do,200,"透"},{mi,200,"的"},{re,400,"脚"},{do,600,"印 "},{qsi,200,"是"},{qsi,200,"不"},{qsi,200,"是"},{re,400,"值"},{do,600,"得"},
{qla,600,""},{0,2000,"\n"},
{qso,200,"这"},{qla,200,"哽"},{do,400,"咽 "},{qso,200,"若"},{qla,200,"你"},{do,400,"也"},{re,200,"相"},{re,600,"同\n"},{do,200,"就"},{re,200,"是"},
{mi,400,"同"},{mi,400,"路"},{re,400,"的"},{mi,200,"朋"},{do,1000,"友\n"},{mi,200,"致"},{re,400,"所"},{do,600,"有 "},
{do,200,"顶"},{do,200,"天"},{mi,200,"立"},{re,400,"地 "},{do,600,"却"},{qsi,200,"普"},{qsi,200,"通"},{qsi,200,"平"},{re,400,"凡"},{do,2600,"的"},
{0,800,"\n"},
    {0,0,"\n"},
{0,400,""},{qmi,200,"无"},{qre,200,"名"},{qmi,200,"的"},{qre,200,"人"},{qmi,600,"啊 "},{qre,200,"我"},{qmi,200,"敬"},{qre,200,"你"},{qmi,200,"一"},{qre,200,"杯"},{qdo,800,"酒\n"},
{qmi,200,"敬"},{qre,200,"你"},{qmi,200,"的"},{qre,200,"沉"},{qmi,600,"默 "},{qre,200,"和"},{qmi,200,"每"},{qre,200,"一"},{qmi,200,"声"},{qre,200,"怒"},{qdo,800,"吼\n"},
{qmi,200,"敬"},{qre,200,"你"},{qmi,200,"弯"},{qre,200,"着"},{qmi,600,"腰 "},{qre,200,"上"},{qmi,200,"山"},{qre,200,"往"},{qmi,200,"高"},{qre,200,"处"},{qdo,800,"走\n"},
{qmi,200,"头"},{qre,600,"顶 "},{qre,200,"苍"},{qdo,400,"穹 "},{qqso,200,"努"},{qmi,200,"力"},{qre,600,"地"},{qre,200,"生"},{qdo,600,"活\n"},
    {0,0,"\n"},
{qso,200,"你"},{qla,200,"来"},{do,200,"自"},{qla,200,"于 "},{do,200,"南"},{qla,200,"方"},{do,200,"的"},{re,400,"村"},{re,600,"落\n"},{do,200,"来"},{re,200,"自"},
{mi,400,"粗"},{mi,400,"糙"},{re,400,"的"},{mi,200,"双"},{do,1000,"手\n"},{mi,200,"你"},{re,400,"站"},{do,600,"在 "},
{do,200,"楼"},{do,200,"宇"},{mi,200,"的"},{re,400,"缝"},{re,200,"隙"},{qsi,400," "},{qsi,200,"可"},{qsi,200,"你"},{do,200,"没"},{do,200,"有"},{re,200,"退"},{do,400,"缩"},
{qla,1000,"\n"},{qre,800,"唔"},{qdo,200,"~"},{qre,1000,"~"},

{0,400,"\n"},{qso,200,"我"},{qla,200,"来"},{do,200,"自"},{qla,200,"于 "},{do,200,"北"},{qla,200,"方"},{do,200,"的"},{re,400,"春"},{re,600,"天\n"},{do,200,"来"},{re,200,"自"},
{mi,400,"一"},{mi,400,"步"},{re,400,"一"},{mi,200,"回"},{do,1000,"首\n"},{mi,200,"背"},{re,400,"后"},{do,600,"有 "},
{do,200,"告"},{do,200,"别"},{mi,200,"的"},{re,400,"路"},{re,600,"口 "},{do,200,"温"},{do,200,"暖"},{re,200,"每"},{re,200,"个"},{mi,200,"日"},{do,1800,"落"},
    {0,0,"\n"},
{0,600,"\n"},{mi,200,"当"},{mi,200,"家"},{re,200,"乡"},{qla,200,"入"},{do,200,"冬 "},
{do,200,"的"},{re,200,"时"},{do,600,"候\n"},{do,200,"列"},{do,200,"车"},{do,200,"到"},{do,200,"站 "},{mi,200,"以"},{mi,800,"后\n"},{do,200,"小"},{qso,200,"时"},
{qla,400,"候"},{do,400,"的"},{do,400,"风 "},{fa,200,"再"},{fa,400,"吹"},{mi,400,"过\n"},{mi,200,"回"},{mi,200,"忆"},{re,200,"起"},{do,200,"单"},{qla,200,"纯 "},
{do,200,"的"},{re,200,"快"},{do,600,"乐\n"},{do,200,"在"},{do,200,"熟"},{do,200,"悉"},{do,200,"的 "},{re,200,"街"},{re,800,"头\n"},{qso,200,"有"},{qso,200,"人 "},
{qla,200,"会"},{do,200,"用"},{do,200,"所"},{qla,200,"有"},{do,400,"的"},{re,400,"温"},{do,800,"柔 "},{do,200,"喊"},{mi,400,"出"},{do,200,"你"},{re,2000,"的"},{0,600,"\n"},
{do,400,"名"},{re,800,"字\n"},
    {0,0,"\n"},
{mi,200,"离"},{re,200,"家"},{mi,200,"的"},{re,200,"人"},{mi,600,"啊 "},{re,200,"我"},{mi,200,"敬"},{re,200,"你"},{mi,200,"一"},{re,200,"杯"},{do,800,"酒\n"},
{mi,200,"敬"},{re,200,"你"},{mi,200,"的"},{re,200,"沉"},{mi,600,"默 "},{re,200,"和"},{mi,200,"每"},{re,200,"一"},{mi,200,"声"},{so,200,"怒"},{mi,800,"吼\n"},
{mi,200,"敬"},{re,200,"你"},{mi,200,"弯"},{re,200,"着"},{mi,600,"腰 "},{re,200,"上"},{mi,200,"山"},{re,200,"往"},{mi,200,"高"},{re,200,"处"},{do,800,"走\n"},
{mi,200,"头"},{re,600,"顶"},{re,200,"苍"},{do,400,"穹 "},{qso,200,"努"},{mi,200,"力"},{re,600,"地"},{re,200,"生"},{do,600,"活\n"},

{mi,200,"无"},{re,200,"名"},{mi,200,"的"},{re,200,"人"},{mi,600,"啊 "},{re,200,"我"},{mi,200,"敬"},{re,200,"你"},{mi,200,"一"},{re,200,"杯"},{do,800,"酒\n"},
{mi,200,"敬"},{re,200,"你"},{mi,200,"的"},{re,200,"沉"},{mi,600,"默 "},{re,200,"和"},{mi,200,"每"},{re,200,"一"},{mi,200,"声"},{so,200,"怒"},{mi,800,"吼\n"},
{mi,200,"敬"},{re,200,"你"},{mi,200,"弯"},{re,200,"着"},{mi,600,"腰 "},{re,200,"上"},{mi,200,"山"},{re,200,"往"},{mi,200,"高"},{re,200,"处"},{do,800,"走\n"},
{mi,200,"头"},{re,600,"顶"},{re,200,"苍"},{do,400,"穹 "},{qso,200,"努"},{mi,200,"力"},{re,600,"地"},{re,200,"生"},{do,600,"活\n"},{0,600,"\n"},

};

//3、稻香 
typedef struct
{
int freq;//赫兹
int duration;//持续时间
char text[32];//文本内容
}
STU3;
STU3
t3[]={//函数内容(赫兹，持续时间)
{0,200,"稻"},{0,200,"香"},{0,200,"—"},{0,600,"—"},{0,200,"周"},{0,200,"杰"},{0,200,"伦\n"},{0,1000,"\n"},
{0,200},{do,200,"对"},{do,200,"这"},{qla,200,"个"},{do,400,"世"},{qla,200,"界 "},{do,200,"如"},{0,400,""},{do,200,"果"},{do,200,"你"},{re,200,"有"},{re,200,"太"},{re,200,"多"},{re,200,"的"},
{re,200,"抱"},{mi,200},{do,400,"怨"},{0,0,"\n"},
{do,400,"跌"},{qla,200,"倒"},{do,200,"了 "},{0,400,""},{do,200,"就"},{do,200,"不"},{re,200,"敢"},{re,200,"继"},{re,200,"续"},{re,200,"往"},{re,200,"前"},{mi,200},{do,400,"走"},{0,0,"\n"},
{do,400,"为"},{qla,200,"什"},{do,200,"么 "},{0,400,""},{do,200,"人"},{do,200,"要"},{re,200,"这"},{re,200,"么"},{re,200,"的"},{re,200,"脆"},{do,400,"弱"},{re,200,"堕"},{mi,200,""},{re,400,"落"},{mi,600,""},{0,0,"\n"},
{0,600,""},{do,400,"请"},{do,200,"你"},{do,200,"打"},{do,200,"开"},{do,200,"电"},{do,200,"视"},{do,200,"看"},{qla,200,"看 "}, {do,400,"多"},{qla,200,"少"},
{do,400,"人"},{0,0,"\n"},{0,400,""},{do,200,"为"},{do,200,"生"},{re,200,"命"},{re,200,"在"},{re,200,"努"},{re,200,"力"},{re,200,"勇"},{mi,200,""},{do,200,"敢"},{do,200,"的 "},
{do,400,"走"},{qla,200,"下"},{do,200,"去"},{0,0,"\n"},{0,400,""},{do,200,"我"},{do,200,"们"},{re,200,"是"},{re,200,"不"},{re,200,"是"},{re,200,"该"},{re,200,"知"},{mi,200,""},{do,400,"足"},{0,0,"\n"},
{0,600,""},{qso,200,"珍"},{fa,600,"惜"},{mi,400,"一"},{re,200,"切"},{re,200,"就"},{do,200,"算"},{re,200,"没"},{do,200,"有"},{mi,400,"拥"},
{do,1600,"有"},{0,800,""},{0,0,"\n"},

{mi,400,"还"},{mi,200,"记"},{so,200,""},{so,400,"得"},{0,0," "},{so,200,"你"},{so,400,"说"},{so,400,"家"},{so,400,"是"},{so,200,"唯"},{so,200,"一"},{so,200,"的"},{mi,400,"城"},{re,200,"堡"},{do,200,""},{0,0,"\n"},
{do,400,"随"},{mi,200,"着"},{mi,400,"稻"},{mi,400,"香"},{0,0," "},{mi,400,"河"},{mi,200,"流"},{mi,200,"继"},{mi,200,"续"},{mi,400,"奔"},{do,200,"跑"},{qla,200,""},{0,0,"\n"},
{qla,400,"微"},{do,200,"微"},{do,200,"笑"},{0,400," "},{do,200,"小"},{do,200,"时"},{re,400,"候"},{re,200,"的"},{re,200,"梦"},{do,400,"我"},{re,200,"知"},{mi,200,""},{re,400,"道"},{mi,1400,""},{0,600,"\n"},

{mi,400,"不"},{mi,200,"要"},{so,200,""},{so,400,"哭 "},{so,200,"让"},{so,400,"萤"},{so,400,"火"},{so,400,"虫"},{so,200,"带"},{so,200,"着"},{so,200,"你"},{mi,400,"逃"},{re,200,"跑"},{do,200,""},{0,0,"\n"},
{do,400,"乡"},{mi,200,"间"},{mi,400,"的"},{mi,400,"歌"},{mi,400,"谣 "},{mi,200,"永"},{mi,200,"远"},{mi,200,"的"},{mi,400,"依"},{do,200,"靠"},{qla,200,""},{0,0,"\n"},
{qla,400,"回"},{do,200,"家"},{do,200,"吧 "},{0,400,""},{do,200,"回"},{do,200,"到"},{re,400,"最"},{re,200,"初"},{re,600,"的"},{do,400,"美"},{do,1600,"好"},{0,800,"\n"},
};

//4、小星星（不是为了水曲库容量 
typedef struct
{
int freq;//赫兹
int duration;//持续时间
char text[32];//文本内容
}
STU4;
STU4
t4[]={//函数内容(赫兹，持续时间)
{0,200,"小"},{0,200,"星"} ,{0,200,"星"},{0,400,"\n\n"},
{do,400,"一"},{do,400,"闪"},{so,400,"一"},{so,400,"闪"},{la,400,"亮"},{la,400,"晶"},{so,400,"晶"},{0,400," "},
{fa,400,"满"},{fa,400,"天"},{mi,400,"都"},{mi,400,"是"},{re,400,"小"},{re,400,"星"},{do,400,"星"},{0,400,"\n"},
{so,400,"挂"},{so,400,"在"},{fa,400,"天"},{fa,400,"空"},{mi,400,"放"},{mi,400,"光"},{re,400,"明"},{0,400," "},
{so,400,"好"},{so,400,"像"},{fa,400,"许"},{fa,400,"多"},{mi,400,"小"},{mi,400,"眼"},{re,400,"睛"},{0,400,"\n"},
{do,400,"一"},{do,400,"闪"},{so,400,"一"},{so,400,"闪"},{la,400,"亮"},{la,400,"晶"},{so,400,"晶"},{0,400," "},
{fa,400,"满"},{fa,400,"天"},{mi,400,"都"},{mi,400,"是"},{re,400,"小"},{re,400,"星"},{do,400,"星"},{0,400,"\n"},
};

//5、热爱105°C的你 
typedef struct
{
int freq;//赫兹
int duration;//持续时间
char text[32];//文本内容
}STU5;
STU5
t5[]={
{0,200,"热"},{0,200,"爱"} ,{0,200,"105"},{0,200,"°C"},{0,200,"的"},{0,200,"你"},{0,1000,"\n\n"},
{1318,250,"Su"},{1318,250,"per"},{1404,250," ld"},{1318,250,"ol"},{1175,250,"的"},{1318,250,"笑"},{880,500,"容 "}, {1175,250,"都"},{1046,250,"没"},{880,500,"你"},{1046,500,"的"},{1175,500,"甜\n"},
{1175,250,"八"},{1175,250,"月"},{1318,250,"正"},{1175,250,"午"},{1046,250,"的"},{1175,250,"阳"},{1318,500,"光 "}, {1046,250,"都"},{880,250,"没"},{1046,500,"你"},{1046,500,"耀"},{880,500,"眼\n"},
{1318,250,"热"},{1318,250,"爱"},{1404,250," 105"},{1318,250,""},{1175,250,""},{1046,250,""},{1318,250,"°C"},{1175,125,""}, {1175,250,"的"},{1318,250,""},{880,500,"你\n"},
{880,250,"滴"},{1046,250,"滴"},{988,500,"清"},{988,500,"纯的"},
{1318,500,"蒸"},{1318,500,"馏"},{1046,2000,"水\n"},{0,500,"\n"},
{1318,250,"在"},{1318,250,"这"},{1404,250," 独"},{1318,250,"一"},{1175,250,"无"},{1046,250,"二"},{880,500,"属"},
{1175,250,"于"},{1046,250,"我"},{880,500,"的"},{1046,500,"时"},{1175,500,"代\n"},
{1175,250,"莫"},{1175,250,"忘"},{1318,250,"了"},{1175,250,"初"},{1046,250,"心"},{1175,250,"常"},{1318,500,"在 "}, {1046,250,"痛"},{880,250,"快"},{1046,500,"去"},{1046,500,"热"},{880,500,"爱\n"},
{1318,250,"热"},{1318,250,"爱"},{1404,250," 105"},{1318,250,""},{1175,250,""},{1046,250,""},{1318,250,"°C"},{1175,125,""}, {1175,250,"的"},{1318,250,""},{880,500,"你\n"},
{880,250,"滴"},{1046,250,"滴"},{988,500,"清"},{988,500,"纯的"},
{1318,500,"蒸"},{1318,500,"馏"},{1046,2000,"水\n"}
};

//6、生日快乐歌 
typedef struct
{
int freq;//赫兹
int duration;//持续时间
char text[32];//文本内容
}
STU6;
STU6
t6[]={//函数内容(赫兹，持续时间)
{0,200,"生"},{0,200,"日"},{0,200,"快"},{0,200,"乐"},{0,200,"歌\n"},{0,1000,"\n"},
{qso,400,"祝"},{qso,400,"你"},{qla,800,"生"},{qso,800,"日"},{do,800,"快"},{qsi,1600,"乐\n"},
{qso,400,"祝"},{qso,400,"你"},{qla,800,"生"},{qso,800,"日"},{re,800,"快"},{do,1600,"乐\n"},
{qso,400,"祝"},{qso,400,"你"},{so,800,"生"},{mi,800,"日"},{do,800,"快"},{qsi,800,"乐"},{qla,800,"\n"},
{fa,400,"祝"},{fa,400,"你"},{mi,800,"生"},{do,800,"日"},{re,800,"快"},{do,1600,"乐\n"},
}; 

//7、 卡农 
typedef struct
{
int freq;//赫兹
int duration;//持续时间
char text[32];//文本内容
}
STU7;
STU7//{so,200},
t7[]={//函数内容(赫兹，持续时间)
{0,200,"卡"},{0,200,"农\n"},{0,1000,"\n"},
/*{mi1,1600},{re1,1600},{do1,1600},{si,1600},{la,1600},{so,1600},{la,1600},{si,1600},
{do1,1600},{si,1600},{la,1600},{so,1600},{fa,1600},{mi,1600},{fa,1600},{re,1600},

{do1,400},{si,400},{do1,400},{do,400}, {qsi,400},{so,400},{re,400},{mi,400},
{do,400},{do1,400},{si,400},{la,400}, {si,400},{mi1,400},{so1,400},{la1,400},
{fa1,400},{mi1,400},{re1,400},{fa1,400}, {fa1,400},{mi1,400},{do1,400},{si,400},
{la,400},{so,400},{fa,400},{mi,400}, {re,400},{fa,400},{mi,400},{re,400},

{do,400},{re,400},{mi,400},{fa,400}, {so,400},{re,400},{so,400},{fa,400},
{mi,400},{la,400},{so,400},{fa,400}, {so,400},{fa,400},{mi,400},{re,400},
{do,400},{qla,400},{la,400},{si,400}, {do1,400},{si,400},{la,400},{so,400},
{fa,400},{mi,400},{re,400},{la,400}, {so,400},{la,400},{so,400},{fa,400},

{mi,800},{mi1,800},{re1,1600},{do1,1600},{re1,1600},{do1,800},{mi1,800},{re1,800},{fa1,800},
*/
{so1,400},{mi1,200},{fa1,200},{so1,400},{mi1,200},{fa1,200}, {so1,200},{so,200},{la,200},{si,200},{do1,200},{re1,200},{mi1,200},{fa1,200},
{mi1,400},{do1,200},{re1,200},{mi1,400},{mi,200},{fa,200}, {so,200},{la,200},{so,200},{fa,200},{so,200},{mi,200},{fa,200},{so,200},
{fa,400},{la,200},{so,200},{fa,400},{mi,200},{re,200}, {mi,200},{re,200},{do,200},{re,200},{mi,200},{fa,200},{so,200},{la,200},

{fa,400},{la,200},{so,200},{la,400},{si,200},{do1,200}, {so,200},{la,200},{si,200},{do1,200},{re1,200},{mi1,200},{fa1,200},{so,200},
{mi1,400},{do1,200},{re1,200},{mi1,400},{re1,200},{do1,200}, {re1,200},{si,200},{do1,200},{re1,200},{mi1,200},{re1,200},{do1,200},{si,200},
{do1,400},{la,200},{si,200},{do1,400},{do,200},{re,200}, {mi,200},{fa,200},{mi,200},{re,200},{mi,200},{do1,200},{si,200},{do1,200},

{la,400},{do1,200},{si,200},{la,400},{so,200},{fa,200}, {so,200},{fa,200},{mi,200},{fa,200},{so,200},{la,200},{si,200},{do1,200},
{la,400},{do1,200},{si,200},{do1,400},{si,200},{la,200}, {si,200},{do1,200},{re1,200},{do1,200},{si,200},{do1,200},{la,200},{si,200},
}; 

//8、芒种 
typedef struct
{
int freq;//赫兹
int duration;//持续时间
char text[32];//文本内容
}
STU8;
STU8
t8[]={//函数内容(赫兹，持续时间)
{0,200,"芒"},{0,200,"种\n"},{0,1000,"\n"},
{0,800,""},{mi1,200,"一"},{do1,200,"想"},{re1,400,"到"},{la,400,"你"},{la,400,"我"},
{la,800,"就 "},{mi1,400,"Wu"},{so1,400,"~"},{mi1,400,""},{so1,400,""},{mi1,800,"\n"},
{re1,400,"恨"},{re1,200,"情"},{do1,200,"不"},{re1,400,"寿"},{re1,200,"总"},{do1,200,"于"},{re1,400,"苦"},{mi1,400,"海"},{so,800,"囚\n"},
{so,800,"Wu"},{mi1,400,"~"},{so1,400,""},{mi1,400,""},{la,400,""},{do1,800," "},
{re1,400,"新"},{re1,200,"翠"},{do1,200,"徒"},{re1,400,"留"},{re1,200,"落"},{do1,200,"花"},{mi1,400,"影"},{do1,400,"中"},{la,400,"游"},{do1,400,"\n"},
{la,800,"Wu"},{mi1,400,"~"},{so1,400,""},{mi1,400,""},{so1,400,""},{mi1,800," "},
{so1,400,"相"},{so1,200,"思"},{mi1,200,"无"},{so1,400,"用"},{so1,200,"才"},{mi1,200,"笑"},{so1,400,"山"},{mi1,400,"盟"},{do1,800,"旧\n"},
{so1,800,"Wu"},{la1,400,"~"},{so1,400,""},{so1,800,""},{mi1,800,""},
{so1,1600,"\n"},{mi1,400,"谓"},{do1,400,"我"},{do1,800,"何"},{la,800,"求"}, 
/*{0,1200,""},{so,200,"哒"},{la,200,"哒"},{do1,400,"哒"},{do1,400,"哒"},{do1,800,"哒"},
{0,1200,""},{so,200,"哒"},{la,200,"哒"},{do1,400,"哒"},{mi1,400,"哒"},{mi1,800,"哒"},
{0,1200,""},{so,200,"哒"},{la,200,"哒"},{do1,400,"哒"},{do1,400,"哒"},{do1,800,"哒"},
{0,800,""},{mi1,400,"谓"},{do1,400,"我"},{do1,800,"何"},{la,800,"求"},
*/};

//9、牵丝戏
typedef struct
{
int freq;//赫兹
int duration;//持续时间
char text[32];//文本内容
}
STU9;
STU9
t9[]={//函数内容(赫兹，持续时间)
{0,200,"牵"},{0,200,"丝"},{0,200,"戏\n"},{0,1000,"\n"},
{0,400,""},{mi,400,"兰"},{so,400,"花"},{mi,400,"指"},
{re,800,"捻"},{0,400,""},{mi,400,"红"},{re,800,"尘"},{do,400,"似"},{qla,800,""}, 
{mi,1200,"水"},{0,400,"\n"},{mi,400,"三"},{so,400,"尺"},{mi,400,"红"},
{re,800,"台"},{0,400,""},{mi,400,"万"},{re,800,"事"},{so,400,"入"},{la,800,"歌"},
{mi,1200,"吹"},{0,400,"\n"},{re,400,"唱"},{mi,400,"别"},{so,400,""},
{la,400,"久"},{so,400,"悲"},{mi,400,"不"},{so,400,"成"},{re,800,"悲\n"},{mi,400,"十"},{re,400,"分"},
{do,400,"红"},{re,400,"处"},{mi,400,"竟"},{so,400,"成"},{qla,800,"灰\n"},{qla,400,"愿"},{do,400,"谁"},
{re,400,"记"},{mi,400,"得"},{qla,800,"谁\n"},{re,400,"最"},{mi,400,"好"},{qla,400,"的"},{qso,800,"年"},
{qla,1200,"岁\n"},
};  

int main()
{
	printf("欢迎来到 C语言点歌台 OVO\n");
	ps(1);
	int i,mark,x;
	while((scanf("%d",&mark))!=EOF)
	{
		if(mark==0)
		{
			srand((int)time(0));//使每次输出值不同 
			x=rand()%9+1;
			mark=x;
		}
		if(mark!=1&&mark!=2&&mark!=3&&mark!=4&&mark!=5&&mark!=6&&mark!=7&&mark!=8&&mark!=9)
		printf("代码错误/WA  请重新输入代码进行点歌\n");
		else if(mark==1){
		    for(i=0; i<sizeof(t1)/sizeof(STU1); i++)
			{
			printf("%s",t1[i].text);
			Beep(t1[i].freq,t1[i].duration);
			}
			ps(1);}
		else if(mark==2){
		    for(i=0; i<sizeof(t2)/sizeof(STU2); i++)
			{
			printf("%s",t2[i].text);
			Beep(t2[i].freq,t2[i].duration);
			}
			ps(1);}
		else if(mark==3){
			for(i=0; i<sizeof(t3)/sizeof(STU3); i++)
	    	{
		    printf("%s",t3[i].text);
		    Beep(t3[i].freq,t3[i].duration);
		    }
		    ps(1);}
		else if(mark==4){
			for(i=0; i<sizeof(t4)/sizeof(STU4); i++)
			{
			printf("%s",t4[i].text);
			Beep(t4[i].freq,t4[i].duration);
			}
			ps(1);}
		else if(mark==5){
			for(i=0; i<sizeof(t5)/sizeof(STU5); i++)
			{
			printf("%s",t5[i].text);
			Beep(t5[i].freq,t5[i].duration);
			}
			ps(1);}
        else if(mark==6){
			for(i=0; i<sizeof(t6)/sizeof(STU6); i++)
			{
			printf("%s",t6[i].text);
			Beep(t6[i].freq,t6[i].duration);
			}
			ps(1);}
else if(mark==7){
			for(i=0; i<sizeof(t7)/sizeof(STU7); i++)
			{
			printf("%s",t7[i].text);
			Beep(t7[i].freq,t7[i].duration);
			}
			ps(1);}
else if(mark==8){
			for(i=0; i<sizeof(t8)/sizeof(STU8); i++)
			{
			printf("%s",t8[i].text);
			Beep(t8[i].freq,t8[i].duration);
			}
			ps(1);}
else if(mark==9){
			for(i=0; i<sizeof(t9)/sizeof(STU9); i++)
			{
			printf("%s",t9[i].text);
			Beep(t9[i].freq,t9[i].duration);
			}
			ps(1);}
	}

}