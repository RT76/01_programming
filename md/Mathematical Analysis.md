# <center>Notes Of Mathematical Analysis</center>

<center>author:宋和德</center>

## $Chapter1 :集合与映射$

### $\S1\;集合$

#### **集合的表示**

- **列举法**。（可用于至多可数集）

  如$\N=\{0,1,2,3,\cdots,n,\cdots\}$

- **描述法**。

  如有理数集：$\Q=\{x|x=\frac qp,p\in\N^+,q\in\Z\}$

性质：无序性，互异性。

$$若集合A有n个元素，则集合A有2^n个子集，其中有一个为空集\varnothing，一个为A$$

**常见的一些集合：**

1. 正整数集$\N^+$
2. 自然数集$\N$
3. 整数集$\Z$
4. 有理数集$\Q$
5. 实数集$\R$
6. 复数集$\C$

集合关系略

#### **集合运算（交并补）**

* 交与并的运算律：

1. **交换律**	$A\cap B=B\cap A\qquad A\cup B=B\cup A$
2. **结合律**    $A\cup (B\cup D)=(A\cup B)\cup D\qquad A\cap (B\cap D)=(A\cap B)\cap D$
3. **分配律**   $A\cap(B\cup D)=(A\cap B)\cup(A\cap D)\qquad A\cup(B\cap D)=(A\cup B)\cap(A\cup D)$

+ 补的运算性质，对偶律、De Morgan公式：

​				$$(A\cup B)^C=A^C\cap B^C\qquad(A\cap B)^C=A^C\cup B^C$$

#### 有限集与无限集

确定一个集合是否为可列集，即判断该集合中所有元素能否被不重不漏地排成一列。

可列集：所有有限集，$\N,\Z,\Q$

不可列集：$\R$

**定理1.1.1：可列集个可列集之并是可列集**

**定理1.1.2：有理数集$\Q$是可列集**

#### Descartes积

有序数对：$$A\cp B=\{(x,y)|x\in A,y\in B\}$$

平面直角坐标系下点的集合：$\R\cp\R，记为\R^2$

空间直角坐标系下点的集合：$\R\cp\R\cp\R,记作\R^3$

### $\S2\;映射与函数$

#### 映射

开宗明义：**<u>映射是指两个集合间的一种对应关系。</u>**

**定义1.2.1**	设$X$,$Y$是两个给定的集合,若按照某种规则$f$,使得对集合$X$中的每个元素$x$,都可以找到集合$Y$中唯一确定的元素$y$与之对应,则称这个对应规则$f$是集合$X$到集合$Y$的一个**映射**,记为：					
$$
f:X\rightarrow Y\\x\mapsto y=f(x)
$$
其中：$y$称为在映射$f$下$x$的**像**$x$,称为在映射$f$之下$y$的一个**逆像**(也称为**原像**).集合$X$称为映射$f$的**定义域**,记为$D_f$.而在映射$f$之下,$X$中元素$x$的像$y$的全体称为映射$f$的**值域**,记为$R_f$,即：
$$
R_f=\{y|y\in Y并且y=f(x),x\in X\}
$$
<u>构成一个映射的三个基本要素：</u>

1. 集合$X$,即定义域$D_f=X$;

2. 集合$Y$,即限制值域的范围:$R_f\subset Y$;

3. 对应规则$f$,使每一个$x\in X,$有唯一确定的$y=f(x)$​与之对应.

   

   

**需要注意的：**

1. 元素像唯一，否则不是映射。
2. 没有要求逆像唯一。

**定义1.2.2：**设$f$是集合$X$到集合$Y$的一个映射,若$f$的逆像也具有唯一性,即对$X$中的任意两个不同元素$x_1\neq x_2$,他们的像$y_1$与$y_2$也满足$y_1\neq y_2$,则称$f$为**单射**;如果映射$f$满足$R_f=Y$,则称$f$为**满射**;如果映射$f$既是单射，又是满射，则称$f$为**双射**(又称**一一对应**).

**逆映射：**

