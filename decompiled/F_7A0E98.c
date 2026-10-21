/* line: 0, address: 0x607a0e98 */ int __fastcall sub_607A0E98(int a1, int a2, int a3)
/* line: 1 */ {
/* line: 2 */   int v4; // r6
/* line: 3 */   int v5; // r0
/* line: 4 */   int v7; // r0
/* line: 5 */   bool v8; // zf
/* line: 6 */   int v9; // r0
/* line: 7 */   int v10; // r0
/* line: 8 */   const char *v11; // r5
/* line: 9 */   _DWORD *v12; // r1
/* line: 10 */   int v13; // r2
/* line: 11 */   _DWORD *v14; // r0
/* line: 12 */   int v15; // r1
/* line: 13 */   _BYTE v16[76]; // [sp+4h] [bp-4Ch] BYREF
/* line: 14 */ 
/* line: 15, address: 0x607a0ea8 */   v4 = 0;
/* line: 16, address: 0x607a0eb4 */   if ( (*(_DWORD *)(a1 + 1204) & 0x24000) != 0 )
/* line: 17, address: 0x607a0eb4 */     return v4;
/* line: 18, address: 0x607a0eb8 */   v5 = *(_DWORD *)(a1 + 1216);
/* line: 19, address: 0x607a0ec0 */   if ( (v5 & 0x8000000) != 0 )
/* line: 20, address: 0x607a0ec0 */     return v4;
/* line: 21, address: 0x607a0ec4 */   v4 = 1;
/* line: 22, address: 0x607a0edc */   switch ( a3 )
/* line: 23 */   {
/* line: 24, address: 0x607a0edc */     case 0:
/* line: 25, address: 0x607a0fa4 */       if ( !a2 )
/* line: 26, address: 0x607a0fa4 */         goto LABEL_17;
/* line: 27, address: 0x607a0fa8 */       v9 = v5 & 0x10;
/* line: 28, address: 0x607a0fa8 */       v8 = v9 == 0;
/* line: 29, address: 0x607a0fac */       if ( v9 )
/* line: 30, address: 0x607a0fb0 */         v8 = (*(_BYTE *)(a2 + 569) & 2) == 0;
/* line: 31, address: 0x607a0fb4 */       if ( v8 )
/* line: 32, address: 0x607a0fb4 */         goto LABEL_17;
/* line: 33, address: 0x607a1108 */       v4 = 0;
/* line: 34, address: 0x607a114c */       if ( (*(int (__fastcall **)(int, int, bool, _DWORD, _DWORD))(*(_DWORD *)a1 + 1420))(
/* line: 35 */              a1,
/* line: 36 */              4,
/* line: 37 */              (float)((float)(*(float *)(a2 + 584) - *(float *)(a1 + 584))
/* line: 38 */                    * *(float *)(4 * *(_DWORD *)(a1 + 80) + 0xB0A898)) < 0.0,
/* line: 39 */              0,
/* line: 40 */              0) == 1 )
/* line: 41 */       {
/* line: 42, address: 0x607a1154 */         v4 = 1;
/* line: 43, address: 0x607a115c */         *(_DWORD *)(a1 + 1216) |= 0x100u;
/* line: 44 */       }
/* line: 45, address: 0x607a115c */       return v4;
/* line: 46, address: 0x607a0edc */     case 1:
/* line: 47, address: 0x607a0edc */     case 3:
/* line: 48 */ LABEL_17:
/* line: 49, address: 0x607a0fb8 */       v10 = *(_DWORD *)(a1 + 1320);
/* line: 50, address: 0x607a0fc0 */       switch ( v10 )
/* line: 51 */       {
/* line: 52, address: 0x607a0fc0 */         case 3:
/* line: 53, address: 0x607a0fc0 */           goto LABEL_20;
/* line: 54, address: 0x607a0fc0 */         case 1:
/* line: 55, address: 0x607a10d8 */           sub_607A2894((_DWORD *)a1, nullptr);
/* line: 56 */           break;
/* line: 57, address: 0x607a0fc0 */         case 0:
/* line: 58, address: 0x607a0fd0 */           goto LABEL_20;
/* line: 59 */         default:
/* line: 60, address: 0x607a10e8 */           v4 = 1;
/* line: 61, address: 0x607a10ec */           sub_607A2894((_DWORD *)a1, (_DWORD *)1);
/* line: 62 */           break;
/* line: 63 */       }
/* line: 64, address: 0x607a10f0 */       return v4;
/* line: 65, address: 0x607a0edc */     case 2:
/* line: 66, address: 0x607a0edc */     case 4:
/* line: 67, address: 0x607a0edc */     case 5:
/* line: 68, address: 0x607a0edc */     case 6:
/* line: 69, address: 0x607a0edc */     case 7:
/* line: 70, address: 0x607a0edc */     case 8:
/* line: 71, address: 0x607a0f4c */       return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 1416))(a1, a3, a2);
/* line: 72, address: 0x607a0edc */     case 9:
/* line: 73, address: 0x607a0edc */     case 10:
/* line: 74, address: 0x607a0f58 */       sub_607A1198(a1, a3);
/* line: 75, address: 0x607a0f5c */       return v4;
/* line: 76, address: 0x607a0edc */     case 11:
/* line: 77, address: 0x607a0edc */     case 12:
/* line: 78, address: 0x607a0f60 */       v7 = *(_DWORD *)(a1 + 1320);
/* line: 79, address: 0x607a0f68 */       if ( a3 != 11 )
/* line: 80 */       {
/* line: 81, address: 0x607a1098 */         if ( v7 != 1 )
/* line: 82, address: 0x607a1098 */           goto LABEL_31;
/* line: 83 */ LABEL_30:
/* line: 84, address: 0x607a109c */         v14 = (_DWORD *)a1;
/* line: 85, address: 0x607a10a0 */         v15 = 0;
/* line: 86, address: 0x607a10a4 */         goto LABEL_32;
/* line: 87 */       }
/* line: 88, address: 0x607a0f70 */       switch ( v7 )
/* line: 89 */       {
/* line: 90, address: 0x607a0f70 */         case 3:
/* line: 91 */ LABEL_20:
/* line: 92, address: 0x607a0fdc */           sub_60777FB4(MEMORY[0xCBFA90], (_DWORD *)a1, 0);
/* line: 93, address: 0x607a0ff0 */           return 1;
/* line: 94, address: 0x607a0f70 */         case 1:
/* line: 95, address: 0x607a0f78 */           goto LABEL_30;
/* line: 96, address: 0x607a0f70 */         case 0:
/* line: 97, address: 0x607a0f80 */           goto LABEL_20;
/* line: 98 */       }
/* line: 99 */ LABEL_31:
/* line: 100, address: 0x607a10a8 */       v14 = (_DWORD *)a1;
/* line: 101, address: 0x607a10ac */       v15 = 1;
/* line: 102 */ LABEL_32:
/* line: 103, address: 0x607a10b0 */       sub_607A2894(v14, (_DWORD *)v15);
/* line: 104, address: 0x607a10c4 */       Player_changeState(a1, 13389452, 0);
/* line: 105 */       return 1;
/* line: 106, address: 0x607a0edc */     case 13:
/* line: 107, address: 0x607a1004 */       Player_changeState(a1, 13389516, 0);
/* line: 108, address: 0x607a1008 */       return v4;
/* line: 109, address: 0x607a0edc */     case 14:
/* line: 110, address: 0x607a1020 */       v11 = "false";
/* line: 111, address: 0x607a101c */       if ( *(_BYTE *)(a1 + 15076) )
/* line: 112, address: 0x607a1030 */         v11 = "true";
/* line: 113, address: 0x607a1040 */       sub_6016ACE0(
/* line: 114 */         v16,
/* line: 115 */         "[PoisonDown] type=%d,mode=%d,IsPassingDown=%s",
/* line: 116 */         *(_DWORD *)(a1 + 1316),
/* line: 117 */         *(_DWORD *)(a1 + 1320),
/* line: 118 */         v11);
/* line: 119, address: 0x607a1048 */       v12 = (_DWORD *)a1;
/* line: 120, address: 0x607a104c */       v13 = 3;
/* line: 121, address: 0x607a1054 */       goto LABEL_27;
/* line: 122, address: 0x607a0edc */     case 15:
/* line: 123, address: 0x607a105c */       v12 = (_DWORD *)a1;
/* line: 124, address: 0x607a1060 */       v13 = 0;
/* line: 125, address: 0x607a1068 */       goto LABEL_27;
/* line: 126, address: 0x607a0edc */     case 16:
/* line: 127, address: 0x607a1070 */       v12 = (_DWORD *)a1;
/* line: 128, address: 0x607a1074 */       v13 = 4;
/* line: 129 */ LABEL_27:
/* line: 130, address: 0x607a107c */       sub_60777FB4(MEMORY[0xCBFA90], v12, v13);
/* line: 131, address: 0x607a1084 */       return v4;
/* line: 132, address: 0x607a0edc */     case 17:
/* line: 133, address: 0x607a0edc */     case 18:
/* line: 134, address: 0x607a0f98 */       sub_607A7AA4(a1, a2);
/* line: 135, address: 0x607a0f9c */       return v4;
/* line: 136, address: 0x607a0edc */     case 19:
/* line: 137, address: 0x607a108c */       sub_60765E4C(a1);
/* line: 138, address: 0x607a1090 */       return v4;
/* line: 139 */     default:
/* line: 140 */       return v4;
/* line: 141 */   }
/* line: 142 */ }