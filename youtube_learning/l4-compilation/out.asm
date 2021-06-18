
hello.o:     file format elf64-x86-64


Disassembly of section .text:

0000000000000000 <main>:
   0:	f3 0f 1e fa          	endbr64 
   4:	55                   	push   %rbp
   5:	48 89 e5             	mov    %rsp,%rbp
   8:	48 8d 35 00 00 00 00 	lea    0x0(%rip),%rsi        # f <main+0xf>
   f:	48 8d 3d 00 00 00 00 	lea    0x0(%rip),%rdi        # 16 <main+0x16>
  16:	e8 00 00 00 00       	callq  1b <main+0x1b>
  1b:	48 89 c2             	mov    %rax,%rdx
  1e:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 25 <main+0x25>
  25:	48 89 c6             	mov    %rax,%rsi
  28:	48 89 d7             	mov    %rdx,%rdi
  2b:	e8 00 00 00 00       	callq  30 <main+0x30>
  30:	b8 00 00 00 00       	mov    $0x0,%eax
  35:	5d                   	pop    %rbp
  36:	c3                   	retq   

0000000000000037 <_Z41__static_initialization_and_destruction_0ii>:
  37:	f3 0f 1e fa          	endbr64 
  3b:	55                   	push   %rbp
  3c:	48 89 e5             	mov    %rsp,%rbp
  3f:	48 83 ec 10          	sub    $0x10,%rsp
  43:	89 7d fc             	mov    %edi,-0x4(%rbp)
  46:	89 75 f8             	mov    %esi,-0x8(%rbp)
  49:	83 7d fc 01          	cmpl   $0x1,-0x4(%rbp)
  4d:	75 32                	jne    81 <_Z41__static_initialization_and_destruction_0ii+0x4a>
  4f:	81 7d f8 ff ff 00 00 	cmpl   $0xffff,-0x8(%rbp)
  56:	75 29                	jne    81 <_Z41__static_initialization_and_destruction_0ii+0x4a>
  58:	48 8d 3d 00 00 00 00 	lea    0x0(%rip),%rdi        # 5f <_Z41__static_initialization_and_destruction_0ii+0x28>
  5f:	e8 00 00 00 00       	callq  64 <_Z41__static_initialization_and_destruction_0ii+0x2d>
  64:	48 8d 15 00 00 00 00 	lea    0x0(%rip),%rdx        # 6b <_Z41__static_initialization_and_destruction_0ii+0x34>
  6b:	48 8d 35 00 00 00 00 	lea    0x0(%rip),%rsi        # 72 <_Z41__static_initialization_and_destruction_0ii+0x3b>
  72:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 79 <_Z41__static_initialization_and_destruction_0ii+0x42>
  79:	48 89 c7             	mov    %rax,%rdi
  7c:	e8 00 00 00 00       	callq  81 <_Z41__static_initialization_and_destruction_0ii+0x4a>
  81:	90                   	nop
  82:	c9                   	leaveq 
  83:	c3                   	retq   

0000000000000084 <_GLOBAL__sub_I_main>:
  84:	f3 0f 1e fa          	endbr64 
  88:	55                   	push   %rbp
  89:	48 89 e5             	mov    %rsp,%rbp
  8c:	be ff ff 00 00       	mov    $0xffff,%esi
  91:	bf 01 00 00 00       	mov    $0x1,%edi
  96:	e8 9c ff ff ff       	callq  37 <_Z41__static_initialization_and_destruction_0ii>
  9b:	5d                   	pop    %rbp
  9c:	c3                   	retq   
