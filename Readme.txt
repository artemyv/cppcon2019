CPP con 2019

Best practices workshop 2019-05-14

9:00-17:00

Code mesurement - WTFs per minute during code review

https://isocpp.github.io/CppCoreGuidelines
https://isocpp.org/wiki/faq/coding-standards
https://google.github.io/styleguide/cppguide.html

All class exercises can be done in an online compiler such as:
http://coliru.stacked-crooked.com
http://ideone.com
https://wandbox.org
http://cpp.sh … or any other
We may also use: http://quick-bench.com for benchmarks
https://taas.trust-in-soft.com/tsnippet/# to pinpoint undefined behavior
https://cppinsights.io to see our code in the eyes of the compiler
and https://godbolt.org to see the generated assembler from our code


const X&&
sample http://stackoverflow.com/a/14742636

Use state strategy instead of polimorfism

public virtual destructor
or protected non-virtual 


Write contributor in file header and over fixes

Конец был очень скоротечным и пунктирным


15 марта 2019
9:00 Wellcome
20 mins late start,  и так и не начали
10 минут говорил Декан Академии
Затем выступил организатор




9:20 Jason Turner - Keynote: The best parts of C++
9:40 Actual start
clang-tidy with modernize
fuzzers
sanitizers


11:05 Yehezkel Bernat Coroutines
cppcoro::task<T>
co_await operator changes function to coroutine
co_yield generates result on the fly but return type ccpcoro::genrator (or async_generator) has to be specified explicitely. 
it cannot be deduced from return value.

Standard library still has no support of coroutines, but language provides operators for usage...


12:15 Inbal Levi - Virtual tables or the overhead magic
CRTP as alternative to the runtime-polimorfism
Has no answer to creating collection of classes.
On the other hand - algorithms that accept instances that are requied just to have specific member function do not bother about it...
So they could work. How to pass collection to algorithm is another issue