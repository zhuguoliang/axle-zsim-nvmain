#To deal the shmget problem of the size of shared memory area
echo 2147483648 > /proc/sys/kernel/shmmax
#To enable pin use
 echo 0 > /proc/sys/kernel/yama/ptrace_scope

export Zsim_NVmain_PATH=/home/zhuguoliang/projects/git_proj/axle-zsim-nvmain