设映射$f:X\rightarrow Y$是单射,由定义1.2.2,$\forall y\in R_f\subset Y$,其逆像$x\in X$是唯一确定的.由定义1.2.1，对应关系

​												$$g:R_f\rightarrow X\\y\mapsto x(f(x)=y)$$

构成了$R_f到Y$的一个映射，称为映射$f$的<u>**逆映射**</u>,记为$f^{-1}$.定义域$D_{f^{-1}}=R_f$,值域$R_{f^{-1}}=D_f$.<u>显然,只要逆映射$f^{-1}$存在,他就一定是$R_f$到$X$上的双射.</u>

**复合映射**

现有如下两个映射

​					$$g:X\rightarrow U_1\\x\mapsto u=g(x)$$			和			$$f:U_2\rightarrow Y\\u\mapsto y=f(u)$$

**如果$R_g\subset U_2=D_f$**,那就可以构造出一个新的对应关系

​												$$f\circ g:X\rightarrow Y\\x\mapsto y=f(g(x))$$

#### 一元实函数

在定义1.2.1中，取$X\subset\R,Y=\R$,则映射

​													$$f:X\rightarrow Y\\x\mapsto y=f(x)$$

称为**一元实函数**，简称**函数**。简写为$y=f(x),x\in X(=D_f)$.$x$称为自变量，$y$称为因变量。

**初等函数**

+ 常数函数：	$y=c$
+ 幂函数：        $y=x^{\alpha}(\alpha\in\R)$
+ 指数函数：    $y=a^x(a>0且a\neq1)$
+ 对数函数：    $y=\log_ax(a>0且a\neq1)$
+ 三角函数：    $y=\sin x,y=\cos x,y=\tan x,y=\cot x等$
+ 反三角函数：$y=\arcsin x,y=\arccos x,y=\arctan x等$

这六类函数统称为<u>**基本初等函数**</u>，由基本初等函数经过<u>有限次</u>四则运算与复合运算所产生的函数称为**初等函数**。

初等函数的**自然定义域**是指它的自变量的最大取值范围。

#### 函数的表示

1. 分段表示——分段函数：

设集合$A\subset\R,B\subset\R且A\cap B=\emptyset,\varphi(x)和\psi(x)$是分别定义在集合$A$和集合$B$上的函数,则

​											$$f(x)=\begin{cases}\varphi(x),x\in A,\\\psi(x),x\in B\end{cases}$$

是定义在集合$A\cup B$上的函数。这里的函数$f$是分为两段表示的，也可以分为<u>任意有限段甚至无限多段。</u>

几个常用的分段函数：

- 符号函数$sgn\;x$

​								$$sgn\;x=\begin{cases}\;\;\;1,x>0,\\\;\;\;0,x=0,\\-1,x<0\end{cases}$$

定义域$D_f=\R$,值域$R_f=\{-1,0,1\}$

<img src="C:\Users\CN198\AppData\Roaming\Typora\typora-user-images\image-20220730131006368.png" alt="image-20220730131006368" style="zoom: 67%;" />

- "整数部分"函数$[x]$


$y=[x]=n,n\leq x<n+1,n\in \Z$

定义域$D_f=\R$,值域$R_f=\Z$

<img src="C:\Users\CN198\AppData\Roaming\Typora\typora-user-images\image-20220730131710683.png" alt="image-20220730131710683" style="zoom:80%;" />

- "非负小数部分"$(x)$


$y=(x)=x-[x],x\in\R$

定义域$D_f=\R$,值域$R_f=[0,1)$

![image-20220730131929747](C:\Users\CN198\AppData\Roaming\Typora\typora-user-images\image-20220730131929747.png)

2. 隐式表示

即通过方程$F(x,y)=0$来确定变量$x,y$之间函数关系。如著名的**Kepler方程**：

​				$x-y+\varepsilon\sin y=0,\varepsilon\in(0,1)为常数$

3. 参数表示

引入第三个变量(如参数$t$)作为中间变量,通过建立$x$与$t$,$y$与$t$的关系间接地确定$x$与$y$的函数关系。

​												$$\begin{cases}x=x(t),\\y=y(t),\end{cases}\qquad t\in [a,b]$$

