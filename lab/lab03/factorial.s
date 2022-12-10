.globl factorial

.data
n: .word 2
end: .word 1

.text
main:
    la t0, n
    lw a0, 0(t0)
    jal ra, factorial

    addi a1, a0, 0
    addi a0, x0, 1
    ecall # Print Result

    addi a1, x0, '\n'
    addi a0, x0, 11
    ecall # Print newline

    addi a0, x0, 10
    ecall # Exit

factorial:
    la t1, end # load end
    lw t1, 0(t1)
    mv t0, a0 # a0 = i = n
loop:
    bge t1, t0, exit # if end >= n then exit
    addi t0, t0, -1 # i = i - 1
    mul a0, a0, t0
    j loop
exit:
    jr ra
