[toc]
# <center>同构在导数中的应用</center>

***<center>宋和德整理</center>***

&emsp;&emsp;在导数的一些题目中，常常会遇到双变量的不等式证明或者双变量不等式恒成立求参数范围问题。同构是一种通过变形将两个变量分开并构造相同结构从而将问题简化为单变量函数单调性问题的转化思想。同构也可用来解决一些~~英灵殿~~隐零点问题。本文整理了常用的一些同构技巧，并在文末附有相应的习题加以巩固。
***
## 预备知识：指对变形

$$xe^x=e^{\ln x}e^x=e^{x+\ln x}\qquad\frac{x}{e^x}=e^{\ln x-x}\qquad\frac{e^x}{x}=e^{x-\ln x}\\
x+\ln x=\ln e^x+\ln x=\ln xe^x\qquad x-\ln x=\ln \frac{e^x}{x}$$
***
## 一、抽象函数
&emsp;&emsp;注意到变形时的变号问题，以下都默认$x_1>x_2$
- 1  
$$\frac{f(x_1)-f(x_2)}{x_1-x_2} > k\\
    \Rightarrow f(x_1)-f(x_2)>k(x_1-x_2)\Rightarrow
    f(x_1)-kx_1>f(x_2)-kx_2
$$
令$h(x)=f(x)-kx$，问题转化为研究$h(x)$单调性。  

- 2
$$\frac{f(x_1)-f(x_2)}{x_1-x_2}>\frac{k}{x_1x_2}$$
$$
    \Rightarrow f(x_1)-f(x_2)>\frac{k(x_2-x_1)}{x_1x_2}
    =\frac{k}{x_2}-\frac{k}{x_1}\Rightarrow
    f(x_1)+\frac k x_1>f(x_2)+\frac k x_2
$$
令$h(x)=f(x)+\frac k x$，问题转化为研究$h(x)$单调性。
***
## 二、指对结构
&emsp;&emsp;指对跨阶想同构，同左同右取对数。  
### 1. 积型
$$
    ae^a\leq b\ln b\Rightarrow \begin{cases}
        \text{同左：} ae^a\leq (\ln b)e^{\ln b}
        \Rightarrow f(x)=xe^x;    \\
        \text{同右：} e^a\ln e^a\leq b\ln b\Rightarrow
        f(x)=x\ln x;              \\
        \text{取对：} a+\ln a\leq\ln b+\ln(\ln b)
        \Rightarrow f(x)=x+\ln x. \\
    \end{cases}
$$
&emsp;&emsp;<u>需要指出的是，取对数是最快的方法，因为其构造的函数单调性一看便知.</u>

### 2. 商型
$$
    \frac{e^a}{a}\leq\frac{b}{\ln b}\Rightarrow\begin{cases}
        \text{同左：} \frac{e^a}{a}\leq\frac{e^{\ln b}}{\ln b}
        \Rightarrow f(x)=\frac{e^x}{x};   \\
        \text{同右：} \frac{e^a}{\ln e^a}\leq\frac{b}{\ln b}
        \Rightarrow f(x)=\frac{x}{\ln x}; \\
        \text{取对：}a-\ln a\leq \ln b-\ln(\ln b)\Rightarrow
        f(x)=x-\ln x.
    \end{cases}
$$

### 3. 和差型
$$
e^a\plusmn a\geq b\plusmn \ln b\Rightarrow\begin{cases}
\text{同左：}e^a\plusmn a\geq e^{\ln b}\plusmn \ln b\Rightarrow f(x)=e^x\plusmn x;\\
\text{同右：}e^a\plusmn \ln e^a\geq b\plusmn \ln b\Rightarrow f(x)=x\plusmn \ln x;
\end{cases}
$$
### 4. 无中生有凑形式
&emsp;&emsp;无中生有去同构，<u>*凑好形式是关键*</u>，**凑常数**或**凑参数**，如有必要**凑变量**。
* $ae^{ax}\geq\ln x\xrightarrow{\times x}axe^{ax}\geq x\ln x\rightarrow $转化为1的情况
* $e^x>a\ln(ax-a)-a\Leftrightarrow\frac1ae^x=e^{x-\ln a}>\ln a(x-1)-1\\
\xrightarrow{+x-\ln a}e^{x-\ln a}+x-\ln a>\ln (x-1)+x-1\rightarrow$转化为3的情况
* $a^x>\log_ax\Leftrightarrow e^{x\ln a}>\frac{\ln x}{\ln a}\xrightarrow{\times x}x\ln a e^{x\ln a}>x\ln x\rightarrow$转化为2的情况
另：注意到左右互为反函数，故只要$a^x>x>\log_ax$ 

## 三、例题~~及解答~~ 

&emsp;&emsp;重要的事情说三遍：
&emsp;&emsp;*习题来了！！！*
&emsp;&emsp;*习题来了！！！*
&emsp;&emsp;*习题来了！！！*
![王の藐视](王の藐视.jpg)
### 1.变形并写出相应的同构函数
$$\begin{align*}
    &(1)\;\log_2x-k\cdot2^{kx}\geq0\\
    &(2)\;e^{2\lambda x}-\frac1\lambda\ln\sqrt x\geq0\\
    &(3)\;x^2\ln x-me^{\frac m x}\geq0\\
    &(4)\;a(e^{ax}+1)\geq2(x+\frac1x)\ln x\\
    &(5)\;a\ln(x-1)+2(x-1)\geq ax+2e^x\\
    &(6)\;x+a\ln x+e^{-x}\geq x^a(x>1)\\
    &(7)\;e^{-x}-2x-\ln x=0\;(隐零点)\\
    &(8)\;x^2e^x+\ln x=0\;(隐零点)
\end{align*}
$$
### 2.恒成立求参 

$$
\begin{align*}
    &(1)\;\forall x>0,a^x>\log_ax(a>0,a\neq1)恒成立，求a取值范围。\\
    &(2)\;\forall x>0,a(e^{ax}+1)\geq2(x+\frac1x)\ln x恒成立，求a最小值。\\
    &(3)\;\forall x>1,e^x-a\ln(ax-a)+a>0(a>0)恒成立,求a取值范围。\\
    &(4)\;\forall x>0,2ae^{2x}-\ln x+\ln a\geq0恒成立，求a最小值。\\
    &(5)\;\forall x>0,m\ln(x+1)-3x-3>mx-3e^x恒成立，求m取值范围。\\
    &(6)\;\forall x>0,xe^{ax-1}-\ln x-ax\geq0,求a最小值。\\
\end{align*}
$$

## 四、班主任寄语&总结
![champion](champion.jpg "championの笑") 
