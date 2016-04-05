# lab3
QuestionA:
  編譯 make

QuestionB:
  explanation:
    sort():nlog(n)
    insertion_sort():n^2
    因為insertion_sort()運算次數較多，所以時間較長
    推估size每增加10倍，時間約略為10^2倍=100倍
  
  result:
    1000:
    sort(): 0 seconds
    v1/v2 are different.
    insertion_sort(): 0 seconds
    v1/v2 are the same.
    
    10000:
    sort(): 0 seconds
    v1/v2 are different.
    insertion_sort(): 1.29 seconds
    v1/v2 are the same.
    
    100000:
    sort(): 0.04 seconds
    v1/v2 are different.
    insertion_sort(): 128.04 seconds
    v1/v2 are the same.
    
    1000000:
    sort(): 0.51 seconds
    v1/v2 are different.
    ^C
    因為已經跑了將近10個小時insertion_sort()還是沒結果，所以我就ctrl+c了
    
  
