/**
 * 策略：只存储主对角线和下三角区
 * 按行优先原则将各元素存入一维数组，数组大小为1+2+3+...+n -> (1+n)*n/2
 * 下标映射：a(i,j) i>=j 为第[1+2+3+...+(i-1)] + j -> i*(i-1)/2+j 个元素, 一维数组下标k = i*(i-1)/2+j - 1
*/