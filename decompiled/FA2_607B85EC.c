/* line: 0, address: 0x607b85ec */ int __fastcall sub_607B85EC(int *a1)
/* line: 1 */ {
/* line: 2 */   int result; // r0
/* line: 3 */   int *v3; // r6
/* line: 4 */   _DWORD *v4; // r0
/* line: 5 */   int v5; // r1
/* line: 6 */   int v6; // r2
/* line: 7 */   int v7; // r0
/* line: 8 */   _BOOL4 v8; // r0
/* line: 9 */   bool v9; // zf
/* line: 10 */   int v10; // r1
/* line: 11 */   _BOOL4 v11; // r0
/* line: 12 */   bool v12; // zf
/* line: 13 */   int v13; // r1
/* line: 14 */   _BOOL4 v14; // r0
/* line: 15 */   bool v15; // zf
/* line: 16 */   int v16; // r1
/* line: 17 */   _DWORD *v17; // r0
/* line: 18 */   int v18; // r1
/* line: 19 */   int v19; // r2
/* line: 20 */   int v20; // r0
/* line: 21 */   _BOOL4 v21; // r0
/* line: 22 */   bool v22; // zf
/* line: 23 */   int v23; // r1
/* line: 24 */ 
/* line: 25, address: 0x607b85f8 */   result = sub_607753D8();
/* line: 26, address: 0x607b8600 */   if ( !result )
/* line: 27 */   {
/* line: 28, address: 0x607b8614 */     v3 = a1 + 2485;
/* line: 29, address: 0x607b8614 */     result = a1[2485];
/* line: 30, address: 0x607b862c */     switch ( result )
/* line: 31 */     {
/* line: 32, address: 0x607b862c */       case 0:
/* line: 33, address: 0x607b862c */       case 5:
/* line: 34, address: 0x607b862c */       case 8:
/* line: 35, address: 0x607b8664 */         if ( sub_60793CA8(a1[2840]) == 1 )
/* line: 36 */         {
/* line: 37, address: 0x607b8670 */           sub_607C18F4(a1);
/* line: 38, address: 0x607b8678 */           v4 = (_DWORD *)sub_607750B4(a1);
/* line: 39, address: 0x607b8680 */           if ( v4 )
/* line: 40 */           {
/* line: 41, address: 0x607b8684 */             v5 = v4[39];
/* line: 42, address: 0x607b8688 */             v6 = v4[40];
/* line: 43, address: 0x607b868c */             v7 = v4[41];
/* line: 44, address: 0x607b8690 */             a1[39] = v5;
/* line: 45, address: 0x607b8694 */             a1[40] = v6;
/* line: 46, address: 0x607b8698 */             a1[41] = v7;
/* line: 47 */           }
/* line: 48, address: 0x607b86a4 */           v8 = sub_6075EE0C((int)a1);
/* line: 49, address: 0x607b86a8 */           v9 = v8;
/* line: 50, address: 0x607b86ac */           if ( v8 )
/* line: 51, address: 0x607b86b0 */             v9 = a1[330] == 9;
/* line: 52, address: 0x607b86b4 */           if ( v9 )
/* line: 53, address: 0x607b8808 */             v10 = 236;
/* line: 54 */           else
/* line: 55, address: 0x607b86c0 */             v10 = 0;
/* line: 56, address: 0x607b880c */           sub_607948E8((int)(a1 + 2839), v10);
/* line: 57, address: 0x607b8814 */           *v3 = 1;
/* line: 58 */         }
/* line: 59, address: 0x607b8814 */         goto LABEL_29;
/* line: 60, address: 0x607b862c */       case 1:
/* line: 61 */ LABEL_29:
/* line: 62, address: 0x607b8824 */         if ( sub_607AA954(a1) == 1 )
/* line: 63 */         {
/* line: 64, address: 0x607b883c */           sub_607948E8((int)(a1 + 2839), 33);
/* line: 65, address: 0x607b884c */           sub_60793114(a1[2840]);
/* line: 66, address: 0x607b885c */           a1[40] = sub_60773F3C((int)a1, a1[20]);
/* line: 67, address: 0x607b8868 */           a1[3012] = a1[20];
/* line: 68, address: 0x607b886c */           result = 4;
/* line: 69 */         }
/* line: 70, address: 0x607b8880 */         else if ( sub_607C1600(a1) == 1 )
/* line: 71 */         {
/* line: 72, address: 0x607b8888 */           sub_607C1784(a1);
/* line: 73, address: 0x607b8890 */           v17 = (_DWORD *)sub_607750B4(a1);
/* line: 74, address: 0x607b8898 */           if ( v17 )
/* line: 75 */           {
/* line: 76, address: 0x607b889c */             v18 = v17[39];
/* line: 77, address: 0x607b88a0 */             v19 = v17[40];
/* line: 78, address: 0x607b88a4 */             v20 = v17[41];
/* line: 79, address: 0x607b88a8 */             a1[39] = v18;
/* line: 80, address: 0x607b88ac */             a1[40] = v19;
/* line: 81, address: 0x607b88b0 */             a1[41] = v20;
/* line: 82 */           }
/* line: 83, address: 0x607b88b4 */           result = 7;
/* line: 84 */         }
/* line: 85 */         else
/* line: 86 */         {
/* line: 87, address: 0x607b88c0 */           result = sub_60786974(a1 + 172);
/* line: 88, address: 0x607b88c8 */           if ( result != 1 )
/* line: 89, address: 0x607b88c8 */             return result;
/* line: 90, address: 0x607b88d8 */           result = (*(int (__fastcall **)(int *))(*a1 + 1064))(a1);
/* line: 91, address: 0x607b88e0 */           if ( result )
/* line: 92, address: 0x607b88e0 */             return result;
/* line: 93, address: 0x607b88ec */           a1[304] |= 0x4000000u;
/* line: 94, address: 0x607b88f4 */           v21 = sub_6075EE0C((int)a1);
/* line: 95, address: 0x607b88f8 */           v22 = v21;
/* line: 96, address: 0x607b88fc */           if ( v21 )
/* line: 97, address: 0x607b8900 */             v22 = a1[330] == 9;
/* line: 98, address: 0x607b8904 */           if ( v22 )
/* line: 99, address: 0x607b89ac */             v23 = 237;
/* line: 100 */           else
/* line: 101, address: 0x607b8910 */             v23 = 21;
/* line: 102, address: 0x607b89b4 */           sub_607948E8((int)(a1 + 2839), v23);
/* line: 103, address: 0x607b89b8 */           result = 2;
/* line: 104 */         }
/* line: 105 */ LABEL_50:
/* line: 106, address: 0x607b89bc */         *v3 = result;
/* line: 107, address: 0x607b89bc */         return result;
/* line: 108, address: 0x607b862c */       case 2:
/* line: 109, address: 0x607b86e0 */         if ( sub_60793CA8(a1[2840]) == 1 )
/* line: 110 */         {
/* line: 111, address: 0x607b86e8 */           v11 = sub_6075EE0C((int)a1);
/* line: 112, address: 0x607b86ec */           v12 = v11;
/* line: 113, address: 0x607b86f0 */           if ( v11 )
/* line: 114, address: 0x607b86f4 */             v12 = a1[330] == 9;
/* line: 115, address: 0x607b86f8 */           if ( v12 )
/* line: 116, address: 0x607b8920 */             v13 = 238;
/* line: 117 */           else
/* line: 118, address: 0x607b8704 */             v13 = 20;
/* line: 119, address: 0x607b8924 */           sub_607948E8((int)(a1 + 2839), v13);
/* line: 120, address: 0x607b892c */           if ( sub_6075EDF8((int)a1) )
/* line: 121, address: 0x607b8940 */             sub_60793114(a1[2840]);
/* line: 122 */         }
/* line: 123, address: 0x607b8948 */         result = sub_60786974(a1 + 172);
/* line: 124, address: 0x607b8950 */         if ( result )
/* line: 125, address: 0x607b8950 */           return result;
/* line: 126, address: 0x607b8964 */         sub_60794954((int)(a1 + 2839), 0);
/* line: 127, address: 0x607b8970 */         a1[2486] = 10;
/* line: 128, address: 0x607b897c */         a1[304] &= ~0x4000000u;
/* line: 129, address: 0x607b8980 */         result = 3;
/* line: 130, address: 0x607b8984 */         goto LABEL_50;
/* line: 131, address: 0x607b862c */       case 3:
/* line: 132, address: 0x607b8718 */         if ( sub_607AA954(a1) == 1 )
/* line: 133 */         {
/* line: 134, address: 0x607b8730 */           sub_607948E8((int)(a1 + 2839), 33);
/* line: 135, address: 0x607b8740 */           sub_60793114(a1[2840]);
/* line: 136, address: 0x607b8750 */           a1[40] = sub_60773F3C((int)a1, a1[20]);
/* line: 137, address: 0x607b875c */           a1[3012] = a1[20];
/* line: 138, address: 0x607b8764 */           *v3 = 4;
/* line: 139 */         }
/* line: 140, address: 0x607b876c */         result = a1[2486];
/* line: 141, address: 0x607b8774 */         if ( result )
/* line: 142, address: 0x607b8774 */           return result;
/* line: 143, address: 0x607b877c */         v14 = sub_6075EE0C((int)a1);
/* line: 144, address: 0x607b8780 */         v15 = v14;
/* line: 145, address: 0x607b8784 */         if ( v14 )
/* line: 146, address: 0x607b8788 */           v15 = a1[330] == 9;
/* line: 147, address: 0x607b878c */         if ( v15 )
/* line: 148, address: 0x607b8990 */           v16 = 236;
/* line: 149 */         else
/* line: 150, address: 0x607b8798 */           v16 = 0;
/* line: 151, address: 0x607b8998 */         sub_607948E8((int)(a1 + 2839), v16);
/* line: 152, address: 0x607b899c */         result = 1;
/* line: 153, address: 0x607b89a0 */         goto LABEL_50;
/* line: 154, address: 0x607b862c */       case 4:
/* line: 155, address: 0x607b87ac */         result = sub_60793DA0(a1[2840]);
/* line: 156, address: 0x607b87b4 */         if ( result != 1 )
/* line: 157, address: 0x607b87b4 */           return result;
/* line: 158, address: 0x607b87c0 */         sub_607AABA0((int)a1, 0);
/* line: 159, address: 0x607b87c4 */         result = 5;
/* line: 160, address: 0x607b87c8 */         goto LABEL_50;
/* line: 161, address: 0x607b862c */       case 7:
/* line: 162, address: 0x607b87d8 */         result = sub_60793DA0(a1[2840]);
/* line: 163, address: 0x607b87e0 */         if ( result == 1 )
/* line: 164 */         {
/* line: 165, address: 0x607b87ec */           *v3 = 8;
/* line: 166, address: 0x607b87fc */           return sub_607C1928(a1, 0);
/* line: 167 */         }
/* line: 168, address: 0x607b87fc */         return result;
/* line: 169 */       default:
/* line: 170 */         return result;
/* line: 171 */     }
/* line: 172 */   }
/* line: 173, address: 0x607b8608 */   return result;
/* line: 174 */ }