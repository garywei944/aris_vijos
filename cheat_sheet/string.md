# string
string object stores in stack and string implementation stores in heap.
```
// 返回char *
data()
```

## Constructor
```
// 生成空字符串
string str

// 生成字符串为str的复制品
string s(str)

// 将字符串str中从下标strbegin开始、长度为strlen的部分作为字符串初值
string s(str, strbegin,strlen)

string s(cstr, char_len)：以C_string类型cstr的前char_len个字符串作为字符串s的初值

// 生成num个c字符的字符串
string s(num ,c)

// 将字符串str中从下标stridx开始到字符串结束的位置作为字符串初值
string s(str, stridx)

// e.g.
string str1;               //生成空字符串
string str2("123456789");  //生成"1234456789"的复制品
string str3("12345", 0, 3);//结果为"123"
string str4("012345", 5);  //结果为"01234"
string str5(5, '1');       //结果为"11111"
string str6(str2, 2);      //结果为"3456789"
```

## Size and capacity
```
// 返回string对象的字符个数，他们执行效果相同。
size()
length()

// 返回string对象最多包含的字符数，超出会抛出length_error异常
max_size()

// 重新分配内存之前，string对象能包含的最大字符数
capacity()
```

## Compare
```
strA.compare(strB)
strA.compare(indexbeginA, lengthA, strB)
strA.compare(indexbeginA, lengthA, strB, indexbeginB, lengthB)
```

## Insert
```
push_back(c)
insert(pos, c)
```

## Traverse
```
// Traverse directly
for(int i = 0; i < s1.size(); i++ ) {
    s1[i];
}

// Traverse in order
for(string::iterator iter = s1.begin(); iter < s1.end(); iter++) {
    *iter;
}

// Traver in reverse order
for(string::reverse_iterator riter = s1.rbegin(); riter < s1.rend(); riter++) {
    *riter;
}
```

## Erase
```
erase(index)
erase(indexbegin, length)
```

## Replace
```
// 将当前字符串从pos索引开始的n个字符，替换成字符串s
string& replace(size_t pos, size_t n, const char *s);

// 将当前字符串从pos索引开始的n个字符，替换成n1个字符c
string& replace(size_t pos, size_t n, size_t n1, char c);

// 将当前字符串[i1,i2)区间中的字符串替换为字符串s
string& replace(iterator i1, iterator i2, const char* s);
```

## Find
```
find(s, index)
rfind(s, index)
find(c, index)
rfind(c, index)

// 把s当成char的无序set理解
find_first_of(s, index)
find_first_not_of(s, index)
find_last_of(s, index)
find_last_not_of(s, index)
```
