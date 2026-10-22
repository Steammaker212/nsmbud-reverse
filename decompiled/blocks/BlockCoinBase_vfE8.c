
// ---- addr: 0x605b65a8 */ float *__fastcall BlockCoinBase::vfE8(float *result, int a2)
/* line: 1 */ {
/* line: 2 */   float v2; // s0
/* line: 3 */   float *v3; // r1
/* line: 4 */   float v4; // s2
/* line: 5 */   float v5; // s0
/* line: 6 */   float v6; // s2
/* line: 7 */   float v7; // s0
/* line: 8 */ 
/* line: 9, address: 0x605b65a8 */   v2 = result[31];
/* line: 10, address: 0x605b65b4 */   if ( a2 == 1 )
/* line: 11 */   {
/* line: 12, address: 0x605b65bc */     if ( v2 <= 0.0 )
/* line: 13 */     {
/* line: 14 */ LABEL_7:
/* line: 15, address: 0x605b6608 */       v3 = result + 36;
/* line: 16, address: 0x605b6624 */       v6 = result[36] - result[1701];
/* line: 17, address: 0x605b6628 */       result[36] = v6;
/* line: 18, address: 0x605b662c */       v7 = result[1700];
/* line: 19, address: 0x605b6638 */       if ( v6 <= v7 )
/* line: 20, address: 0x605b6638 */         *v3 = v7;
/* line: 21, address: 0x605b6638 */       goto LABEL_9;
/* line: 22 */     }
/* line: 23 */   }
/* line: 24, address: 0x605b65c8 */   else if ( v2 >= 0.0 )
/* line: 25 */   {
/* line: 26, address: 0x605b65c8 */     goto LABEL_7;
/* line: 27 */   }
/* line: 28, address: 0x605b65e4 */   v3 = result + 36;
/* line: 29, address: 0x605b65e8 */   v4 = result[1701] + result[36];
/* line: 30, address: 0x605b65ec */   result[36] = v4;
/* line: 31, address: 0x605b65f0 */   v5 = result[1702];
/* line: 32, address: 0x605b65fc */   if ( v4 >= v5 )
/* line: 33, address: 0x605b6600 */     *v3 = v5;
/* line: 34 */ LABEL_9:
/* line: 35, address: 0x605b663c */   result[37] = *v3;
/* line: 36, address: 0x605b6644 */   return result;
/* line: 37 */ }