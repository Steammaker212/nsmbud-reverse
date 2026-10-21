/* line: 0, address: 0x6079c110 */ int __fastcall sub_6079C110(int *a1)
/* line: 1 */ {
/* line: 2 */   int result; // r0
/* line: 3 */   int *v3; // r6
/* line: 4 */ 
/* line: 5, address: 0x6079c11c */   result = sub_607753D8();
/* line: 6, address: 0x6079c124 */   if ( !result )
/* line: 7 */   {
/* line: 8, address: 0x6079c138 */     v3 = a1 + 2485;
/* line: 9, address: 0x6079c138 */     result = a1[2485];
/* line: 10, address: 0x6079c150 */     switch ( result )
/* line: 11 */     {
/* line: 12, address: 0x6079c150 */       case 0:
/* line: 13, address: 0x6079c150 */       case 5:
/* line: 14, address: 0x6079c150 */       case 8:
/* line: 15, address: 0x6079c188 */         if ( sub_60793CA8(a1[2840]) == 1 )
/* line: 16 */         {
/* line: 17, address: 0x6079c190 */           sub_607C18F4(a1);
/* line: 18, address: 0x6079c1a4 */           sub_607948E8((int)(a1 + 2839), 0);
/* line: 19, address: 0x6079c1ac */           *v3 = 1;
/* line: 20 */         }
/* line: 21, address: 0x6079c1ac */         goto LABEL_6;
/* line: 22, address: 0x6079c150 */       case 1:
/* line: 23 */ LABEL_6:
/* line: 24, address: 0x6079c1b0 */         result = sub_607B74E0(a1);
/* line: 25, address: 0x6079c1c4 */         if ( result )
/* line: 26, address: 0x6079c1c4 */           return result;
/* line: 27, address: 0x6079c1d4 */         if ( sub_607AA954(a1) == 1 )
/* line: 28 */         {
/* line: 29, address: 0x6079c1ec */           sub_607948E8((int)(a1 + 2839), 33);
/* line: 30, address: 0x6079c1fc */           sub_60793114(a1[2840]);
/* line: 31, address: 0x6079c20c */           a1[40] = sub_60773F3C((int)a1, a1[20]);
/* line: 32, address: 0x6079c218 */           a1[3012] = a1[20];
/* line: 33, address: 0x6079c21c */           result = 4;
/* line: 34 */         }
/* line: 35, address: 0x6079c388 */         else if ( sub_607C1600(a1) == 1 )
/* line: 36 */         {
/* line: 37, address: 0x6079c390 */           sub_607C1784(a1);
/* line: 38, address: 0x6079c3a0 */           a1[40] = sub_60773F3C((int)a1, a1[20]);
/* line: 39, address: 0x6079c3a4 */           result = 7;
/* line: 40 */         }
/* line: 41 */         else
/* line: 42 */         {
/* line: 43, address: 0x6079c3b0 */           result = sub_60786974(a1 + 172);
/* line: 44, address: 0x6079c3b8 */           if ( result != 1 )
/* line: 45, address: 0x6079c3b8 */             return result;
/* line: 46, address: 0x6079c3c8 */           result = (*(int (__fastcall **)(int *))(*a1 + 1064))(a1);
/* line: 47, address: 0x6079c3d0 */           if ( result )
/* line: 48, address: 0x6079c3d0 */             return result;
/* line: 49, address: 0x6079c3e4 */           a1[304] |= 0x4000000u;
/* line: 50, address: 0x6079c3f0 */           sub_607948E8((int)(a1 + 2839), 21);
/* line: 51, address: 0x6079c3f4 */           result = 2;
/* line: 52 */         }
/* line: 53 */ LABEL_26:
/* line: 54, address: 0x6079c3f8 */         *v3 = result;
/* line: 55, address: 0x6079c3f8 */         return result;
/* line: 56, address: 0x6079c150 */       case 2:
/* line: 57, address: 0x6079c2c4 */         if ( sub_60793CA8(a1[2840]) == 1 )
/* line: 58, address: 0x6079c2d4 */           sub_607948E8((int)(a1 + 2839), 20);
/* line: 59, address: 0x6079c2dc */         result = sub_60786974(a1 + 172);
/* line: 60, address: 0x6079c2e4 */         if ( result )
/* line: 61, address: 0x6079c2e4 */           return result;
/* line: 62, address: 0x6079c2f8 */         sub_60794954((int)(a1 + 2839), 0);
/* line: 63, address: 0x6079c304 */         a1[2486] = 10;
/* line: 64, address: 0x6079c310 */         a1[304] &= ~0x4000000u;
/* line: 65, address: 0x6079c314 */         result = 3;
/* line: 66, address: 0x6079c318 */         goto LABEL_26;
/* line: 67, address: 0x6079c150 */       case 3:
/* line: 68, address: 0x6079c230 */         if ( sub_607AA954(a1) == 1 )
/* line: 69 */         {
/* line: 70, address: 0x6079c248 */           sub_607948E8((int)(a1 + 2839), 33);
/* line: 71, address: 0x6079c258 */           sub_60793114(a1[2840]);
/* line: 72, address: 0x6079c268 */           a1[40] = sub_60773F3C((int)a1, a1[20]);
/* line: 73, address: 0x6079c274 */           a1[3012] = a1[20];
/* line: 74, address: 0x6079c27c */           *v3 = 4;
/* line: 75 */         }
/* line: 76, address: 0x6079c284 */         result = a1[2486];
/* line: 77, address: 0x6079c28c */         if ( result )
/* line: 78, address: 0x6079c28c */           return result;
/* line: 79, address: 0x6079c2a0 */         sub_607948E8((int)(a1 + 2839), 0);
/* line: 80, address: 0x6079c2a4 */         result = 1;
/* line: 81, address: 0x6079c2a8 */         goto LABEL_26;
/* line: 82, address: 0x6079c150 */       case 4:
/* line: 83, address: 0x6079c328 */         result = sub_60793DA0(a1[2840]);
/* line: 84, address: 0x6079c330 */         if ( result != 1 )
/* line: 85, address: 0x6079c330 */           return result;
/* line: 86, address: 0x6079c33c */         sub_607AABA0((int)a1, 0);
/* line: 87, address: 0x6079c340 */         result = 5;
/* line: 88, address: 0x6079c344 */         goto LABEL_26;
/* line: 89, address: 0x6079c150 */       case 7:
/* line: 90, address: 0x6079c354 */         result = sub_60793DA0(a1[2840]);
/* line: 91, address: 0x6079c35c */         if ( result == 1 )
/* line: 92 */         {
/* line: 93, address: 0x6079c368 */           *v3 = 8;
/* line: 94, address: 0x6079c378 */           return sub_607C1928(a1, 0);
/* line: 95 */         }
/* line: 96, address: 0x6079c378 */         return result;
/* line: 97 */       default:
/* line: 98 */         return result;
/* line: 99 */     }
/* line: 100 */   }
/* line: 101, address: 0x6079c12c */   return result;
/* line: 102 */ }