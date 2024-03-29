/**
 * 一维数组：
 * 各数组元素大小相同，且在物理上连续存放
 * 数组元素a[i]的存放地址 = LOC + i * sizeof(ElenType)，数组下标默认从0开始
 * 
 * 二维数组：
 * M行N列的二维数组b[M][N]中，
 * 若按行优先存储，则b[i][j]的存储地址 = LOC + (i*N+j) * sizeof(ElemType)
 * 若按列优先存储，则b[i][j]的存储地址 = LOC + (j*M+i) * sizeof(ElemType)
 * 
 * 稀疏矩阵：
 * 压缩存储策略一：顺序存储->三元组(行，列，值)->(i,j,v)，下标从1开始
 * 压缩存储策略二：链式存储，十字链表法
 * 向下域down，指向第j列的第一个元素
 * 向右域right，指向第i行的第一个元素
 * 
 * 对称矩阵：
 * 策略：只存储主对角线和下三角区
 * 按行优先原则将各元素存入一维数组，数组大小为1+2+3+...+n -> (1+n)*n/2
 * 下标映射：a(i,j) i>=j 为第[1+2+3+...+(i-1)] + j -> i*(i-1)/2+j 个元素, 一维数组下标k = i*(i-1)/2+j - 1
 * 
 * 三对角矩阵：
 * 压缩存储策略：按行(列)优先原则，只存储带状部分元素
 * a(i,j) |i-j|<=1 为第 [前i-1行共3(i-1)-1个元素，a(i,j)为i行第j-i+2个元素] -> 2i+j-2个元素
 * 映射一维数组下标k = 2i+j-3 (数组下标从0开始)
 * 若已知k,则i = [(k+2)/3]
 * 
 * 三角矩阵：
 * 下三角矩阵：除主对角线和下三角区，其余元素都相同
 * 上三角矩阵：除主对角线和上三角区，其余元素都相同
 * 压缩存储策略：按行优先原则，将下三角和主对角线存入一维数组，并在最后一个位置存储常量c
*/