设$X=\{x|x=x(t),t\in[a,b]\},Y=\{y|y=y(t),t\in[a,b]\}$则上式所确定的函数关系为

​												$$f:X\rightarrow Y\\x=x(t)\mapsto y=y(t).$$

摆线(旋轮线)的参数方程$(r=1)$：

​													$$\begin{cases}x=t-\sin t,\\y=1-\cos t,\end{cases}\qquad t\in[0,+\infty)$$

$t$为旋转角。若取$t\in[0,2\pi]$,则得到摆线的一拱

#### 函数的简单特性

1. 有界性
2. 单调性
3. 奇偶性

#### **一些病态函数**

- Dirichlet函数

​													$$D(x)=\begin{cases}0,\quad x\in\R\backslash\Q\\1,\quad x\in\Q\end{cases}$$

- Riemann函数

$$
R(x)=\begin{cases}\frac1q,\quad x\in\{x|x=\frac pq,p\in\Z,q\in\N^+,p,q互质且p\neq0\}\\1,\quad x=0\\0,\quad x\in\R\backslash\Q\end{cases}
$$

## $Chapter2:数列极限$

### $\S1\;$实数系的连续性

#### 数系的扩充历史

​							$$\N:对+和\times封闭，对-不封闭\\\Downarrow\\\Z:对+,-,\times封闭，对\div不封闭\\\Downarrow\\\Q:对+,-,\times, \div 封闭，且具有稠密性$$

但是$\Q$对于开方运算是不封闭的。注意到有理数均可以表示为有限小数或无限循环小数。因此把所有的无限不循环小数(即无理数)吸纳进来，使$\Q$扩充到$\R$

因为所有的无理数所对应的无理点确实填补了有理点在数轴上的空隙，即实数具有连续性，铺满了整个数轴。故**$\R$又被称为实数连续统。**

#### 实数连续性定理——确界存在定理

设$S$为非空数集有上界,其全体上界构成集合$U$,则$U$无最大数,但一定有最小数,设这个最小数为$\beta$,称$\beta$为数集$S$的**上确界**,即<u>最小上界,</u>记为$\beta=\sup S$,满足以下两个性质：

1. $\forall x\in S,x\leq\beta$
2. $\forall\varepsilon>0,\exist x\in S,s.t.x>\beta-\varepsilon$

下确界定义类似：$\alpha=\inf S$,满足：

1. $\forall x\in S,x\geq\alpha$
2. $\forall \varepsilon>0,\exist x\in S,s.t.x<\alpha+x$

**定理2.1.1(确界存在定理——实数系连续定理)**

非空有上界的数集必有上确界，非空有下界的数集必有下确界。

**定理2.1.2(确界唯一性)**

非空有界数集的上(下)确界是唯一的.

意义：存在空隙的$\Q$不具有该性质,即：存在在$\Q$中有界但在$\Q$中没有确界的数集。

#### Dedekind分割定理

Dedekind(戴德金)以$\Q$的分割为基础定义无理数，进而定义整个实数系。

定义  1(分割)

设两个非空有理数集合满足下述条件:$\Q=A\cup B$且$\forall a\in A$,$b\in B$成立$a<b$,则称$A$和$B$构成$\Q$的一个分割，记为$A/B$

定义  2(无理数)

设$A/B$是有理数集合$\Q$的一个分割,如果$A$中没有最小数，$B$中没有最大数,则称分割$A/B$确定了一个无理数$c$,$c$大于$A$中任何有理数，小于$B$中任何有理数.

定义  3(实数集)

由有理数全体与定义2确定的无理数全体所构成的集合称为实数集,记为$\R$.

定义  4(分割)

设两个非空实数数集合满足下述条件:$\R=A\cup B$且$\forall a\in A$,$b\in B$成立$a<b$,则称$A$和$B$构成$\R$的一个分割，记为$\tilde{A}/\tilde{B}$

**定理(Dedekind切割定理)**

设$\tilde{A}/\tilde{B}$是实数集$\R$的一个切割，则或者$\tilde{A}$有最大数，或者$\tilde{B}$有最小数。
证明：



