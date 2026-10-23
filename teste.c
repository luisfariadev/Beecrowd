1) 

%include "io64.inc" ; certifique que em CONFIGURÇÕES → COMPILADOR: X64 e NASM esteja marcado
default rel ; Declaração exigida pelo NASM, recomendada e moderna para 64 bits

section .data ; Declaração de variáveis inicializadas // DB significa Define byte, ou seja, aloca um endereço de 8 bits
msg1 db 'Resultado da operacao: ', 0 // Termina com 0
msg2 db 'Quociente: ', 0
msg3 db 'Resto: ', 0 
msg4 db 'Produto: ', 0

section .bss ; Declaração de variáveis não inicializadas
x resd 1 ; Variáveis double word (32 bits)
y resd 1 // Resd significa Reserve Double word - 32 bits
w resd 1

section .text
global main
main:
; Leitura dos valores que deverão estar na janela "Entrada"
    GET_DEC 4, x
    GET_DEC 4, y // GET_DEC significa leia um decimal, o 4 significa que ele possui 4 byts, 32 bits
    GET_DEC 4, w
; Cálculos
    mov eax, [ x ] // Move x para registrador eax
    xor edx, edx // Faz um xor entre dois registradores, vai dar 0. Xor dá 1 se os bits forem diferentes, 0 se forem iguais
    mov ecx, [ y ] // Move y para o registrador ecx
    sub ecx, [ w ] // Subtrai w de ecx -> e É CRIADA UMA FLAG DE Y - W

    // Adicinei x a eax; Zerei o edx; copiei y a ecx e subtrai w, ou seja:
    // EAX = X, EDX = 0; ECX = y - w;
se:
    jle .else // LE A FLAG ACIMA E jle = Jump if Less or Equal, vai pular pro else se essa condição for satisfeita
    mul DWORD [ y ] // mul = multiplicar, DWORD = Diz que o operando é um Double word(4 bytes, 32 bits), multiplica esse valor pelo registrador implicido, q nesse caso é o EAX
    PRINT_STRING msg1 // Então, o resultado acima, caso tenha dado mais de 64 bits, EAX recebe os 32 bits de baixo e e EDX os 32 bits de cima
    NEWLINE // O código acima vai apenas printar a string "Resultado da operação"
    PRINT_STRING msg4 // Printa Produto
    PRINT_DEC 4, edx // Imprime o decimal de 4 bytes contendo a parte alta do produto
    PRINT_CHAR ':'
    PRINT_DEC 4, eax // Imprime o decimal de 4 bytes contendo a parte baixa do produto
    jmp .fimse // Pula para .fimse
.else:
    div DWORD [ w ] // div = dividir a DWORD(double word) Dividendo (implícito): EDX:EAX, os dois registradores juntos formando 64 bits pelo valor w de 32 bits q está na memória
    PRINT_STRING msg1 // Print resultado da operação
    NEWLINE
    PRINT_STRING msg2 // Print quociente
    PRINT_DEC 4, eax // Imprime o quociente
    NEWLINE
    PRINT_STRING msg3
    PRINT_DEC 4, edx // Imprime o resto
    .fimse:
    NEWLINE
    xor rax, rax // Zera rax, 0 se deu certo, outro número se deu erro, serve como esse controle
    ret // Encerra a Main
    section .note.GNU-stack

.fimse:
    NEWLINE // Pula uma linha
    xor rax, rax // Zera o rax(deu certo)
    ret // Encerra a main
section .note.GNU-stack

Então o programa faz uma divisão e multiplicação, Multiplicação caso y > w e divisão caso y < = w
jle .else, ou seja, se for menor igual a 0, vai pro else 


2)
%include "io64.inc"
default rel

section .data
x dd 5              

section .bss
y resd 1           

section .text
global main
main:
    GET_DEC 4, y   

    mov eax, [y]
if:
    cmp eax, 5      
    jle .fimse      
    cmp eax, 10    
    jg .fimse       

    add [x], eax    

.fimse:             
    PRINT_DEC 4, x  
    NEWLINE
    xor rax, rax
    ret

section .note.GNU-stack

// GET_DEC significa leia um decimal, o 4 significa que ele possui 4 byts, 32 bits
// Move x para registrador eax
// add [x], eax, aceita x como destino, ou seja, endereço

3) 

%include "io64.inc"
default rel

section .data
x dd 10                

section .bss
y resd 1                

section .text
global main
main:
    GET_DEC 4, y        
    mov eax, [y]
    cmp eax, 5
    jl .entao           
    cmp eax, 10
    jge .entao        

   
    add eax, eax       
    add [x], eax
    jmp .fimse

.entao:

    add [x], eax

.fimse:                
    PRINT_DEC 4, x     
    NEWLINE
    xor rax, rax
    ret

section .note.GNU-stack

4)

%include "io64.inc"
default rel

section .data
x dd 5                  

section .bss
y resd 1                

section .text
global main
main:
    GET_DEC 4, y        

    mov eax, [y]       
    mov ecx, [x]       

Enquanto:                
    cmp ecx, 0
    jle fim_Enquanto

    add eax, ecx        
    dec ecx             
    jmp Enquanto

fim_Enquanto:              
    mov [y], eax        
    mov [x], ecx        

    PRINT_DEC 4, y      
    NEWLINE

    xor rax, rax
    ret

// Dec -> Decremento