# 数学分析II

*Table of contents*
- [数学分析II](#数学分析ii)
  - [级数理论](#级数理论)
    - [数项级数](#数项级数)
      - [基本概念与性质](#基本概念与性质)
      - [上下极限](#上下极限)
      - [正项级数的审敛法](#正项级数的审敛法)
      - [任意级数的审敛法](#任意级数的审敛法)
      - [任意项级数和更序数列](#任意项级数和更序数列)
      - [无穷乘积](#无穷乘积)
    - [函数项级数](#函数项级数)
      - [函数项级数的敛散性](#函数项级数的敛散性)
      - [一致收敛的判别法](#一致收敛的判别法)
      - [一致收敛级数的性质](#一致收敛级数的性质)
    - [幂级数](#幂级数)
  - [Euclid 空间上的极限和连续](#euclid-空间上的极限和连续)
    - [Euclid空间](#euclid空间)
      - [Euclid空间的性质](#euclid空间的性质)
      - [Euclid空间的基本定理](#euclid空间的基本定理)
    - [多元函数](#多元函数)
      - [多元函数的极限](#多元函数的极限)
      - [多元函数的连续性](#多元函数的连续性)
  - [多元函数的微分学](#多元函数的微分学)
    - [多元函数的偏导数](#多元函数的偏导数)
    - [全微分与可微性](#全微分与可微性)

为了方便参考, 部分上学期内容中数项级数的内容也放在了这里. 本学期考试的内容主要是函数项级数和多元函数的微积分, 但是为了帮助理解，数项级数的内容也是非常重要的, 因此也放在了这里.

**主要内容**:

- 级数理论: 数项级数, 函数项级数, 幂级数.

- 多元微积分学: Euclid空间上的极限, 微分学, 积分学(重积分), 曲线积分和曲面积分, 含参积分, Fourier级数.

## 级数理论

### 数项级数

#### 基本概念与性质

**定义**: 设$x_1, x_2, \cdots, x_n, \cdots$为一无穷可列个实数, 我们定义$\{x_n\}$为数列的**通项**.

数列的部分和序列为:
$$
S_n = x_1 + x_2 + \cdots + x_n
$$

无穷项级数(简称级数)定义为:
$$
S= x_1 + x_2 + \cdots + x_n + \cdots = \sum_{n=1}^{\infty} x_n
$$

若数列$\{S_n\}$收敛, 则称级数$S$收敛, 且其和为:
$$
S = \lim_{n \to \infty} S_n
$$
否则称级数$S$发散. 这就是相关概念的定义

**定理**: 级数$\sum_{n=1}^{\infty} x_n$收敛的必要条件是: $\lim_{n \to \infty} x_n = 0$.

本定理显然, 这里不予证明.

下面列举几种常见的级数:

1. **几何级数**: 形如$\sum_{n=0}^{\infty} ar^n$的级数, 其中$a$和$r$为常数. 当$|r| < 1$时, 该级数收敛, 且其和为:
$$
S = \frac{a}{1-r}
$$
2. **调和级数**: 形如$\sum_{n=1}^{\infty} \frac{1}{n}$的级数. 该级数发散.
3. **p级数**: 形如$\sum_{n=1}^{\infty} \frac{1}{n^p}$的级数, 其中$p$为常数.
   
   当$p > 1$时, 该级数收敛; 当$p \leq 1$时, 该级数发散.

**性质**: 下面列举无穷级数的几个性质:
- 若级数$\sum_{n=1}^{\infty} x_n$收敛, 则其任意加括号的级数也收敛, 且级数和相等.
- 若级数$\sum_{n=1}^{\infty} x_n$收敛, 则其任意有限项被去掉后的级数也收敛.
- 线性性质: 若级数$\sum_{n=1}^{\infty} x_n$和$\sum_{n=1}^{\infty} y_n$均收敛, 则对于任意常数$a$和$b$, 级数$\sum_{n=1}^{\infty} (a x_n + b y_n)$也收敛, 且有:
$$
\sum_{n=1}^{\infty} (a x_n + b y_n) = a \sum_{n=1}^{\infty} x_n + b \sum_{n=1}^{\infty} y_n
$$

#### 上下极限

研究级数敛散性需要借助数列的敛散性, 但是有些数列并不收敛, 这时我们可以借助数列的上下极限来研究数列的性质.

先考虑有界数列的情形:

**定义**: 设$\{x_n\}$为有界数列, 若在这个数列中存在一个子列$\{x_{n_k}\}$, 使得:
$$
\lim_{k \to \infty} x_{n_k} = \xi
$$
则称$\xi$为数列$\{x_n\}$的一个**极限点**.

记$E$为数列$\{x_n\}$的全部极限点所组成的集合, 则E是一个非空有界集合.

**定理**: $E$的上确界$H$和下确界$h$都在集合$E$中, 即存在数列的子列$\{x_{n_k}\}$和$\{x_{m_k}\}$, 使得:
$$\lim_{k \to \infty} x_{n_k} = H, \quad \lim_{k \to \infty} x_{m_k} = h$$

**定义**: 数列$\{x_n\}$的上极限和下极限分别定义为:
$$
\overline{\lim_{n \to \infty}} x_n = H, \quad \underline{\lim_{n \to \infty}} x_n = h
$$
其中$H$和$h$分别为数列$\{x_n\}$的极限点集合的上确界和下确界.

**定理**: 设$\{x_n\}$为有界数列, 则数列收敛的充分必要条件是:
$$
\overline{\lim_{n \to \infty}} x_n = \underline{\lim_{n \to \infty}} x_n
$$

我们可以从这个定义出发定义无界数列的上下极限:

**定义**: 设$\{x_n\}$为数列, 若存在一个子列$\{x_{n_k}\}$, 使得:
$$
\lim_{k \to \infty} x_{n_k} = \xi, \quad \xi \in \mathbb{R} \cup \{+\infty, -\infty\}
$$
则称$\xi$为数列$\{x_n\}$的一个**极限点**.

记$E$为数列$\{x_n\}$的全部极限点所组成的集合, 则E是一个非空集合.

**定义**: 数列$\{x_n\}$的上极限和下极限分别定义为:
$$
\overline{\lim_{n \to \infty}} x_n = \sup E, \quad \underline{\lim_{n \to \infty}} x_n = \inf E
$$
其中$\sup E$和$\inf E$分别为数列$\{x_n\}$的极限点集合的上确界和下确界. 当$\sup E = +\infty$或$\inf E = -\infty$时, 我们约定$\overline{\lim_{n \to \infty}} x_n = +\infty$或$\underline{\lim_{n \to \infty}} x_n = -\infty$.

上下极限的运算和普通代数运算有所不同:

- 加法: 设$\{x_n\}$和$\{y_n\}$为数列, 则有:
$$
\overline{\lim_{n \to \infty}} (x_n + y_n) \leq \overline{\lim_{n \to \infty}} x_n + \overline{\lim_{n \to \infty}} y_n
$$
$$
\underline{\lim_{n \to \infty}} (x_n + y_n) \geq \underline{\lim_{n \to \infty}} x_n + \underline{\lim_{n \to \infty}} y_n
$$
- 乘法: 设$\{x_n\}$和$\{y_n\}$为数列, 则有:
$$
\overline{\lim_{n \to \infty}} (x_n y_n) \leq \overline{\lim_{n \to \infty}} x_n \cdot \overline{\lim_{n \to \infty}} y_n
$$
$$
\underline{\lim_{n \to \infty}} (x_n y_n) \geq \underline{\lim_{n \to \infty}} x_n \cdot \underline{\lim_{n \to \infty}} y_n
$$

注意, 上述四个式子在$x_n$和$y_n$有一者收敛时取等.

其证明可以通过下面这个结论完成:

**定理**: 设$\{x_n\}$为数列, 则$\overline{\lim_{n \to \infty}} x_n = H$的充分必要条件为:
- 对任意$\epsilon > 0$, 存在$N_1$, 当$n > N_1$时, 有$x_n < H + \epsilon$;
- 对任意$\epsilon > 0$, $\{x_n\}$中有无穷多项,  $x_n > H - \epsilon$.

#### 正项级数的审敛法

**定义**: 设$\{a_n\}$为非负数列, 则级数$\sum_{n=1}^{\infty} a_n$称为**正项级数**.

根据单增数列必有上界, 我们可以立即得到下面的定理:

**定理**: 正项级数$\sum_{n=1}^{\infty} a_n$收敛的充分必要条件是其部分和序列$\{S_n\}$有上界.

下面给出正项级数的几种常用审敛法:

1. 比较审敛法: 设$\{a_n\}$和$\{b_n\}$为非负数列, 且存在常数$K > 0$, 使得对于任意$n \in \mathbb{N}$, 有$a_n \leq K b_n$. 则:
- 若级数$\sum_{n=1}^{\infty} b_n$收敛, 则级数$\sum_{n=1}^{\infty} a_n$收敛.
- 若级数$\sum_{n=1}^{\infty} a_n$发散, 则级数$\sum_{n=1}^{\infty} b_n$发散.
  
2. 极限比较审敛法: 设$\{a_n\}$和$\{b_n\}$为非负数列, 且:
   $$
   \lim_{n \to \infty} \frac{a_n}{b_n} = L, \quad 0 \leq L \leq +\infty
   $$
   - 若$0 < L < +\infty$, 则级数$\sum_{n=1}^{\infty} a_n$和$\sum_{n=1}^{\infty} b_n$同敛散.
   - 若$L = 0$, 且级数$\sum_{n=1}^{\infty} b_n$收敛, 则级数$\sum_{n=1}^{\infty} a_n$收敛.
   - 若$L = +\infty$, 且级数$\sum_{n=1}^{\infty} b_n$发散, 则级数$\sum_{n=1}^{\infty} a_n$发散.

3. $p$-级数判别法: 设$\{a_n\}$为非负数列, 且$K$为常数. 则:
   - 若$a_n \leq \frac{K}{n^p}$, 且$p>1$, 则级数$\sum_{n=1}^{\infty} a_n$收敛.
   - 若$a_n \geq \frac{K}{n^p}$, 且$p \leq 1$, 则级数$\sum_{n=1}^{\infty} a_n$发散.

4. Cauchy根值判别法: 设$\{a_n\}$为非负数列, 则:
   - 若$\lim_{n \to \infty} \sqrt[n]{a_n} = L < 1$, 则级数$\sum_{n=1}^{\infty} a_n$收敛.
   - 若$\lim_{n \to \infty} \sqrt[n]{a_n} = L > 1$, 则级数$\sum_{n=1}^{\infty} a_n$发散.
   - 若$\lim_{n \to \infty} \sqrt[n]{a_n} = 1$, 则该判别法无法判断级数$\sum_{n=1}^{\infty} a_n$的敛散性.

5. D'Alembert比值判别法: 设$\{a_n\}$为非负数列, 则:
   - 若$\lim_{n \to \infty} \frac{a_{n+1}}{a_n} = L < 1$, 则级数$\sum_{n=1}^{\infty} a_n$收敛.
   - 若$\lim_{n \to \infty} \frac{a_{n+1}}{a_n} = L > 1$, 则级数$\sum_{n=1}^{\infty} a_n$发散.
   - 若$\lim_{n \to \infty} \frac{a_{n+1}}{a_n} = 1$, 则该判别法无法判断级数$\sum_{n=1}^{\infty} a_n$的敛散性.

证明: 本定理的证明需要一个引理:

**引理**: 设$\{x_n\}$为数列, 那么一定存在:
$$
\underline{\lim_{n \to \infty}} \frac{x_{n+1}}{x_n} \leq \underline{\lim_{n \to \infty}} \sqrt[n]{x_n} \leq \overline{\lim_{n \to \infty}} \sqrt[n]{x_n} \leq \overline{\lim_{n \to \infty}} \frac{x_{n+1}}{x_n}
$$

**证明**: 设$\overline{r} = \overline{\lim_{n \to \infty}} \frac{x_{n+1}}{x_n}$, 则对于任意$\epsilon > 0$, 存在$N$, 当$n > N$时, 有:
$$
\frac{x_{n+1}}{x_n} < \overline{r} + \epsilon
$$
因此, 对于任意$m > n > N$, 有:
$$
x_m = \frac{x_m}{x_{m-1}} \cdot \frac{x_{m-1}}{x_{m-2}} \cdots \frac{x_{n+1}}{x_n} x_n < (\overline{r} + \epsilon)^{m-n} x_n
$$
即:
$$
\sqrt[m]{x_m} < \sqrt[m]{(\overline{r} + \epsilon)^{m-n} x_n} = (\overline{r} + \epsilon)^{1 - \frac{n}{m}} \sqrt[m]{x_n}
$$
令$m \to \infty$, 则有:
$$
\overline{\lim_{n \to \infty}} \sqrt[n]{x_n} \leq \overline{r} + \epsilon
$$
由于$\epsilon$任意, 故有:
$$
\overline{\lim_{n \to \infty}} \sqrt[n]{x_n} \leq \overline{\lim_{n \to \infty}} \frac{x_{n+1}}{x_n}
$$

类似地, 可以证明下极限部分的不等式.

利用上述引理, 我们可以证明D'Alembert比值判别法:

**证明**: 设$\lim_{n \to \infty} \frac{a_{n+1}}{a_n} = L < 1$, 则由引理可知:
$$
\lim_{n \to \infty} \sqrt[n]{a_n} = L < 1
$$
由Cauchy根值判别法可知, 级数$\sum_{n=1}^{\infty} a_n$收敛.

同理, 若$\lim_{n \to \infty} \frac{a_{n+1}}{a_n} = L > 1$, 则由引理可知:
$$
\lim_{n \to \infty} \sqrt[n]{a_n} = L > 1
$$
由Cauchy根值判别法可知, 级数$\sum_{n=1}^{\infty} a_n$发散. 证明完毕.

6. Raabe判别法: 设$\{a_n\}$为非负数列, 则:
   - 若存在常数$r > 1$, 且对于下面这个极限表达式:
   $$
   \lim_{n \to \infty} n \left( \frac{a_n}{a_{n+1}} - 1 \right) = r 
   $$
   * 当$r > 1$时, 级数$\sum_{n=1}^{\infty} a_n$收敛.
   * 当$r < 1$时, 级数$\sum_{n=1}^{\infty} a_n$发散.
   * 当$r = 1$时, 该判别法无法判断级数$\sum_{n=1}^{\infty} a_n$的敛散性.

Raabe判别法是D'Alembert比值判别法的推广. 主要思想是对比$\frac{a_{n+1}}{a_n}$与$1 - \frac{1}{n}$的大小关系, 因为$\sum_{n=1}^{\infty} \frac{1}{n}$发散, 而$\sum_{n=1}^{\infty} \frac{1}{n^p}$在$p > 1$时收敛. 若$\frac{a_{n+1}}{a_n}$与$1 - \frac{1}{n}$的差距足够大, 则可以判断级数的敛散性.

**证明**:

先证明第一个结论: 

$$ \because r > 1, \therefore \exists s,t \in \mathbb{R}, r > s > t > 1 $$
$$ \therefore \exists N \in \mathbb{N}, \text{s.t. } \forall n > N, n\left(\frac{a_n}{a_{n+1}} - 1\right) > s $$
$$ \therefore \forall n > N, \frac{a_n}{a_{n+1}} > 1 + \frac{s}{n} $$
$$ \because 1 + \frac{s}{n} > \left(1 + \frac{1}{n}\right)^t, \therefore \forall n > N, \frac{a_n}{a_{n+1}} > \left(1 + \frac{1}{n}\right)^t = \left(\frac{n+1}{n}\right)^t $$

所以我们得到: $a_n n^t > a_{n+1} (n+1)^t$.

因此, $a_n n^t$递减, 必有上界, 设其上界为$M$, 则对于任意$n \in \mathbb{N}$, 有$a_n n^t \leq M$, 即$a_n \leq \frac{M}{n^t}$. 由于$t > 1$, 故级数$\sum_{n=1}^{\infty} a_n$收敛.

对于第二个结论:

$$ \because r < 1, \therefore \exist n > N, \text{s.t. } < 1+\frac{r}{n} < 1 + \frac{1}{n}
$$

$$
\therefore \frac{x_n}{x_{n+1}} < \frac{n+1}{n}, \quad x_n n < x_{n+1} (n+1)
$$

因此, $x_n n$递增, 故级数$\sum_{n=1}^{\infty} a_n$发散. 证明完毕.

1. 积分判别法: 设$f(x)$在$[a,+\infty)$上有定义, 且对任意$A\in (a,+\infty)$, $f(x)$在$[a,A]$上Riemann可积, 那么我们取一单增且发散的数列, 同时定义:
   $$
   \{a_n\} \quad \text{s.t.} \quad a = a_1 < a_2 < \cdots < a_n < \cdots,  \quad
   u_n = \int_{a_n}^{a_{n+1}}f(x)dx
   $$
   那么$\sum_{n=1}^{\infty} u_n$和$\int_{a}^{+\infty}f(x)dx$敛散性相同.

   特别的, 若$f(x)$单调下降, 取$a_n = n$, 那么反常积分$\int_a^{+\infty} f(x)dx$ 与正项技术$\sum_{n=N}^{\infty}, N = [a]+1$敛散性相同.

   **证明提示***: 设$S_k = \sum_{i=1}^{k} u_i$, 对下面这个式子取极限:
   $$\forall A > a, \exist n, \text{s.t.} S_{n-1} \leq \int_a^Af(x)dx < S_{n+1}$$

   本定理也可以反向证明反常积分的敛散性.

#### 任意级数的审敛法

*交错级数的审敛法*

**定义**: 设$\{a_n\}$为非负数列, 则级数$\sum_{n=1}^{\infty} (-1)^{n-1} a_n$称为**交错级数**.

1. Leibniz判别法: 设$\{a_n\}$为单调递减且趋于零的非负数列, 则交错级数$\sum_{n=1}^{\infty} (-1)^{n-1} a_n$收敛.

**证明**: 设$S_n = \sum_{k=1}^{n} (-1)^{k-1} a_k$为交错级数的部分和序列, 则对于任意$n \in \mathbb{N}$, 有:
$$
S_{2n} = (a_1 - a_2) + (a_3 - a_4) + \cdots + (a_{2n-1} - a_{2n}) \leq a_1
$$
$$
S_{2n+1} = S_{2n} + a_{2n+1} \geq S_{2n}
$$
因此, $\{S_{2n}\}$为单调递增且有上界的数列, 故存在极限$S_{2n} \to S$. 由于$\{S_{2n+1}\}$为单调递减且有下界的数列, 故存在极限$S_{2n+1} \to S'$. 由于$a_n \to 0$, 故$S' = S$. 因此, 部分和序列$\{S_n\}$收敛, 故交错级数$\sum_{n=1}^{\infty} (-1)^{n-1} a_n$收敛. 证明完毕.

2. 绝对收敛与条件收敛: 设$\sum_{n=1}^{\infty} x_n$为级数, 若级数$\sum_{n=1}^{\infty} |x_n|$收敛, 则称级数$\sum_{n=1}^{\infty} x_n$**绝对收敛**; 若级数$\sum_{n=1}^{\infty} |x_n|$发散, 但级数$\sum_{n=1}^{\infty} x_n$收敛, 则称级数$\sum_{n=1}^{\infty} x_n$**条件收敛**.

**定理**: 绝对收敛的级数必收敛.

**A-D判别法**: 若下列两个条件之一成立, 则级数$\sum_{n=1}^{\infty} x_n y_n$收敛:
1. 数列$\{x_n\}$的部分和序列$\{S_n\}$有界, 且数列$\{y_n\}$单调且趋于零.
2. 数列$\{x_n\}$单调有界, 且数列$\{y_n\}$的部分和序列$\{T_n\}$收敛.
   
   这两个条件分别称为Dirichlet判别法和Abel判别法.

证明: 先证明Abel引理, 先推出一个Abel变换公式:
$$
\sum_{k=1}^{p} a_k b_k = a_p B_p - \sum_{k=1}^{p-1} B_k (a_{k+1} - a_k)
$$

其中$B_k = \sum_{i=1}^{k} b_i$.

这个公式可以如下推出:

$$
\sum_{k=1}^{p} a_k b_k = a_1B_1 + \sum_{k=2}^{p}a_kb_k = a_1B_1 + \sum_{k=2}^p a_k (B_k-B_{k-1}) = a_1B_1 + \sum_{k=2}^p a_k B_k - \sum_{k=2}^p a_k B_{k-1}
$$
$$= a_1B_1 + \sum_{k=2}^p a_k B_k - \sum_{k=1}^{p-1} a_{k+1} B_k = a_p B_p - \sum_{k=1}^{p-1} B_k (a_{k+1} - a_k)
$$

**Abel引理**: $\{a_k\}$为单调数列, $\{B_k\}$为有界数列, 则存在常数$M > 0$, 使得$\forall p \in \mathbb{N}$:
$$
\left| \sum_{k=1}^{p} a_k b_k \right| \leq M (|a_1|+2|a_p|)
$$

**证明**: 由Abel变换公式, 有:
$$
\left| \sum_{k=1}^{p} a_k b_k \right| = \left| a_p B_p - \sum_{k=1}^{p-1} B_k (a_{k+1} - a_k) \right| \leq |a_p||B_p| + \sum_{k=1}^{p-1} |B_k| |a_{k+1} - a_k|
$$
由于$\{B_k\}$有界, 故存在常数$M > 0$, 使得对于任意$k \in \mathbb{N}$, 有$|B_k| \leq M$. 因此, 上式右端继续估计:
$$
\leq M |a_p| + M \sum_{k=1}^{p-1} |a_{k+1} - a_k| = M |a_p| + M (|a_1 - a_2| + |a_2 - a_3| + \cdots + |a_{p-1} - a_p|)
$$
$$
= M |a_p| + M (|a_1| + |a_p|) = M (|a_1| + 2 |a_p|)
$$

利用Abel引理, 我们可以证明A-D判别法. 这里不再赘述.

#### 任意项级数和更序数列

**定义**: 我们给出$x_n^+$和$x_n^-$的定义:

1. $x_n^+ = \begin{cases} x_n, & x_n > 0 \\ 0, & x_n \leq 0 \end{cases}$
2. $x_n^- = \begin{cases} -x_n, & x_n < 0 \\ 0, & x_n \geq 0 \end{cases}$

则有$x_n = x_n^+ - x_n^-$且$|x_n| = x_n^+ + x_n^-$. 由此, 我们可以将任意级数$\sum_{n=1}^{\infty} x_n$拆分为两个正项级数$\sum_{n=1}^{\infty} x_n^+$和$\sum_{n=1}^{\infty} x_n^-$.

**定理**: 级数$\sum_{n=1}^{\infty} x_n$绝对收敛的充分必要条件是级数$\sum_{n=1}^{\infty} x_n^+$和$\sum_{n=1}^{\infty} x_n^-$均收敛.

**定理**: 若级数$\sum_{n=1}^{\infty} x_n$条件收敛, 则$\{x_n^+\}$和$\{x_n^-\}$均发散到$+\infty$.

**定义**: 更序列: 设$\sum_{n=1}^{\infty} x_n$为级数, 若存在一个双射$\pi: \mathbb{N} \to \mathbb{N}$, 使得级数$\sum_{n=1}^{\infty} x_{\pi(n)}$收敛, 则称级数$\sum_{n=1}^{\infty} x_{\pi(n)}$为级数$\sum_{n=1}^{\infty} x_n$的一个**重排**.

**定理**: 设级数$\sum_{n=1}^{\infty} x_n$绝对收敛, 则对于任意重排$\sum_{n=1}^{\infty} x_{\pi(n)}$, 都有:
$$\sum_{n=1}^{\infty} x_{\pi(n)} = \sum_{n=1}^{\infty} x_n$$

**定理(Riemann重排定理)**: 设级数$\sum_{n=1}^{\infty} x_n$条件收敛, 则对于任意$S \in \mathbb{R} \cup \{+\infty, -\infty\}$, 都存在级数$\sum_{n=1}^{\infty} x_{\pi(n)}$, 使得:
$$\sum_{n=1}^{\infty} x_{\pi(n)} = S$$

本定理的证明略, 可参考相关教材.

**级数的乘法**: 设$\sum_{n=0}^{\infty} a_n$和$\sum_{n=0}^{\infty} b_n$为两个级数, 则它们的乘积定义为:
$$
\left( \sum_{n=0}^{\infty} a_n \right) \left( \sum_{n=0}^{\infty} b_n \right) = \sum_{n=0}^{\infty} c_n
$$

这一定义的本质, 就是下面这个矩阵中所有元素的和:

$$
\begin{pmatrix}
    a_1 b_1 & a_1 b_2 & a_1 b_3 & a_1 b_4 & \cdots \\
    a_2 b_1 & a_2 b_2 & a_2 b_3 & a_2 b_4 & \cdots \\
    a_3 b_1 & a_3 b_2 & a_3 b_3 & a_3 b_4 & \cdots \\
    a_4 b_1 & a_4 b_2 & a_4 b_3 & a_4 b_4 & \cdots \\
    \vdots   & \vdots   & \vdots   & \vdots   & \ddots
\end{pmatrix}
$$

我们知道, 对于两个有限部分和的乘积, 他们最终的结果与相加的次序没有关联, 那么对于无穷级数的乘积, 他们的结果是否也与相加的次序无关呢? 非常不幸, 它们的结果不一定与顺序无关. 我们需要规定一种或者几种相加的次序, 这里我们采用**对角线相加法**:

$$
\sum_{i=1}^{\infty} a_i \cdot \sum_{j=1}^{\infty} b_j = \sum_{n=2}^{\infty} \sum_{k=1}^{n-1} a_k b_{n-k} = a_1 b_1 + (a_1 b_2 + a_2 b_1) + (a_1 b_3 + a_2 b_2 + a_3 b_1) + \cdots
$$

这种乘积也叫做**Cauchy乘积**.

另一种常见的乘积方式定义如下:

$$
\sum_{i=1}^{\infty} a_i \cdot \sum_{j=1}^{\infty} b_j = \sum_{n=1}^{\infty} \left(\sum_{i=1}^{n}(a_i b_n+ a_n b_i) - a_n b_n \right)
$$

这种乘积被称为**正方形乘积**.

**定理**: 只要级数$\sum_{n=0}^{\infty} a_n$和$\sum_{n=0}^{\infty} b_n$收敛, 则他们的正方形乘积收敛.

然而Cauchy乘积并不一定满足上述的性质, 下面给出一个反例:

**反例**: 设$a_n = b_n = \frac{(-1)^{n+1}}{\sqrt{n}}$, 则级数$\sum_{n=1}^{\infty} a_n$和$\sum_{n=1}^{\infty} b_n$均收敛(根据莱布尼茨判别法). 但是他们的Cauchy乘积的一般项为:

$$
c_n = (-1)^{n+1} \sum_{i+j= n+1} \frac{1}{\sqrt{ij}} \geq (-1)^{n+1} \sum_{i+j=n+1} \frac{2}{i+j} = (-1)^{n+1} \sum_{i+j=n+1} \frac{2}{n+1} = (-1)^{n+1} n \cdot \frac{2}{n+1}
$$

由于通项不趋近于0, 必然发散.

**定理**: 设级数$\sum_{n=0}^{\infty} a_n$和$\sum_{n=0}^{\infty} b_n$绝对收敛, 则他们的Cauchy乘积和正方形乘积(甚至任意方式进行加法)均绝对收敛, 且乘积均等于:

$$
\left( \sum_{n=0}^{\infty} a_n \right) \left( \sum_{n=0}^{\infty} b_n \right) 
$$

证明: 设$a_{i_k} b_{j_k}$是所有$a_i b_j$的一个排列, 则有对任意的$n$, 取:

$$N = \max_{1 \leq k \leq n} \{i_k, j_k\}$$

$$\sum_{k=1}^n |a_{i_k} b_{j_k}| \leq \sum_{i=1}^N \sum_{j=1}^N |a_i b_j| = \left( \sum_{i=1}^N |a_i| \right) \left( \sum_{j=1}^N |b_j| \right) \leq \left( \sum_{i=1}^{\infty} |a_i| \right) \left( \sum_{j=1}^{\infty} |b_j| \right)
$$

因为$\sum_{i=1}^{\infty} |a_i|$和$\sum_{j=1}^{\infty} |b_j|$均收敛, 故存在常数$M > 0$, 使得对于任意$n \in \mathbb{N}$, 有:
$$\sum_{k=1}^n |a_{i_k} b_{j_k}| \leq M$$

所以任意排列的部分乘积序列的绝对值一定单增有上界, 必然绝对收敛. 证明完毕.

由d'Alembert比值判别法, 我们可以得到下面这个定理:

**定理**: 对任意$x \in \mathbb{R}$, 我们一定有:
$$
T = \sum_{n=0}^{\infty} \frac{x^n}{n!}
$$
这个级数$T$必然收敛. 且根据后面的知识我们可以知道, 这个级数的和就是$e^x$.

证明: 我们采用Cauchy乘积, 由于其绝对收敛, 我们可以得到:

$$
\left( \sum_{n=1}^{\infty} \frac{x^n}{n!} \right) \left( \sum_{n=1}^{\infty} \frac{y^n}{n!} \right) = \sum_{n=0}^{\infty} \sum_{k=0}^{n} \frac{x^k}{k!} \cdot \frac{y^{n-k}}{(n-k)!} = \sum_{n=0}^{\infty} \frac{(x+y)^n}{n!}
$$

也就是$f(x+y) = f(x)f(y)$, 满足这个式子的只有$f(x) = e^x$. 所以收敛.

#### 无穷乘积

**定义**: 设$\{p_n\}$为无穷可列个非零实数, 我们称他们的积:

$$
p_1 \cdot p_2 \cdot p_3 \cdots p_n \cdots = \prod_{n=1}^{\infty} p_n
$$

为无穷乘积, $p_n$称为通项, 我们可以类似的定义部分积$\{P_n\}$:

$$
P_n = p_1 \cdot p_2 \cdot p_3 \cdots p_n = \prod_{k=1}^{n} p_k
$$

若部分积数列$\{P_n\}$收敛于一个非零的有限数$P$(**也就是说如果收敛到$0$, 我们称此数列发散**), 则称无穷乘积$\prod_{n=1}^{\infty} p_n$收敛, 且其积为:
$$
\prod_{n=1}^{\infty} p_n = \lim_{n \to \infty} P_n = P
$$

否则称无穷乘积$\prod_{n=1}^{\infty} p_n$发散(包括收敛到$0$的情况).

**定理**: 无穷乘积收敛的必要条件如下:

$$\lim_{n \to \infty} p_n = 1 \quad \quad$$

$$\lim_{n\to \infty} \prod_{k=n+1}^{\infty} p_k = 1$$

这个判别法和级数和的定义类似.

证明: 我们永远可以写出这个表达式: 取极限即可.

$$
\lim_{k \to \infty} p_k = \lim_{k \to \infty}\frac{\prod_{n=1}^k p_n}{\prod_{n=1}^{k-1} p_n} =\lim_{k \to \infty} \frac{P_k}{P_{k-1}} = 1
$$

第二个必要条件的证法类似, 这里不再赘述.

**提示**: 我们经常把$p_n = 1+ a_n$, 这个表达式更利于分析问题.

显然我们可以得到:$\prod_{n=1}^{\infty} (1+a_n)$收敛的必要条件是: $\lim_{n \to \infty} a_n = 0$

例: 设$p_n = 1 - \frac{1}{(2n)^2}$, 判断无穷乘积的敛散性.

$$
P_n = \prod_{k=1}^n[1-\frac{1}{(2k)^2}] = \prod_{k=1}^n \frac{(2k-1)(2k+1)}{2k \cdot 2k} = \frac{1 \cdot 3 \cdot 3 \cdot 5 \cdots (2n-1)(2n+1)}{2 \cdot 2 \cdot 4 \cdot 4 \cdots (2n)(2n)}
$$

$$
\therefore P_n =\frac{(2n-1)!!}{(2n)!!}(2n+1)!! = \frac{2}{\pi} \frac{I_{2n}}{I_{2n+1}} 
$$

其中, $I_n = \int_0^{\frac{\pi}{2}} \sin^n x dx$, 因为$I_{2n+1} < I_{2n} <I_{2n-1}$:

$$
1 < \frac{I_{2n}}{I_{2n+1}} < \frac{I_{2n-1}}{I_{2n+1}} = \frac{2n+1}{2n}
\therefore \lim_{n \to \infty} P_n = \frac{2}{\pi}
$$

**Wallice**公式: 设$p_n = \frac{(2n)^2}{(2n-1)(2n+1)}$, 则无穷乘积:
$$
\prod_{n=1}^{\infty} \frac{(2n)^2}{(2n-1)(2n+1)} = \frac{\pi}{2}
$$
$$
\frac{2 \cdot 2 \cdot 4 \cdot 4 \cdots (2n) \cdot (2n)}{1 \cdot 3 \cdot 3 \cdot 5 \cdots (2n-1)(2n+1)} = \frac{\pi}{2}
$$

例: 设$p_n = \cos \frac{x}{2^n}$

$$
\sin x = 2 \cos \frac{x}{2} \sin \frac{x}{2} = 2^2 \cos \frac{x}{2} \cos \frac{x}{2^2} \sin \frac{x}{2^2} = \cdots = 2^n \left( \prod_{k=1}^n \cos \frac{x}{2^k} \right) \sin \frac{x}{2^n}
$$

$$
P_n = \prod_{k=1}^n \cos \frac{x}{2^k} = \frac{\sin x}{2^n \sin \frac{x}{2^n}}
$$

$$
\therefore \lim_{n \to \infty} P_n =\lim_{n \to \infty} \frac{\sin x}{2^n \sin \frac{x}{2^n}} =\lim_{n \to \infty} \frac{\sin x}{x} = 1
$$

**Viete**公式: 设$p_n = \cos \frac{\pi}{2^{n+1}}$, 对上式, 令$x = \frac{\pi}{2}$, 则无穷乘积:
$$
\prod_{n=1}^{\infty} \cos \frac{\pi}{2^{n+1}} = \frac{2}{\pi}
$$

**定理**: 设$p_n = 1 - a_n$, 且$a_n \geq 0$, 则无穷乘积$\prod_{n=1}^{\infty} p_n$收敛的充分必要条件是级数$\sum_{n=1}^{\infty} a_n$收敛. 这个转化的过程就是在无穷乘积等式两侧取对数.

**证明**: 设$P_n = \prod_{k=1}^{n} p_k$, 则有:
$$
\ln P_n = \ln \left( \prod_{k=1}^{n} p_k \right) = \sum_{k=1}^{n} \ln p_k
$$

**推论**: 设$p_n = 1 + a_n$, 且$a_n$不变号, 则无穷乘积$\prod_{n=1}^{\infty} p_n$收敛的充分必要条件是级数$\sum_{n=1}^{\infty} a_n$收敛. 本推论的证明略.

**推论**: 设$p_n = 1 + a_n$, 若$\sum_{n=1}^{\infty}a_n$收敛, 那么无穷乘积$\prod_{n=1}^{\infty} p_n$收敛的充分必要条件是$\sum_{n=1}^{\infty}a_n^2$收敛. 下面给出本推论的证明:

**证明**: 设$P_n = \prod_{k=1}^{n} p_k$, 则有:
$$
\ln P_n = \ln \left( \prod_{k=1}^{n} p_k \right) = \sum_{k=1}^{n} \ln (1 + a_k)
$$
由于$\sum_{n=1}^{\infty} a_n$收敛, 故$a_n \to 0$. 因此, 对于充分大的$n$, 有:
$$
\ln (1 + a_n) = a_n - \frac{a_n^2}{2} + o(a_n^2)
$$
因此, 当$n$充分大时, 有:
$$
\ln P_n = \sum_{k=1}^{n} \left( a_k - \frac{a_k^2}{2} + o(a_k^2) \right) = \sum_{k=1}^{n} a_k - \frac{1}{2} \sum_{k=1}^{n} a_k^2 + \sum_{k=1}^{n} o(a_k^2)
$$
由于$\sum_{n=1}^{\infty} a_n$收敛, 故$\sum_{n=1}^{\infty} o(a_n^2)$也收敛. 因此, 无穷乘积$\prod_{n=1}^{\infty} p_n$收敛的充分必要条件是级数$\sum_{n=1}^{\infty} a_n^2$收敛. 证明完毕.

**注意**: 我们要求$\sum_{k=1}^{\infty} a_n^2$收敛, 而不是$\sum_{k=1}^{\infty} a_n$收敛, 因为这样可以推出$a_n^k$均收敛, 进而保证对数级数的收敛性.

**绝对收敛**: 当级数$\sum_{n=1}^{\infty} |a_n|$收敛时, 称级数$\prod_{n=1}^{\infty} p_n$**绝对收敛**; 否则称为**条件收敛**.

绝对数列的无穷乘积具有交换性, 任意重排后的无穷乘积均收敛且等于原无穷乘积的值. 而收敛但是不绝对收敛的无穷乘积则不具有交换性, 任意重排后的无穷乘积可能收敛到不同的值, 甚至发散.

**定理**: 若$a_n > -1$, 下面三个定理等价:
- $\prod_{n=1}^{\infty} (1+a_n)$绝对收敛.
- $\prod_{n=1}^{\infty} (1+|a_n|)$收敛.
- $\sum_{n=1}^{\infty} a_n$收敛.

**Stirling公式**: 当$n \to \infty$, 有近似公式:

$$
n! \sim \sqrt{2 \pi n} \left( \frac{n}{e} \right)^n \quad n \to \infty 
$$

证明提示: 设$p_n = \frac{(n+1)! e^{n+1}}{(n+1)^{n+1} n! e^n} = \frac{e}{(1 + \frac{1}{n})^{n+1}}$


### 函数项级数

定义: 设$\{u_n(x)\}$为定义在集合$I \subseteq \mathbb{R}$上的函数序列, 则无穷和$\sum_{n=1}^{\infty} u_n(x)$称为一个**函数项级数**.

#### 函数项级数的敛散性

**点态收敛**: 设$\{u_n(x)\}$为定义在集合$I \subseteq \mathbb{R}$上的函数序列, 若对于任意$x_0 \in E \subseteq I$, 数项级数$\sum_{n=1}^{\infty} u_n(x_0)$收敛于一个极限$S(x_0)$, 则称函数项级数$\sum_{n=1}^{\infty} u_n(x)$在$E$上点态收敛于函数$S(x)$. $E$称为函数项级数的**收敛域**. 反之, 若发散, 则称为发散点. 所有发散点的集合称为函数项级数的**发散域**.

在收敛域上, 函数项级数的和是$x$的一个函数, 我们称之为**和函数**, 即为$S(x)$. 和函数是部分和函数的极限. 记$r_n(x) = S(x) - S_n(x)$为余项, 则有:

$$\lim_{n \to \infty} S_n(x) = S(x), \quad \lim_{n \to \infty}r_n(x) = 0$$

例如, 对等比级数$\sum_{n=0}^{\infty} x^n$,

- 收敛域为$(-1, 1)$
- 和函数为$S(x) = \frac{1}{1-x}$

又例如, 对于级数$\sum_{n=1}^{\infty} \frac{x^n + x^{-n}}{2}, x \neq 0$,

- 收敛域$\{-1, 1\}$
- 和函数略.

给定函数项序列的部分和$S_n(x)$, 我们可以构造出一个函数项级数$\sum_{n=1}^{\infty} u_n(x)$, 使得$S_n(x)$是这个级数的部分和. 构造方式如下:

$$
u_n(x) =
\begin{cases}
S_1(x), & n = 1,\\
S_n(x) - S_{n-1}(x), & n \ge 2.
\end{cases}
$$

所以函数项级数和函数序列部分和的敛散性是等价的. 下面我们将通过分析函数项级数的部分和$S_n(x)$来分析函数项级数的敛散性.

然而, 点态收敛用来分析敛散性是不足的. 下面提供几个例子:

1. $x + (x^2 - x) + (x^3 - x^2) + \cdots + (x^n - x^{n-1}) + \cdots$,  这个级数每项都在$[0,1]$上连续, 但是和函数$S(x)$不连续, 其和函数为:

$$
S(x) = \begin{cases}
0, & x \in [0,1) \\
1, & x = 1
\end{cases}
$$

2. $\sum_{n=1}^{\infty} \frac{\sin n^2 x}{n^2}$, 这个级数每项都可导且级数点态收敛, 但是和函数逐项求导后的结果为$\sum_{n=1}^{\infty} {\cos n^2 x}$, 这个级数在不收敛, 和函数不可导.

3. 我们讨论一个特殊函数的可积性: 

$$S_n(x) = \begin{cases}
1, & x \cdot n! \in \mathbb{Z}  \\
0, & x \cdot n! \notin \mathbb{Z}
\end{cases}, \quad x \in [0,1]
$$

但是$n \to \infty$时, $S(x)$演化成Dirichlet函数(显然, 证明略), 这个函数在$[0,1]$上不可积. 所以可积的函数项级数的和函数不一定可积.

4. $S_n(x)=nx(1-x^2)^n$, 这个级数在区间$[0,1]$上点态收敛于$0$, 但不一致收敛. 但是, 我们对部分和函数求积分:

$$
\int _0^1 S_n(x) dx = \int_0^1 nx(1-x^2)^n dx = -\frac{n}{2} \int_0^1 (1-x^2)^n d(1-x^2) = \frac{n}{2(n+1)} \to \frac{1}{2}
$$

因此, 我们必须承认, 点态收敛性在性质上是非常弱的, 不能保证和函数具有任何性质. 因此, 我们需要引入更强的收敛形式来分析函数项级数的敛散性. 这个敛散性必须保证和函数具有我们期望的性质, 比如连续性, 可微性, 可积性等. 下面我们将介绍一种更强的收敛形式: **一致收敛**.

**一致收敛**: 设$S(x)$为函数项级数$\sum_{n=1}^{\infty} u_n(x)$的和函数, 若对于任意$\epsilon > 0$, 都存在一个整数$N(\epsilon)$, 使得对于所有$n > N(\epsilon)$以及所有$x \in E$, 都有:
$$r_n(x) = |S_n(x) - S(x)| < \epsilon$$
则称函数项级数$\sum_{n=1}^{\infty} u_n(x)$在$E$上**一致收敛**于$S(x)$. 记为$S_n \rightrightarrows S$.

注意, 上式中的$N(\epsilon)$依赖于$\epsilon$, 但是**独立于$x$**. 这意味着, 当$n > N(\epsilon)$时, $S_n(x)$的图像完全位于以$S(x)$为中心、宽度为$2\epsilon$的“管子”内.

例: 研究级数在区间$[0, +\infty)$上的收敛性.

$$
S(x)=\frac{1}{(x+1)(x+2)} + \frac{1}{(x+2)(x+3)} + \cdots + \frac{1}{(x+n)(x+n+1)} + \cdots
$$

不难算出$S(x) = \frac{1}{x+1}$, 这个级数在区间$[0, +\infty)$上点态收敛于$S(x)$. 但是, 对于任意$\epsilon > 0$, 都存在$x > \frac{1}{\epsilon} - 1$, 使得对于任意$n \in \mathbb{N}$, 都有:

$$|S_n(x) - S(x)| = \frac{1}{x+n+1} < \epsilon$$

**内闭一致收敛**: 若对于$\forall [a,b] \subset E$, 都有函数项级数$\sum_{n=1}^{\infty} u_n(x)$在$[a,b]$上一致收敛于$S(x)$, 则称该级数在$E$上**内闭一致收敛**于$S(x)$.

内闭一致收敛本质上弱于一致收敛.

**下面是一致收敛的几个等价表述:**

**定理**: 设函数序列$\{S_n(x)\}$在区间$E$上点态收敛于函数$S(x)$, 定义距离为:

$$
d(S_n, S) = \sup_{x \in E} |S_n(x) - S(x)|
$$

则函数项级数$\sum_{n=1}^{\infty} u_n(x)$在$E$上**一致收敛**于$S(x)$的充分必要条件是:

$$\lim_{n \to \infty} d(S_n, S) = 0$$

**证明**:

$\Rightarrow$: 取$\forall \epsilon > 0$, 则存在$N(\epsilon)$, 使得对于任意$n > N(\epsilon)$以及所有$x \in E$, 都有:
$$|S_n(x) - S(x)| < \frac{\epsilon}{2}$$
因此, 对于任意$n > N(\epsilon)$, 都有:
$$d(S_n, S) = \sup_{x \in E} |S_n(x) - S(x)| \leq \frac{\epsilon}{2} < \epsilon$$
所以$\lim_{n \to \infty} d(S_n, S) = 0$.

*这里取$\epsilon /2$是为了让定义严格小于$\epsilon$, 以满足定义中的严格不等式.*

$\Leftarrow$: 设$\epsilon > 0$, 则存在$N(\epsilon)$, 使得对于任意$n > N(\epsilon)$, 都有:
$$d(S_n, S) = \sup_{x \in E} |S_n(x) - S(x)| < \epsilon$$
因此, 对于任意$n > N(\epsilon)$以及所有$x \in E$, 都有:
$$|S_n(x) - S(x)| \leq \sup_{x \in E} |S_n(x) - S(x)| < \epsilon$$
所以函数项级数$\sum_{n=1}^{\infty} u_n(x)$在$E$上**一致收敛**于$S(x)$. 证明完毕.

例1：$S_n(x) = x^n$ 在 $[0, 1)$ 上的收敛性

1. **逐点极限**：
   对于任意固定的 $x \in [0, 1)$，有 $\lim_{n \to \infty} x^n = 0$，即 $S(x) \equiv 0$。

2. **计算距离 $d(S_n, S)$**：
   $$d(S_n, S) = \sup_{x \in [0, 1)} |x^n - 0| = \sup_{x \in [0, 1)} x^n = 1$$

3. **结论**：
   由于 $\lim_{n \to \infty} d(S_n, S) = 1 \neq 0$，故 $x^n$ 在 $[0, 1)$ 上**不一致收敛**。

*注：这导致了极限号不可交换：*
$$ \lim_{n \to \infty} \lim_{x \to 1^-} x^n = \lim_{n \to \infty} 1 = 1 $$
$$ \lim_{x \to 1^-} \lim_{n \to \infty} x^n = \lim_{x \to 1^-} 0 = 0 $$

例2: 设$S_n(x) = (1-x)x^n, \quad x \in [0,1]$

**逐点极限**：对于任意固定的 $x \in [0, 1)$，有 $\lim_{n \to \infty} (1-x)x^n = 0$，即 $S(x) \equiv 0$。

但是在说明一致连续性的时候, 我们不能像刚才的例子一样去找到特殊点证伪这个问题. 我们必须放缩到极大值.

对$S_n(x)$求导:

$$
S_n'(x) = -x^n + n(1-x)x^{n-1} = x^{n-1}(-x + n(1-x)) = x^{n-1}(n - (n+1)x)
$$
因此, $S_n(x)$在$x = \frac{n}{n+1}$处取得极大值, 这个极大值为:
$$S_n\left( \frac{n}{n+1} \right) = (1-\frac{n}{n+1})\left( \frac{n}{n+1} \right)^n = \frac{1}{n+1} \left( \frac{n}{n+1} \right)^n$$

所以

$$
d(S_n, S) = \sup_{x \in [0,1]} |S_n(x) - S(x)| = \sup_{x \in [0,1]} |S_n(x)| = S_n\left( \frac{n}{n+1} \right) = \frac{1}{n+1} \left( \frac{n}{n+1} \right)^n
$$

又因为:

$$
\lim_{n \to \infty} S_n\left( \frac{n}{n+1} \right) = \lim_{n \to \infty} \frac{1}{n+1} \left( 1 - \frac{1}{n+1} \right)^n = \lim_{n \to \infty} \frac{1}{n+1} e^{-1} = 0
$$

因此, 函数列一致收敛于$0$.

例3: 设$S_n(x) = (1+\frac{x}{n})^n$, 试证$S_n(x)$在$[0,t]$上一致收敛于$e^x$. $t>0$.

**逐点极限**：对于任意固定的 $x \in [0, t]$，有 $\lim_{n \to \infty} (1+\frac{x}{n})^n = e^x$，即 $S(x) = e^x$.

**计算距离 $d(S_n, S)$**：
$$
d(S_n, S) = \sup_{x \in [0,t]} |S_n(x) - e^x|
$$

$$
|S_n(x) - e^x| = \left| \left(1+\frac{x}{n}\right)^n - e^x \right| = e^x \left| e^{-x} \left( 1+\frac{x}{n}\right)^n  - 1 \right| = e^x \left( 1 - e^{-x}\left( 1+\frac{x}{n}\right)^n \right)
$$

所以我们只需要讨论:

$$
\phi (x) = - e^{-x} \left( 1+\frac{x}{n}\right)^n, \quad \phi ' (x) = e^{-x} \left( 1+\frac{x}{n}\right)^{n-1} \frac{x}{n} \leq 0
$$

所以, $|S_n(x) - e^x|$在$[0,t]$上单调递增, 因此最大值出现在$x = t$处, 即:
$$d(S_n, S) = |S_n(t) - e^t| = e^t \left( 1 - e^{-t}\left( 1+\frac{t}{n}\right)^n \right)$$

由于:

$$
\lim_{n \to \infty} e^{-t}\left( 1+\frac{t}{n}\right)^n = e^{-t} e^t = 1
$$

因此, $\lim_{n \to \infty} d(S_n, S) = 0$, 函数列在$[0,t]$上一致收敛于$e^x$.

**定理**: 设函数序列$\{S_n(x)\}$ 在区间 $E$ 上点态收敛于函数 $S(x)$, 则$\{S_n(x)\}$ 在 $E$ 上一致收敛于 $S(x)$ 的充分必要条件是: 对任意数列 $\{a_n\} \subset E$ , 都有:

$$\lim_{n \to \infty} S_n(a_n) = S(a_n)$$

**证明**:

$\Leftarrow$: 设$\epsilon > 0$, 则存在$N(\epsilon)$, 使得对于任意$n > N(\epsilon)$以及所有$x \in E$, 都有:
$$\sup_{x \in E} |S_n(x) - S(x)| < \epsilon$$
因此, 对于任意数列$\{a_n\} \subset E$, 都有:
$$|S_n(a_n) - S(a_n)| \leq \sup_{x \in E} |S_n(x) - S(x)| < \epsilon$$

$\Rightarrow$: 运用反证法, 假设对于任意数列的结论仍成立, 但是函数序列$\{S_n(x)\}$在$E$上不一致收敛于$S(x)$, 则存在$\epsilon > 0$, 使得对于任意$N \in \mathbb{N}$, 都存在$n > N$以及$x_0 \in E$, 使得:
$$|S_n(x_0) - S(x_0)| \geq \epsilon$$

那么我们可以构造出一个数列$\{a_n\} \subset E$, 使得对于任意$n \in \mathbb{N}$, 都有:
$$|S_n(a_n) - S(a_n)| \geq \epsilon$$

下面是这个数列的构造方式:

1. 先取$N=1$, 则存在$n_1 > 1$以及$x_1 \in E$, 使得$|S_{n_1}(x_1) - S(x_1)| \geq \epsilon$. 取$a_1 = x_1$.

2. 再取$N=n_1$, 则存在$n_2 > n_1$以及$x_2 \in E$, 使得$|S_{n_2}(x_2) - S(x_2)| \geq \epsilon$. 取$a_2 = x_2$.

3. 依此类推, 对于任意$k \in \mathbb{N}$, 取$N = n_{k-1}$, 则存在$n_k > n_{k-1}$以及$x_k \in E$, 使得$|S_{n_k}(x_k) - S(x_k)| \geq \epsilon$. 取$a_k = x_k$.

这样就构造出了一个子列$\{a_n\} \subset E$, 由于子列不收敛, 数列一定也不收敛, 这就产生了矛盾. 因此函数序列$\{S_n(x)\}$在$E$上**一致收敛**于$S(x)$. 证明完毕.

本定理用于证伪一致收敛较为方便.

例1: 设$S_n(x) = nx(1-x^2)^n$, 试证$S_n(x)$在$[0,1]$上不一致收敛于$0$.

取$x_n = \frac{1}{n}$, 则对于任意$n \in \mathbb{N}$, 都有:
$$|S_n(x_n) - 0| = S_n\left( \frac{1}{n} \right) = n \cdot \frac{1}{n} \left( 1 - \frac{1}{n^2} \right)^n = \left( 1 - \frac{1}{n^2} \right)^n$$

$$\lim_{n \to \infty} S_n\left( \frac{1}{n} \right) = \lim_{n \to \infty} \left( 1 - \frac{1}{n^2} \right)^n = e^0 = 1$$

例2: 设$S_n(x) = (1+\frac{x}{n})^n$, 试证$S_n(x)$在$[0,+\infty)$上不一致收敛于$e^x$.

取$x_n = n$, 则对于任意$n \in \mathbb{N}$, 都有:
$$|S_n(x_n) - e^{x_n}| = \left| \left(1+\frac{n}{n}\right)^n - e^n \right| = \left| 2^n - e^n \right|$$
$$\lim_{n \to \infty} |S_n(x_n) - e^{x_n}| = \lim_{n \to \infty} |2^n - e^n| = +\infty$$
所以, 函数列在$[0,+\infty)$上不一致收敛于$e^x$.

*需要注意, 一致收敛性本质上就是在控制速度, 让各点以一致的速度收敛. 内闭一致收敛则是控制在任意紧子集上以一致的速度收敛.*

#### 一致收敛的判别法

**Cauchy收敛准则**: 设函数序列$\{S_n(x)\}$在区间$E$上点态收敛于函数$S(x)$, 则$\{S_n(x)\}$在$E$上**一致收敛**于$S(x)$的充分必要条件是: 对任意$\epsilon > 0$, 都存在$N \in \mathbb{N}$, 使得对于任意$n > N, p \in \mathbb{N}$以及所有$x \in E$, 都有:
$$|S_n(x) - S_{n+p}(x)| < \epsilon, \quad \sum_{i=n}^{n+p} u_i(x) < \epsilon$$

**好吧怎么什么极限形式都有Cauchy准则, Cauchy你真是赢麻了.**

注意$N$只依赖于$\epsilon$, 而不依赖于$x$. Cauchy收敛准则的直接推论是:

$$
\forall i, u_i(x) < \epsilon
$$

这意味着, 一致收敛的函数项级数必须一致收敛于$0$. 但是, 反过来, 每一项趋于$0$并不能保证一致收敛. 例如, $S_n(x) = nx(1-x^2)^n$在$[0,1]$上每一项都趋于$0$, 但是不一致收敛. 我们一般用这个定理来证伪一致收敛.

**Weierstrass判别法**: 设函数项级数$\sum_{n=1}^{\infty} u_n(x)$在区间$D$上每一项都满足:

$$
\left| u_n(x) \right| \leq a_n, \quad \forall x \in D
$$

并且数项级数$\sum_{n=1}^{\infty} a_n$收敛, 则函数项级数$\sum_{n=1}^{\infty} u_n(x)$在$D$上一致收敛.

证明: 设$S_n(x) = \sum_{i=1}^n u_i(x)$, 则对于任意$n > N$以及所有$x \in D$, 都有:

$$|S_n(x) - S_N(x)| = \left| \sum_{i=N+1}^n u_i(x) \right| \leq \sum_{i=N+1}^n |u_i(x)| \leq \sum_{i=N+1}^n a_i$$

由于数项级数$\sum_{n=1}^{\infty} a_n$收敛, 根据Cauchy收敛准则, 对任意$\epsilon > 0$, 都存在$N \in \mathbb{N}$, 使得对于任意$n > N$, 都有:
$$\sum_{i=N+1}^n a_i < \epsilon$$
因此, 对于任意$n > N$以及所有$x \in D$, 都有:
$$|S_n(x) - S_N(x)| < \epsilon$$
所以, 函数项级数$\sum_{n=1}^{\infty} u_n(x)$在$D$上一致收敛. 证明完毕.

除了上面这些判别法之外, 函数项级数和数项级数一样, 也具有Dirichlet判别法, Abel判别法. 我们下面给出他们的表述:

**A-D判别法**: 设函数项级数$\sum_{n=1}^{\infty} a_n(x) b_n(x)$满足下面两个条件之一, 则函数项级数$\sum_{n=1}^{\infty} a_n(x) b_n(x)$在$D$上一致收敛.

1. **Abel判别法**: 
- 数列$\{a_n(x)\}$在$D$上单调且有界, 即存在$M > 0$, 使得对于任意$n \in \mathbb{N}$以及所有$x \in D$, 都有$|a_n(x)| \leq M$.
- 数项级数$\sum_{n=1}^{\infty} b_n(x)$在$D$上一致收敛.
2. **Dirichlet判别法**:
- 数列$\{a_n(x)\}$在$D$上单调且趋于$0$, 即对于任意$n \in \mathbb{N}$以及所有$x \in D$, 都有$|a_n(x)| \leq M$以及$\lim_{n \to \infty} a_n(x) = 0$.
- 数项级数$\sum_{n=1}^{\infty} b_n(x)$在$D$上**一致有界**, 即存在$M > 0$, 使得对于任意$n \in \mathbb{N}$以及所有$x \in D$, 都有:
$$\left| \sum_{i=1}^n b_i(x) \right| \leq M$$

对$A-D$判别法的证明同样需要借助Abel引理, 我们在数项级数的部分已经介绍过Abel引理, 这里不再赘述.

#### 一致收敛级数的性质

一致收敛的函数项级数具有一些非常重要的性质, 这些性质使得我们可以在分析函数项级数的敛散性时, 通过分析和函数来分析级数的敛散性. 下面我们将介绍这些性质.

总的来说, 一致收敛级数的性质总体来说可以用一句话来概括: **无穷级数的某种运算等于某种运算后的无穷级数**. 下面我们将介绍这些性质.

**定理 (连续性)**: 设函数项级数$\sum_{n=1}^{\infty} u_n(x)$在区间$E$上每一项都连续, 并且级数在$E$上一致收敛于函数$S(x)$, 则和函数$S(x)$在$E$上也是连续的.

本定理也可以表述为**极限交换**的形式:
$$
\lim_{x \to x_0} \sum_{n=1}^{\infty} u_n(x) = \sum_{n=1}^{\infty} \lim_{x \to x_0} u_n(x)
$$

*证明* :   
由于$|S_n(x)|$在$[a,b]$上一致收敛于$S(x)$, 那么对于任意给定的$\epsilon > 0$, 都存在$N \in \mathbb{N}$, 使得对于任意$n > N$以及所有$x \in [a,b]$, 都有:
$$|S_n(x) - S(x)| < \epsilon$$

我们特别选定$x = x_0$, 则对于任意$n > N$, 都有:
$$|S_n(x_0) - S(x_0)| < \epsilon$$

同理, 对于任意$h>0$, 都有:
$$|S_n(x_0 + h) - S(x_0 + h)| < \epsilon$$

$S_n(x)$是连续的, 因此对于任意$\epsilon > 0$, 都存在$\delta > 0$, 使得对于任意$|h| < \delta$, 都有:
$$|S_n(x_0 + h) - S_n(x_0)| < \epsilon$$

因此, 对于任意$|h| < \delta$, 都有:
$$|S(x_0 + h) - S(x_0)| \leq |S(x_0 + h) - S_n(x_0 + h)| + |S_n(x_0 + h) - S_n(x_0)| + |S_n(x_0) - S(x_0)| < 3\epsilon$$

因此, $\lim_{h \to 0} S(x_0 + h) = S(x_0)$, 即$S(x)$在$x_0$处连续. 由于$x_0$是任意的, $S(x)$在$E$上连续. 证明完毕.

**定理 (逐项积分)**: 设函数项级数$\sum_{n=1}^{\infty} u_n(x)$在区间$[a,b]$上每一项都连续, 并且级数在$[a,b]$上一致收敛于函数$S(x)$, 则有:
$$\int_a^b S(x) \, dx = \sum_{n=1}^{\infty} \int_a^b u_n(x) \, dx$$

要证明这个定理, 我们实际上只需要证明:

$$
\int_a^b S(x) \, dx = \lim_{n \to \infty} \int_a^b S_n(x) \, dx
$$

*证明* :
由于$S_n(x)$在$[a,b]$上一致收敛于$S(x)$, 那么对于任意$\epsilon > 0$, 都存在$N \in \mathbb{N}$, 使得对于任意$n > N$以及所有$x \in [a,b]$, 都有:
$$|S_n(x) - S(x)| < \epsilon$$

我们直接计算积分的差值:

$$
\left| \int_a^b S(x) \, dx - \int_a^b S_n(x) \, dx \right| = \left| \int_a^b (S(x) - S_n(x)) \, dx \right| \leq \int_a^b |S(x) - S_n(x)| \, dx < (b-a)\epsilon
$$

因此, $\lim_{n \to \infty} \int_a^b S_n(x) \, dx = \int_a^b S(x) \, dx$. 证明完毕.

**定理 (逐项求导)**: 设函数项级数$\sum_{n=1}^{\infty} u_n(x)$满足下述三个条件:
- 数列$\{u_n(x)\}$在区间$[a,b]$上每一项都可导且导函数连续.
- 数项级数$\sum_{n=1}^{\infty} u_n(x)$在$[a,b]$上点态收敛于函数$S(x)$.
- 导数级数$\sum_{n=1}^{\infty} u_n'(x)$在$[a,b]$上一致收敛于函数$T(x)$.
则函数项级数$\sum_{n=1}^{\infty} u_n(x)$在$[a,b]$上一致收敛于一个可导函数$S(x)$, 并且:
$$S'(x) = \left( \sum_{n=1}^{\infty} u_n(x) \right)' = \sum_{n=1}^{\infty} u_n'(x)$$

类似的, 我们在证明的时候采用$S_n(x)$的形式, 证明$S_n'(x)$在$[a,b]$上一致收敛于$T(x)$.

*证明* :
由条件3, 我们可以知道导函数级数满足
$$
\sum_{n=1}^{\infty} u_n'(x)
$$
在$[a,b]$上一致收敛于$T(x)$. 根据逐项积分定理, 对于任意$x \in [a,b]$, 都有:
$$
\int_a^x T(t) \, dt = \int_a^x \sum_{n=1}^{\infty} u_n'(t) \, dt = \sum_{n=1}^{\infty} \int_a^x u_n'(t) \, dt = \sum_{n=1}^{\infty} (u_n(x) - u_n(a)) = S(x) - S(a)
$$

两侧对$x$求导, 则有:
$$
T(x) = S'(x)
$$
因此, $S(x)$在$[a,b]$上可导, 并且$S'(x) = T(x)$. 证明完毕.

最后的最后, 我们再提供一个定理, 这个定理是上面定理的一个推广, 这个定理的证明同样需要借助逐项积分定理.

**Dini定理**: 设函数项级数$\sum_{n=1}^{\infty} S_n(x)$点态收敛于$S(x)$, 如果级数满足下面三个条件:
- 数列$\{S_n(x)\}$在区间$[a,b]$上每一项都连续.
- $S(x)$在$[a,b]$上连续.
- 数列$\{S_n(x)\}$关于$n$单调.
则函数项级数$\sum_{n=1}^{\infty} S_n(x)$在$[a,b]$上一致收敛于$S(x)$.

证明无需掌握, 这里略而不谈.

### 幂级数

在级数这部分的最后, 我们将介绍一个特殊的函数项级数: **幂级数**. 幂级数在数学分析中具有非常重要的地位, 因为它们具有优良的性质, 在很多情况下, 我们可以利用幂级数来进行合理的近似, 而且因为幂函数的表达形式总是比较简单的, 因此我们可以通过分析幂级数的敛散性来分析函数的性质. 下面我们将介绍幂级数的定义以及幂级数的敛散性.

**定义**: 设$\{a_n\}$是一个数列, 则幂级数$\sum_{n=0}^{\infty} a_n (x - x_0)^n$是一个函数项级数, 其中$x$是变量, $x_0$是常数. 当$x_0 = 0$时, 幂级数可以简化为$\sum_{n=0}^{\infty} a_n x^n$. 在分析幂级数的敛散性的时候, 我们通常会将$x_0$取为$0$, 因此我们在后续的分析中, 都默认幂级数的形式为$\sum_{n=0}^{\infty} a_n x^n$.

幂级数有一个极为重要的特征, 即幂级数的敛散性可以用区间表征, 换言之, 我们可以用收敛半径来表征幂级数的敛散性. 下面我们将介绍幂级数的收敛半径以及幂级数的敛散性.

**收敛半径**: 设幂级数$\sum_{n=0}^{\infty} a_n x^n$的收敛半径为$R$, 则对于任意$|x| < R$, 幂级数$\sum_{n=0}^{\infty} a_n x^n$在$(-R,R)$上**一致收敛**于一个函数$S(x)$, 对于任意$|x| > R$, 幂级数$\sum_{n=0}^{\infty} a_n x^n$在$(-\infty, -R) \cup (R, +\infty)$上**发散**.

## Euclid 空间上的极限和连续

本部分我们会简单涉及一些拓扑学的内容, 并完成从一元微积分学到多元微积分学的过渡. 我们从此开始转向研究多元函数的分析性质.

### Euclid空间

让我们首先回顾一下一元函数的**极限**定义:

**定义**: 设函数$f(x)$定义在$E$的某个邻域内, $x_0$是$E$的一个内点. 如果对于任意$\epsilon > 0$, 存在$\delta > 0$, 使得对于所有$x \in E$且$0 < |x - x_0| < \delta$, 都有$|f(x) - A| < \epsilon$, 则称函数$f(x)$在$x_0$处的极限为$A$, 记为$\lim_{x\to x_0} f(x) = A$.

整个定义的关键在于$|x - x_0| < \delta$这个条件. 这个条件**刻画了$x$与$x_0$之间的距离**, 从而保证了函数$f(x)$在$x$附近的行为. 但是当我们转向研究多元函数时, 我们需要一个新的工具来刻画点与点之间的距离, 换言之, 我们需要重新定义距离. 这是我们定义空间时最重要的任务.

但是在此之前, 让我们用公理化的语言重新定义一下空间:

**定义**: 记$R$是实数全体, 定义$n$个$R$的Descartes积
$$R^n = R \times R \times \cdots \times R = \{(x_1, x_2, \ldots, x_n) : x_i \in R, i = 1, 2, \ldots, n\}$$

其中$R$出现$n$次. 对于$R^n$中的每个元素我们都称之为**点**或者**向量**, $x_i$称为点$(x_1, x_2, \ldots, x_n)$的第$i$个**坐标**. 特别的, 我们定义$R^n$中的点$(0, 0, \ldots, 0)$为**零向量**.

特别的, 如果我们为$R^n$中的点定义如下的加法和数乘运算:
- 加法: 对于任意$x = (x_1, x_2, \cdots, x_n), y = (y_1, y_2, \cdots, y_n) \in R^n$, 定义$x + y = (x_1 + y_1, x_2 + y_2, \cdots, x_n + y_n)$.
- 数乘: 对于任意$x = (x_1, x_2, \cdots, x_n) \in R^n$和任意$\lambda \in R$, 定义$\lambda x = (\lambda x_1, \lambda x_2, \cdots, \lambda x_n)$.

此时的$R^n$就被称作**向量空间**, 也是一个常见的**线性空间**.

如果我们再在$R^n$中定义**内积**运算, 即:

$$\langle x, y \rangle = x_1 y_1 + x_2 y_2 + \cdots + x_n y_n = \sum_{i=1}^n x_i y_i$$

内积运算显然具有以下四条性质 (我们理应在线性代数课程中学习过并完成过证明):
- 正定性: 对于任意$x \in R^n$, 都有$\langle x, x \rangle \geq 0$, 且当且仅当$x$是零向量时, $\langle x, x \rangle = 0$.
- 对称性: 对于任意$x, y \in R^n$, 都有$\langle x, y \rangle = \langle y, x \rangle$.
- 线性性: 对于任意$x, y, z \in R^n$和任意$\lambda \in R$, 都有$\langle x + y, z \rangle = \langle x, z \rangle + \langle y, z \rangle$和$\langle \lambda x, y \rangle = \lambda \langle x, y \rangle$.
- Cauchy-Schwarz不等式: 对于任意$x, y \in R^n$, 都有$|\langle x, y \rangle| \leq \sqrt{\langle x, x \rangle} \cdot \sqrt{\langle y, y \rangle}$

**定义**: 配备了内积运算和向量空间结构的$R^n$就被称作**Euclid空间**.

下面, 我们不妨思考一下距离应该具有什么性质:
- 非负性: 对于任意$x, y \in R^n$, 都有$d(x, y) \geq 0$, 且当且仅当$x = y$时, $d(x, y) = 0$
- 对称性: 对于任意$x, y \in R^n$, 都有$d(x, y) = d(y, x)$.
- 三角不等式: 对于任意$x, y, z \in R^n$, 都有$d(x, z) \leq d(x, y) + d(y, z)$. 这条是由平面三角形的基本性质决定的, 我们决定在更高维度上延续它.

我们可以很容易的发现, 距离应该具有的朴素性质, 和内积运算的朴素性质不谋而合, 因此我们可以通过内积运算来定义距离.

**定义**(范数): 设$x \in R^n$, 定义$x$的范数为:
$$\|x\| = \sqrt{\langle x, x \rangle} = \sqrt{x_1^2 + x_2^2 + \cdots + x_n^2}$$

**定义**(距离): 设$x, y \in R^n$, 定义$x$与$y$之间的距离为:
$$d(x, y) = \sqrt{\langle x - y, x - y \rangle} = \sqrt{(x_1 - y_1)^2 + (x_2 - y_2)^2 + \cdots + (x_n - y_n)^2}$$

实际上, **距离**就是**范数**的推广. 也就是说, 距离是定义在两个点之间的函数, 而范数是定义在一个点上的函数. 当然, 距离和范数之间有着密切的联系, 因为距离可以通过范数来定义, 即$d(x, y) = \|x - y\|$.

自然, 范数和距离都具有我们之前提到的那些朴素性质. 这里不再赘述.

#### Euclid空间的性质

现在我们已经充分良好的定义了一个空间和配备在这个空间上的诸多良好性质, 我们就可以开始研究定义在这个空间上的函数了. 当然, 这里我们主要关注的是**多元函数**, 因为一元函数的分析性质我们已经非常熟悉了.

然而, 为了更好的给出多元函数的极限的定义, 我们首先需要对我们刚刚认识的这个空间构建一些了解. 最浅层次的, 我们需要知道一元函数中涉及到的各种事物存不存在一个双射到多元函数中. 例如, 在一元函数中, 我们有数列、极限、连续性、可微性等概念. 那么在多元函数中, 这些概念是否存在? 如果存在, 那么它们的定义是什么? 下面我们将逐一介绍这些概念.

**定义**: 多元函数是指定义在$R^n$上的函数, 即$f: R^n \to R$. 其中$n$被称为函数的**变量个数**或者**维数**. 我们可以把多元函数写作:
$$f(x_1, x_2, \cdots, x_n)$$

至此, 我们完成了从一元函数到多元函数的过渡. 下面我们将继续研究多元函数的分析性质, 包括极限、连续性、可微性等. 这里我们先从极限开始. 我们依旧遵从之前的思路, 先定义数列的极限, 然后再定义函数的极限. 这里我们先介绍数列的极限.

**定义**(数列极限): 设$\{x_n\}$是$R^n$中的一个数列, 如果存在$x_0 \in R^n$, 使得对于任意$\epsilon > 0$, 存在$N \in \mathbb{N}^*$, 使得对于所有$n > N$, 都有$d(x_n, x_0) < \epsilon$, 则称数列$\{x_n\}$收敛于$x_0$, 记为$\lim_{n\to\infty} x_n = x_0$, 反之则称数列$\{x_n\}$发散.

显然, 或者说近乎直观的, 我们可以得到下面这个定理:

**定理**: 设$\{x_n\}$是$R^n$中的一个数列, 则数列$\{x_n\}$收敛于$x_0$当且仅当对于任意$i = 1, 2, \cdots, n$, 数列$\{x_{n,i}\}$收敛于$x_{0,i}$, 其中$x_{n,i}$和$x_{0,i}$分别是数列$\{x_n\}$和点$x_0$的第$i$个坐标.

下面我们将讨论一些拓扑学的概念, 以便更好的理解多元函数的极限和连续性等分析性质. 这里我们先介绍**开集**和**闭集**的概念. 我们可以把它们看作是**开区间**和**闭区间**在多元函数中的推广.

空间中的点无非可以分成三种:
- 内点: 如果点$x$存在一个邻域$U$, 使得$U$中的所有点都属于集合$E$, 则称$x$是集合$E$的一个内点.
- 边界点: 如果点$x$任意一个邻域$U$, 都存在$U$中的点属于集合$E$, 也存在$U$中的点不属于集合$E$, 则称$x$是集合$E$的一个边界点.
- 外点: 如果点$x$存在一个邻域$U$, 使得$U$中的所有点都不属于集合$E$, 则称$x$是集合$E$的一个外点.

但是为了描述集合的边界问题, 我们还需要定义**聚点**的概念. 设$E$是$R^n$中的一个集合, 如果点$x$的任意一个邻域$U$, 都存在$U$中的点属于集合$E$, 则称$x$是集合$E$的一个聚点.

至此, 我们可以定义**开集**和**闭集**了:
- 开集: 如果集合$E$中的每个点都是集合$E$的一个内点, 则称集合$E$是一个开集.
- 闭集: 如果集合$E$包含了集合$E$的所有聚点, 则称集合$E$是一个闭集.

而$S$与它的全部聚点集合$S'$的并集$S \cup S'$被称为集合$S$的**闭包**.

**定理**: $R^n$中的点集$S$是一个闭集当且仅当$R^n \setminus S$是一个开集.

**定理**(De' Morgan定律): 设$A$和$B$是$R^n$中的两个集合, 则有下面的等式成立:
$$\begin{aligned}
&\text{(1) } R^n \setminus (A \cup B) = (R^n \setminus A) \cap (R^n \setminus B) \\
&\text{(2) } R^n \setminus (A \cap B) = (R^n \setminus A) \cup (R^n \setminus B)
\end{aligned}$$

当然这个定理也可以扩展到任意多个集合的情况:
$$\begin{aligned}&\text{(1) } R^n \setminus \left( \bigcup_{i=1}^m A_i \right) = \bigcap_{i=1}^m (R^n \setminus A_i) \\
&\text{(2) } R^n \setminus \left( \bigcap_{i=1}^m A_i \right) = \bigcup_{i=1}^m (R^n \setminus A_i)
\end{aligned}$$

#### Euclid空间的基本定理

本部分涉及的定理将更多局限在$R^2$中, 以便更好的说明问题. 当然, 这些定理也可以推广到更高维度的空间中.

**闭矩形套定理**

**定理**: 设$\Delta_k = [a_k, b_k] \times [c_k, d_k]$是$R^2$中的一个闭矩形, 其中$a_k < b_k$且$c_k < d_k$. 如果$\Delta_1 \supset \Delta_2 \supset \cdots \supset \Delta_k \supset \cdots$, 且满足:

$$
\lim_{k\to\infty} \sqrt{(b_k - a_k)^2 + (d_k - c_k)^2} = 0
$$

则存在唯一的点$(x_0, y_0)$使得$\bigcap_{k=1}^{\infty} \Delta_k = \{(x_0, y_0)\}$. 且:
$$\begin{aligned}
&\lim_{k\to\infty} a_k = \lim_{k\to\infty} b_k = x_0 \\
&\lim_{k\to\infty} c_k = \lim_{k\to\infty} d_k = y_0
\end{aligned}$$

**证明思路**: 只需要对于两个方向分别运用闭区间套定理即可. 这里从略.

同理我们也可以得到**Cantor闭区域套定理**. 这里我们不再赘述.

**Bolzano-Weierstrass定理**

在正式阐述Bolzano-Weierstrass定理之前, 我们需要定义一下什么是有界性:

**定义**: 设$E$是$R^n$中的一个集合, 如果存在一个实数$M > 0$, 使得对于任意$x \in E$, 都有$\|x\| < M$, 则称集合$E$是一个有界集.

**定理**(Bolzano-Weierstrass定理): 设$\{x_n\}$是$R^n$中的一个数列, 如果数列$\{x_n\}$是有界的, 则数列$\{x_n\}$存在一个收敛的子数列.

**证明思路**: 先在第一个坐标上利用Bolzano-Weierstrass定理找到一个收敛的子数列, 然后在第二个坐标上利用Bolzano-Weierstrass定理找到一个收敛的子数列, 以此类推, 最后得到一个收敛的子数列. 这里从略. 换言之, 这是一个递归的过程, 每次递归都在一个坐标上进行, 最后得到一个收敛的子数列. 这里的思路非常清晰.

**Cauchy收敛准则**

**定理**(Cauchy收敛准则): 设$\{x_n\}$是$R^n$中的一个数列, 则数列$\{x_n\}$收敛当且仅当对于任意$\epsilon > 0$, 存在$N \in \mathbb{N}^*$, 使得对于所有$m, n > N$, 都有$d(x_m, x_n) < \epsilon$.

**证明**: 设数列$\{x_n\}$收敛于$x_0$, 则对于任意$\epsilon > 0$, 存在$N \in \mathbb{N}^*$, 使得对于所有$n > N$, 都有$d(x_n, x_0) < \frac{\epsilon}{2}$. 因此, 对于任意$m, n > N$, 都有:
$$d(x_m, x_n) \leq d(x_m, x_0) + d(x_0, x_n) < \frac{\epsilon}{2} + \frac{\epsilon}{2} = \epsilon$$

反之, 设对于任意$\epsilon > 0$, 存在$N \in \mathbb{N}^*$, 使得对于所有$m, n > N$, 都有$d(x_m, x_n) < \epsilon$. 则数列$\{x_n\}$是有界的. 根据Bolzano-Weierstrass定理, 数列$\{x_n\}$存在一个收敛的子数列$\{x_{n_k}\}$, 设数列$\{x_{n_k}\}$收敛于$x_0$. 则对于任意$\epsilon > 0$, 存在$K \in \mathbb{N}^*$, 使得对于所有$k > K$, 都有$d(x_{n_k}, x_0) < \frac{\epsilon}{2}$. 因此, 对于任意$n > N$和任意$k > K$, 都有:
$$d(x_n, x_0) \leq d(x_n, x_{n_k}) + d(x_{n_k}, x_0) < \frac{\epsilon}{2} + \frac{\epsilon}{2} = \epsilon$$

其实本定理的证明和一元函数中的Cauchy收敛准则的证明是完全一样的, 只是我们需要把绝对值替换成距离. 这里的思路非常清晰.

**Heine-Borel定理**

我们首先定义什么是开覆盖:

**定义**: 设$E$是$R^n$中的一个集合, 如果对于任意$\alpha \in A$, $G_\alpha$都是$R^n$中的一个开集, 且满足$E \subset \bigcup_{\alpha \in A} G_\alpha$, 则称集合$\{G_\alpha\}_{\alpha \in A}$是集合$E$的一个开覆盖.

我们首先给出紧集的开覆盖定义:

**定义**: 设$E$是$R^n$中的一个集合, 如果对于任意$E$的开覆盖$\{G_\alpha\}_{\alpha \in A}$, 都存在有限个开集$G_{\alpha_1}, G_{\alpha_2}, \cdots, G_{\alpha_m}$使得$E \subset G_{\alpha_1} \cup G_{\alpha_2} \cup \cdots \cup G_{\alpha_m}$, 则称集合$E$是一个紧集.

**定理**(Heine-Borel定理): 设$E$是$R^n$中的一个集合, 则集合$E$是一个紧集当且仅当集合$E$是一个有界闭集.

**注意**: 本定理只在$R^n$中成立, 更一般的说, 本定理只在有限维赋范空间中成立. 在无限维赋范空间中, 紧集的定义和性质都发生了很大的变化, 这里我们不再赘述. 我们只给出反例: 在无限维赋范空间中, 闭球是一个有界闭集, 但是它不是一个紧集.

下面给出$n=2$时本定理的证明. 需要注意本定理的证明相对复杂.

**证明**:

1. 必要性
   - 有界
     设$S$为紧集, 显然$\{O(0,1)\subset R^2| x\in S\}$是$S$的一个开覆盖, 因此存在有限个开集$O(0,1), O(x_1,1), \cdots, O(x_m,1)$使得$S \subset O(0,1) \cup O(x_1,1) \cup \cdots \cup O(x_m,1)$. 因此, 可以得到$S \subset O(0,1) \cup O(x_1,1) \cup \cdots \cup O(x_m,1) \subset O(0,M)$, 其中$M = 2\max\{\|x_1\|, \|x_2\|, \cdots, \|x_m\|\} + 1$. 因此, 集合$S$是有界的.
   - 闭集
     运用反证法, 我们假设存在$a \in \overline{S} \setminus S$, 即$a$是$S$的聚点但不在$S$中. 我们构造开集:
     $$G_n = \{x \in R^2 : \|x - a\| > \frac{1}{n}\}, n = 1, 2, \cdots$$
    显然, $\{G_n\}_{n=1}^{\infty}$是$S$的一个开覆盖. 因此, 存在有限个开集$G_{n_1}, G_{n_2}, \cdots, G_{n_k}$使得$S \subset G_{n_1} \cup G_{n_2} \cup \cdots \cup G_{n_k}$. 设$N = \max\{n_1, n_2, \cdots, n_k\}$, 则对于任意$n > N$, 都有$G_n \subset G_N$, 因此, 可以得到$S \subset G_{n_1} \cup G_{n_2} \cup \cdots \cup G_{n_k} \subset G_N$. 这与$a$是$S$的一个聚点矛盾. 因此, 集合$S$是闭集.
2. 充分性
   设$S$是一个有界闭集, 但是不是紧的. 则存在$S$的一个开覆盖$\{G_\alpha\}_{\alpha \in A}$, 使得对于任意有限个开集$G_{\alpha_1}, G_{\alpha_2}, \cdots, G_{\alpha_m}$, 都有$S \not\subset G_{\alpha_1} \cup G_{\alpha_2} \cup \cdots \cup G_{\alpha_m}$.

   我们现在使用一个递归的过程来构造一个数列$\{x_n\}$, 使得数列$\{x_n\}$没有收敛的子数列, 从而得到矛盾.

   任何有界闭集都包含在一个闭矩形中, 因此, 存在一个闭矩形$\Delta_1$使得$S \subset \Delta_1$. 将$\Delta_1$平均分成四个闭矩形$\Delta_{11}, \Delta_{12}, \Delta_{13}, \Delta_{14}$, 则至少存在一个闭矩形$\Delta_{1i_1}$使得$S \cap \Delta_{1i_1}$不可以被有限个开集覆盖.

   以此类推, 根据闭矩形套定理, 我们可以得到一个闭矩形套$\{\Delta_k\}$, 使得$\Delta_1 \supset \Delta_2 \supset \cdots \supset \Delta_k \supset \cdots$, 且满足:
   $$ \lim_{k\to\infty} \sqrt{(b_k - a_k)^2 + (d_k - c_k)^2} = 0 $$
   其中$\Delta_k = [a_k, b_k] \times [c_k, d_k]$. 根据闭矩形套定理, 存在唯一的点$(x_0, y_0)$使得$\bigcap_{k=1}^{\infty} \Delta_k = \{(x_0, y_0)\}$.
   因此, 适当选取任意包含点$(x_0, y_0)$的无限有界开集, 都可以得到一个包含点$(x_0, y_0)$的开集$G_\alpha$, 使得$S \cap G_\alpha$不可以被有限个开集覆盖. 因此, 可以得到$S \subset G_\alpha \cup G_{\alpha_1} \cup G_{\alpha_2} \cup \cdots \cup G_{\alpha_m}$, 其中$G_{\alpha_1}, G_{\alpha_2}, \cdots, G_{\alpha_m}$是$S$的一个有限子覆盖. 这与之前的假设矛盾. 因此, 集合$S$是紧集.

至此, 完成证明.

有一个类似本定理的三个等价条件:

**定理**: 设$S$是$R^n$中的一个集合, 则下面三个条件是等价的:
- 集合$S$是一个紧集.
- 集合$S$是一个有界闭集.
- 集合$S$中的任意无限子集都在$S$中有一个聚点.

证明: 我们只需要证明(2) $\Leftrightarrow$ (3)

(2) $\Rightarrow$ (3): 设 $S$ 是一个有界闭集，且 $A$ 是 $S$ 的任意一个无限子集。由于 $S$ 是有界集，显然 $A$ 也是有界集。根据 Bolzano-Weierstrass 定理，有界无限集 $A$ 必然至少存在一个聚点 $x_0$。因为 $A \subset S$，所以 $x_0$ 也是集合 $S$ 的聚点。又因为 $S$ 是闭集，它包含其所有的聚点，故必然有 $x_0 \in S$。这就证明了 $S$ 中的任意无限子集都在 $S$ 中有一个聚点。

(3) $\Rightarrow$ (2): 已知 $S$ 中的任意无限子集都在 $S$ 中有一个聚点，我们需要证明 $S$ 既是有界集又是闭集。
- **证明有界性**: 反证法。假设 $S$ 是无界集，则对于任意正整数 $n$，都可以找到一点 $x_n \in S$ 使得 $\|x_n\| > n$。由此构成的无穷序列集合 $A = \{x_1, x_2, \dots \}$ 是 $S$ 的一个无限子集。由于 $A$ 中的点可以无限远离原点，$A$ 不可能存在任何有限处的聚点，这与前提“$A$ 在 $S$ 中有聚点”矛盾。故 $S$ 必须是有界的。
- **证明闭集性**: 设 $x_0$ 是 $S$ 的任意一个聚点（如果 $S$ 没有聚点则自然为闭集）。根据聚点的定义，我们可以在 $S$ 中找到一个由互不相同的点组成的收敛序列 $\{x_n\}$，且该序列趋于 $x_0$。将这些点收集得到集合 $B = \{x_n\}$，它显然是 $S$ 的一个无限子集。根据已知条件，$B$ 在 $S$ 中一定有一个聚点；而该点列是收敛的，它唯一的聚点就是极限 $x_0$。因此 $x_0 \in S$。这说明 $S$ 包含了它所有的聚点，因此 $S$ 是一个闭集。

### 多元函数

本部分开始, 我将给出多元函数的定义, 并介绍多元函数的极限与连续性.

**定义**: 设$D$是$R^n$中的一个集合, $D$到$R$的一个映射$f: D \to R$被称为一个多元函数. 其中$n$被称为函数的**变量个数**或者**维数**. 我们可以把多元函数写作:
$$f(x_1, x_2, \cdots, x_n), \quad z = f(x_1, x_2, \cdots, x_n)$$

#### 多元函数的极限

**定义**: 设函数$f(x_1, x_2, \cdots, x_n)$定义在$D$的某个邻域内, $x_0 = (x_{0,1}, x_{0,2}, \cdots, x_{0,n})$是$D$的一个内点. 如果对于任意$\epsilon > 0$, 存在$\delta > 0$, 使得对于所有$x = (x_1, x_2, \cdots, x_n) \in D$且$0 < d(x, x_0) < \delta$, 都有$|f(x) - A| < \epsilon$, 则称函数$f(x_1, x_2, \cdots, x_n)$在$x_0$处的极限为$A$, 记为:

$$\lim_{x\to x_0} f(x) = A$$

多元函数的极限要求函数值从任何方向以任何方式趋近, 都必须趋近于同一个值. 这就要求函数在$x_0$附近的行为非常规律, 因此多元函数的极限是一个非常强的条件. 当然, 多元函数的极限也可以定义在无穷远处, 这里我们不再赘述.

对于多元函数的极限, 我们自然而然的希望可以把它拆成多个一元函数的极限来处理, 这就涉及到所谓**累次极限**的概念. 这里我们先介绍一下累次极限的定义:

我们讨论二元函数

**定义**(累次极限): 设$D$是$R^2$中的一个集合, $f(x,y)$是定义在$D$上的一个二元函数, $x_0$和$y_0$分别是集合$\{x : (x,y) \in D\}$和$\{y : (x,y) \in D\}$的内点. 如果对于任意$\epsilon > 0$, 存在$\delta > 0$, 使得对于所有$x \in \{x : (x,y) \in D\}$且$0 < |x - x_0| < \delta$, 都有$|\lim_{y\to y_0} f(x,y) - A| < \epsilon$, 则称函数$f(x,y)$在$x_0$处的累次极限为$A$, 记为:
$$\lim_{x\to x_0} \lim_{y\to y_0} f(x,y) = A$$
这也称作先对$y$再对$x$的累次极限. 同理, 如果对于任意$\epsilon > 0$, 存在$\delta > 0$, 使得对于所有$y \in \{y : (x,y) \in D\}$且$0 < |y - y_0| < \delta$, 都有$|\lim_{x\to x_0} f(x,y) - A| < \epsilon$, 则称函数$f(x,y)$在$y_0$处的累次极限为$A$, 记为:
$$\lim_{y\to y_0} \lim_{x\to x_0} f(x,y) = A$$
这也称作先对$x$再对$y$的累次极限.

但是二次极限和二重极限不一定同时存在且相等. 然而我们可以给出一组存在条件:

**定理**: 若二元哈数$f(x,y)$在$(x_0,y_0)$点存在二重极限
$$
\lim_{(x,y)\to(x_0,y_0)} f(x,y) = A
$$
且当$x\neq x_0$时, 函数$f(x,y)$在$y_0$点存在极限
$$\lim_{y\to y_0} f(x,y) = g(x)
$$
则二元函数$f(x,y)$在$(x_0,y_0)$点的二重极限等于先对$y$再对$x$的累次极限, 即:
$$\lim_{(x,y)\to(x_0,y_0)} f(x,y) = \lim_{x\to x_0} \lim_{y\to y_0} f(x,y)$$

**证明**: 只需要对下面这个表达式给出证明即可:

$$ \lim_{x \to x_0} g(x) = A $$

设$\epsilon > 0$是任意的, 因为二重极限存在, 则存在$\delta_1 > 0$, 使得对于所有$(x,y) \in D$且$0 < d((x,y), (x_0,y_0)) < \delta_1$, 都有$|f(x,y) - A| < \epsilon$. 因此, 对于任意$x \in \{x : (x,y) \in D\}$且$0 < |x - x_0| < \delta_1$, 都有$|\lim_{y\to y_0} f(x,y) - A| < \epsilon$. 又因为当$x\neq x_0$时, 函数$f(x,y)$在$y_0$点存在极限, 则对于任意$x \in \{x : (x,y) \in D\}$且$0 < |x - x_0| < \delta_1$, 都有$|g(x) - A| < \epsilon$. 因此, 可以得到对于任意$x \in \{x : (x,y) \in D\}$且$0 < |x - x_0| < \delta_1$, 都有$|g(x) - A| < \epsilon$. 这就证明了$\lim_{x\to x_0} g(x) = A$. 至此, 完成证明.

#### 多元函数的连续性

**定义**: 设函数$f(x_1, x_2, \cdots, x_n)$定义在$D$的某个邻域内, $x_0 = (x_{0,1}, x_{0,2}, \cdots, x_{0,n})$是$D$的一个内点. 如果函数$f(x_1, x_2, \cdots, x_n)$在$x_0$处的极限存在且等于$f(x_0)$, 则称函数$f(x_1, x_2, \cdots, x_n)$在$x_0$处连续. 换言之:

$$\lim_{x\to x_0} f(x) = f(x_0)$$

**定理**: 连续映射将紧集映射为紧集.

这个定理主要是针对向量值函数而言的, 我们可以给出如下的定义:

**定义**: 设$D$是$R^n$中的一个集合, $f: D \to R^m$是定义在$D$上的一个向量值函数, 其中$m$被称为函数的**值的维数**. 如果对于任意$\epsilon > 0$, 存在$\delta > 0$, 使得对于所有$x = (x_1, x_2, \cdots, x_n) \in D$且$0 < d(x, x_0) < \delta$, 都有$d(f(x), f(x_0)) < \epsilon$, 则称函数$f: D \to R^m$在$x_0$处连续.


## 多元函数的微分学

从现在开始, 我们将正式进入多元函数的微分学部分. 这里我们首先介绍一下多元函数的偏导数, 然后再介绍一下多元函数的全微分, 最后我们将介绍一下多元函数的可微性.

### 多元函数的偏导数

**定义**: 设函数$f(x_1, x_2, \cdots, x_n)$定义在$D$的某个邻域内, $x_0 = (x_{0,1}, x_{0,2}, \cdots, x_{0,n})$是$D$的一个内点. 如果对于任意$\epsilon > 0$, 存在$\delta > 0$, 使得对于所有$x_i \in \{x_i : (x_1, x_2, \cdots, x_n) \in D\}$且$0 < |x_i - x_{0,i}| < \delta$, 都有

$$\left| \frac{f(x_1, x_2, \cdots, x_i, \cdots, x_n) - f(x_1, x_2, \cdots, x_{0,i}, \cdots, x_n)}{x_i - x_{0,i}} - A \right| < \epsilon$$

则称函数$f(x_1, x_2, \cdots, x_n)$在$x_0$处关于第$i$个变量的偏导数为$A$, 记为:
$$\frac{\partial f}{\partial x_i}(x_0) = A$$

偏导数的定义和一元函数的导数的定义非常相似, 只是我们需要把绝对值替换成距离, 并且我们需要把函数值的变化量替换成函数值在某个方向上的变化量. 这里的思路非常清晰. 下面给出**方向导数**的定义:

**定义**: 设函数$f(x_1, x_2, \cdots, x_n)$定义在$D$的某个邻域内, $x_0 = (x_{0,1}, x_{0,2}, \cdots, x_{0,n})$是$D$的一个内点. 如果对于任意$\epsilon > 0$, 存在$\delta > 0$, 使得对于所有$t \in \{t : (x_0 + t\mathbf{u}) \in D\}$且$0 < |t| < \delta$, 都有$$\left| \frac{f(x_0 + t\mathbf{u}) - f(x_0)}{t} - A \right| < \epsilon$$
则称函数$f(x_1, x_2, \cdots, x_n)$在$x_0$处关于方向$\mathbf{u}$的方向导数为$A$, 记为:
$$D_{\mathbf{u}} f(x_0) = A$$

另有常见的表达形式是借助三角函数表达, 但是这种表述一般局限于二元函数.

### 全微分与可微性

**定义**: 一般的, 对于函数$z = f(x_1, x_2, \cdots, x_n)$在点$(x_1, x_2, \cdots, x_n)$处的全微分定义为:
$$df = \frac{\partial f}{\partial x_1}dx_1 + \frac{\partial f}{\partial x_2}dx_2 + \cdots + \frac{\partial f}{\partial x_n}dx_n$$

如果函数$f(x_1, x_2, \cdots, x_n)$在点$(x_1, x_2, \cdots, x_n)$处可微, 则称函数在该点处的全微分为:
$$df = f'(x_1, x_2, \cdots, x_n)$$


**定义**(可微条件): 设函数$f(x_1, x_2, \cdots, x_n)$定义在$D$的某个邻域内, $x_0 = (x_{0,1}, x_{0,2}, \cdots, x_{0,n})$是$D$的一个内点. 如果存在一个线性映射$L: R^n \to R$, 使得对于任意$\epsilon > 0$, 存在$\delta > 0$, 使得对于所有$x = (x_1, x_2, \cdots, x_n) \in D$且$0 < d(x, x_0) < \delta$, 都有$$\left| \frac{f(x) - f(x_0) - L(x - x_0)}{d(x, x_0)} \right| < \epsilon$$
则称函数$f(x_1, x_2, \cdots, x_n)$在$x_0$处可微, 记为:
$$f'(x_0) = L$$