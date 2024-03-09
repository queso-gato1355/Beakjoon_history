# [Silver V] 알고리즘 수업 - 점근적 표기 1 - 24313 

[문제 링크](https://www.acmicpc.net/problem/24313) 

### 성능 요약

메모리: 1112 KB, 시간: 0 ms

### 분류

수학

### 제출 일자

2024년 3월 9일 13:31:11

### 문제 설명

<p>오늘도 서준이는 점근적 표기 수업 조교를 하고 있다. 아빠가 수업한 내용을 학생들이 잘 이해했는지 문제를 통해서 확인해보자.</p>

<p>알고리즘의 소요 시간을 나타내는 O-표기법(빅-오)을 다음과 같이 정의하자.</p>

<p>O(<em>g</em>(<em>n</em>)) = {<em>f</em>(<em>n</em>) | 모든 <em>n</em> ≥ <em>n<sub>0</sub></em>에 대하여 <em>f</em>(<em>n</em>) ≤ <em>c</em> × <em>g</em>(<em>n</em>)인 양의 상수 <em>c</em>와 <em>n<sub>0</sub></em>가 존재한다}</p>

<p>이 정의는 실제 O-표기법(<a href="https://en.wikipedia.org/wiki/Big_O_notation">https://en.wikipedia.org/wiki/Big_O_notation</a>)과 다를 수 있다.</p>

<p>함수 <em>f</em>(<em>n</em>) = <em>a<sub>1</sub>n </em>+ <em>a<sub>0</sub></em>, 양의 정수 <em>c</em>, <em>n<sub>0</sub></em>가 주어질 경우 O(<em>n</em>) 정의를 만족하는지 알아보자.</p>

### 입력 

 <p>첫째 줄에 함수 <em>f</em>(<em>n</em>)을 나타내는 정수 <em>a<sub>1</sub></em>, <em>a</em><sub><em>0</em></sub>가 주어진다. (0 ≤ |<em>a<sub>i</sub></em>| ≤ 100)</p>

<p>다음 줄에 양의 정수 <em>c</em>가 주어진다. (1 ≤ <em>c</em> ≤ 100)</p>

<p>다음 줄에 양의 정수 <em>n<sub>0</sub></em>가 주어진다. (1 ≤ <em>n<sub>0</sub></em> ≤ 100)</p>

### 출력 

 <p><em>f</em>(<em>n</em>), <em>c</em>, <em>n<sub>0</sub></em>가 O(<em>n</em>) 정의를 만족하면 1, 아니면 0을 출력한다.</p>

### 나의 고민

식을 정리하면 다음과 같다.

$$a_1 \cdot n + a_0 \le c \cdot n \ \ \ (n \ge n_0)$$

조금 더 나아가 정리하면 다음과 같다.

$$a_0 \le n \cdot (c-a_1)$$

$c-a_1$에 대한 경우를 나누어 처리해보자.

#### $c \gt a_1$인 경우

$a_0 \le kn\ (k \gt 0)$라고 볼 수 있으므로 $n_0 \le n$일 때 $n_0 \ge \dfrac{a_0}{k}$를 만족하는 경우가 존재한다.

#### $c = a_1$인 경우

$a_0 \le 0$를 만족하므로, $a_0$가 음수라면 어떠한 $n_0$이라도 만족한다.

#### $c \lt a_1$인 경우

$a_0 \le -kn\ (k \gt 0)$라고 볼 수 있으므로, $n_0$ 값에 상관 없이 늘 거짓이다.

즉, $c-a_1 \ge 0$에 대해서만 확인하면 된다.
