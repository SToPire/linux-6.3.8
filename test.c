#include <stdio.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    clock_t start_time, end_time;
    double elapsed_time;

    start_time = clock(); // 记录开始时间
    
    char *base_dir="/home/stopire/deep_dir/dir1/dir2/dir3/dir4/dir5/dir6/dir7/dir8/dir9/dir10/dir11/dir12/dir13/dir14/dir15/dir16/dir17/dir18/dir19/dir20/dir21/dir22/dir23/dir24/dir25/dir26/dir27/dir28/dir29/dir30/dir31/dir32/dir33/dir34/dir35/dir36/dir37/dir38/dir39/dir40/dir41/dir42/dir43/dir44/dir45/dir46/dir47/dir48/dir49/dir50/dir51/dir52/dir53/dir54/dir55/dir56/dir57/dir58/dir59/dir60/dir61/dir62/dir63/dir64/dir65/dir66/dir67/dir68/dir69/dir70/dir71/dir72/dir73/dir74/dir75/dir76/dir77/dir78/dir79/dir80/dir81/dir82/dir83/dir84/dir85/dir86/dir87/dir88/dir89/dir90/dir91/dir92/dir93/dir94/dir95/dir96/dir97/dir98/dir99/dir100/file.txt";

    for (int i = 0; i < 1000000; i++) {
        struct stat entry_stat;
        stat(base_dir, &entry_stat);
    }

    end_time = clock(); // 记录结束时间

    elapsed_time = ((double) (end_time - start_time)) / CLOCKS_PER_SEC; // 计算经过的时间，单位为秒

    printf("Elapsed Time: %f seconds\n", elapsed_time);

    return 0;
}