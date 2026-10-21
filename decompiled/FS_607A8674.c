/* line: 0, address: 0x607a8674 */ int __fastcall sub_607A8674(int a1)
/* line: 1 */ {
/* line: 2 */   int result; // r0
/* line: 3 */   _DWORD *v3; // r5
/* line: 4 */   float v4; // s0
/* line: 5 */   float v5; // s2
/* line: 6 */   int v6; // r1
/* line: 7 */ 
/* line: 8, address: 0x607a8684 */   v3 = (_DWORD *)(a1 + 9708);
/* line: 9, address: 0x607a8684 */   result = *(_DWORD *)(a1 + 9708);
/* line: 10, address: 0x607a868c */   if ( result == 1 )
/* line: 11 */   {
/* line: 12, address: 0x607a8730 */     result = sub_60793CA8(*(_DWORD *)(a1 + 11360));
/* line: 13, address: 0x607a8738 */     if ( result == 1 )
/* line: 14 */     {
/* line: 15, address: 0x607a874c */       sub_607948E8(a1 + 11356, 0);
/* line: 16, address: 0x607a876c */       if ( sub_6077965C(MEMORY[0xCBFA90]) == 1 )
/* line: 17, address: 0x607a876c */         v6 = 7;
/* line: 18 */       else
/* line: 19, address: 0x607a8770 */         v6 = 5;
/* line: 20, address: 0x607a8778 */       return sub_6076D180(a1, v6, 1);
/* line: 21 */     }
/* line: 22 */   }
/* line: 23, address: 0x607a8694 */   else if ( !result )
/* line: 24 */   {
/* line: 25, address: 0x607a869c */     sub_60771858(a1);
/* line: 26, address: 0x607a86b0 */     v4 = *(float *)(a1 + 100) + *(float *)(a1 + 124);
/* line: 27, address: 0x607a86b4 */     v5 = MEMORY[0xB0A8A8];
/* line: 28, address: 0x607a86bc */     *(float *)(a1 + 124) = v4;
/* line: 29, address: 0x607a86c8 */     if ( v4 < v5 )
/* line: 30 */     {
/* line: 31, address: 0x607a86c8 */       *(float *)(a1 + 124) = v5;
/* line: 32, address: 0x607a86cc */       v4 = v5;
/* line: 33 */     }
/* line: 34, address: 0x607a86d8 */     *(float *)(a1 + 112) = v4 + *(float *)(a1 + 112);
/* line: 35, address: 0x607a86e8 */     *(float *)(a1 + 108) = *(float *)(a1 + 88) + *(float *)(a1 + 108);
/* line: 36, address: 0x607a86ec */     result = *(unsigned __int8 *)(a1 + 6900);
/* line: 37, address: 0x607a86f4 */     if ( (result & 1) != 0 )
/* line: 38 */     {
/* line: 39, address: 0x607a8704 */       *(_DWORD *)(a1 + 88) = 0;
/* line: 40, address: 0x607a8710 */       sub_607948E8(a1 + 11356, 7);
/* line: 41, address: 0x607a8718 */       sub_6076F0E0(a1);
/* line: 42, address: 0x607a871c */       result = 1;
/* line: 43, address: 0x607a8720 */       *v3 = 1;
/* line: 44 */     }
/* line: 45 */   }
/* line: 46, address: 0x607a86f4 */   return result;
/* line: 47 */ }