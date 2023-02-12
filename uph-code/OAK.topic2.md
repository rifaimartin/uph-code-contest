Latihan 2.1

=> instruction set architectures 

how is works? disini kita bicara tentang bagaimana menerjemahkan ke mesin kode, jadi kita bakal banyak bicara tentang
instruksi dan bentuk-bentuk penjumlahan, pengurangan dan bagaimana mongonversi dua bilangan biner yang dapat digunakan mesin untuk instruksi

format instruksi, bagaimana kita mempresentasikan nya.

Translation to machine code:
instruction formats
immediate values
encoding branches
large constants

disini kita akan mengambil instruksi dan menerjemahkan nya ke kode mesin


Procedure calls
- register conventions
- stack memory

Other Isas (about desain)


lanjut ke instruction, terdapat

Data operation
  - arithmetic (add , etc)
  - Logical (and,or,not xor)

Data transfer
  - Load (memory -> register)
  - Store (register -> memory)

sequencing
  - Branch (conditional <,>, ==)
  - Jump (unconditional, goto? hah what is that?) ohh jump from flow step

  sebelum kita lanjut ke yang lebih detail, kita perlu tau dulu nih. gmana suatu proses dieksekusi dan menjalankan prosesnya

  jadi prosesnya gini temen-temen :
    a. logika control/program counter
    b. memory
    c. instruction register
    d. control
    e. register file
    f. ALU
    g. memory address
    h. data register

  1. logika kontrol/instruction address/program counter - hold the instruction address, dia memegang alamat instruksi. (memory)
  2. instruksi, bakal ngefetch dari memory lalu dilanjutkan ke instuction register
  3. control logic bakal ngedecode instruksinya and ngasih tahu ALU dan si Register File apa yang perlu gw/mereka lakuin.
  4. ALU bakal execute instruksi dan hasil nya balik lagi ke register FILE
  5. terus control logic, bakal update/telss program counter for the next instruction 
  6. Memory address dan Data register bakal digunakan untuk memuas dan menyimpan ke memory atau dari memory

=> instruction encodings ? what is that!!! (jadi kita udah masuk ke tahap logika control/program counter/bagaimana membangun itu? dan bagaimana dia bekerja? hiks)

ngomonging MIPS terus kayaknya, apa itu?

MIPS (Microprocessor without Interlocked Pipelined Stages, artinya Mikroprosesor tanpa Tahapan Pipa yang Saling Terikat) adalah keluarga dari arsitektur set instruksi (ISA) komputer yang dikurangi (RISC) yang dikembangkan oleh MIPS Computer Systems, sekarang MIPS Technologies, yang berbasis di Amerika Serikat.

- instruction format. *apa ini? (machine languange)
   machine languange
     - computers do not understand instruction "add R8, R17, R18" 
     - instruction diterjemahkan ke machine languange (1 & 0)

     di translate kedalam 32 bit

     000000|10001|10010|01000| 00000 100000

     opCOde - rs (src1) - rt (src1) - rd(dest) ----- shamt funct


     opcode -> operasinya , like a OR,AND,ADD etc.. di dalem mips, ini adalah 6 bit

     5 bit ada register 2per5 = 32

=> immediate instruction

 small constant, konstanta variable
 cara support nya put the typical contans in memory and loah them()
 atau bisa register, like R0 , R-1, R128 etch. tapi sampe berapa banyak?

 antara beberapa instruksi memiliki konstanta di dalam instruksi,
 logika kontrol mengirimkan konstanta ke ALU

 Branch Instruction
 bne/beq   -  i-format - 16 bit immediate
 j         -  j-format - 26 bit immediate


 J   -  0 register - 26 bit immediate

 => address in branches and jumps


0000

