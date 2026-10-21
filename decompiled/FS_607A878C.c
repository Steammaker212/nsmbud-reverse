/* line: 0, address: 0x607a878c */ int __fastcall sub_607A878C(int a1)
/* line: 1 */ {
/* line: 2 */   int result; // r0
/* line: 3 */   int *v3; // r6
/* line: 4 */   float v4; // s0
/* line: 5 */   int v5; // r0
/* line: 6 */   int v6; // r1
/* line: 7 */   float v7; // s16
/* line: 8 */   float v8; // s2
/* line: 9 */   float v9; // s0
/* line: 10 */   float v10; // s18
/* line: 11 */   float v11; // s0
/* line: 12 */   _BOOL4 v12; // r1
/* line: 13 */   _BOOL4 v13; // r0
/* line: 14 */   float v14; // s0
/* line: 15 */   float v15; // s0
/* line: 16 */   float v16; // r0
/* line: 17 */   float v17[2]; // [sp+0h] [bp-28h] BYREF
/* line: 18 */   float v18; // [sp+8h] [bp-20h]
/* line: 19 */   int v19; // [sp+Ch] [bp-1Ch]
/* line: 20 */   int v20; // [sp+10h] [bp-18h]
/* line: 21 */ 
/* line: 22, address: 0x607a87a4 */   v3 = (int *)(a1 + 9708);
/* line: 23, address: 0x607a87a4 */   result = *(_DWORD *)(a1 + 9708);
/* line: 24, address: 0x607a87bc */   switch ( result )
/* line: 25 */   {
/* line: 26, address: 0x607a87bc */     case 0:
/* line: 27, address: 0x607a887c */       v5 = *(_DWORD *)(a1 + 9780);
/* line: 28, address: 0x607a8884 */       if ( v5 < 3 )
/* line: 29, address: 0x607a8884 */         goto LABEL_34;
/* line: 30, address: 0x607a88c0 */       if ( (float)(COERCE_FLOAT((sead::Random::getU32((sead::Random *)(MEMORY[0xC9CF0C] + 1340)) >> 9) | 0x3F800000)
/* line: 31 */                  + -1.0) >= 0.5 )
/* line: 32 */       {
/* line: 33, address: 0x607a8ac0 */         v5 = *(_DWORD *)(a1 + 9780);
/* line: 34 */ LABEL_34:
/* line: 35, address: 0x607a8ac4 */         v6 = 5 * v5 + 10;
/* line: 36, address: 0x607a8acc */         result = 2;
/* line: 37 */       }
/* line: 38 */       else
/* line: 39 */       {
/* line: 40, address: 0x607a88c4 */         result = 3;
/* line: 41, address: 0x607a88c8 */         v6 = 60;
/* line: 42 */       }
/* line: 43, address: 0x607a8ad4 */       *(_DWORD *)(a1 + 9712) = v6;
/* line: 44, address: 0x607a8ad4 */       goto LABEL_36;
/* line: 45, address: 0x607a87bc */     case 1:
/* line: 46, address: 0x607a88e0 */       *(_DWORD *)(a1 + 9712) = 5 * *(_DWORD *)(a1 + 9780);
/* line: 47, address: 0x607a88e4 */       result = 2;
/* line: 48, address: 0x607a88e8 */       goto LABEL_36;
/* line: 49, address: 0x607a87bc */     case 2:
/* line: 50, address: 0x607a87bc */     case 3:
/* line: 51, address: 0x607a87dc */       result = *(_DWORD *)(a1 + 9712);
/* line: 52, address: 0x607a87e4 */       if ( result )
/* line: 53, address: 0x607a87e4 */         return result;
/* line: 54, address: 0x607a87ec */       v4 = 1.95;
/* line: 55, address: 0x607a880c */       *(_DWORD *)(MEMORY[0xCBFA90] + 60) |= 0x600u;
/* line: 56, address: 0x607a8814 */       *(_DWORD *)(a1 + 80) = 0;
/* line: 57, address: 0x607a8818 */       *(_DWORD *)(a1 + 120) = 0;
/* line: 58, address: 0x607a881c */       *(_DWORD *)(a1 + 124) = 0;
/* line: 59, address: 0x607a8820 */       *(_DWORD *)(a1 + 128) = 0;
/* line: 60, address: 0x607a8830 */       if ( *v3 == 3 )
/* line: 61, address: 0x607a8830 */         v4 = 2.25;
/* line: 62, address: 0x607a8840 */       *(float *)(a1 + 88) = v4;
/* line: 63, address: 0x607a8868 */       (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 11360) + 84))(*(_DWORD *)(a1 + 11360), 2);
/* line: 64, address: 0x607a886c */       result = 4;
/* line: 65 */ LABEL_36:
/* line: 66, address: 0x607a8ad8 */       *v3 = result;
/* line: 67, address: 0x607a8ad8 */       return result;
/* line: 68, address: 0x607a87bc */     case 4:
/* line: 69, address: 0x607a8908 */       v7 = *(float *)(MEMORY[0xCBFA90] + 264);
/* line: 70, address: 0x607a8910 */       if ( sub_6075EDE0(a1) )
/* line: 71 */       {
/* line: 72, address: 0x607a8920 */         v7 = v7 + 4.0;
/* line: 73 */       }
/* line: 74, address: 0x607a8934 */       else if ( sub_6075EDF8(a1) )
/* line: 75 */       {
/* line: 76, address: 0x607a893c */         v7 = v7 + 8.0;
/* line: 77 */       }
/* line: 78, address: 0x607a8944 */       v8 = *(float *)(a1 + 108);
/* line: 79, address: 0x607a8948 */       v9 = *(float *)(a1 + 88);
/* line: 80, address: 0x607a8950 */       v10 = v7 + 32.0;
/* line: 81, address: 0x607a895c */       if ( v8 >= (float)(v7 + 32.0) )
/* line: 82 */       {
/* line: 83, address: 0x607a8988 */         if ( v8 <= (float)(v7 + 32.0) )
/* line: 84, address: 0x607a8988 */           goto LABEL_24;
/* line: 85, address: 0x607a898c */         v11 = v8 - v9;
/* line: 86, address: 0x607a89a4 */         v12 = v8 < v11;
/* line: 87, address: 0x607a89ac */         v13 = v11 <= v10;
/* line: 88 */       }
/* line: 89 */       else
/* line: 90 */       {
/* line: 91, address: 0x607a8960 */         v11 = v9 + v8;
/* line: 92, address: 0x607a8978 */         v12 = v11 < v8;
/* line: 93, address: 0x607a8980 */         v13 = v11 >= v10;
/* line: 94 */       }
/* line: 95, address: 0x607a89b4 */       if ( v13 )
/* line: 96, address: 0x607a89b4 */         v11 = v7 + 32.0;
/* line: 97, address: 0x607a89bc */       if ( v12 )
/* line: 98, address: 0x607a89bc */         v11 = v7 + 32.0;
/* line: 99, address: 0x607a89c0 */       *(float *)(a1 + 108) = v11;
/* line: 100 */ LABEL_24:
/* line: 101, address: 0x607a89c4 */       result = sub_60773F4C(a1);
/* line: 102, address: 0x607a89cc */       v14 = *(float *)(a1 + 108);
/* line: 103, address: 0x607a89d8 */       if ( v14 <= v7 )
/* line: 104 */       {
/* line: 105, address: 0x607a89e4 */         *(_DWORD *)(a1 + 1220) |= 0x200u;
/* line: 106, address: 0x607a89ec */         result = sub_6076EF58(a1);
/* line: 107, address: 0x607a89f0 */         v14 = *(float *)(a1 + 108);
/* line: 108 */       }
/* line: 109, address: 0x607a89fc */       if ( v14 > v7 )
/* line: 110 */       {
/* line: 111, address: 0x607a8a10 */         v19 = 0;
/* line: 112, address: 0x607a8a14 */         v20 = 0;
/* line: 113, address: 0x607a8a40 */         if ( sub_601559B8(a1 + 1328, a1 + 108, v17) == 1 && *(float *)(a1 + 112) < (float)(v18 + 1.0) )
/* line: 114, address: 0x607a8a40 */           *(float *)(a1 + 112) = v18 + 1.0;
/* line: 115, address: 0x607a8a4c */         *(_DWORD *)(a1 + 116) = -991887360;
/* line: 116, address: 0x607a8a54 */         result = *(_DWORD *)(a1 + 1232) | 0x80;
/* line: 117, address: 0x607a8a58 */         *(_DWORD *)(a1 + 1232) = result;
/* line: 118, address: 0x607a8a5c */         v14 = *(float *)(a1 + 108);
/* line: 119 */       }
/* line: 120, address: 0x607a8a68 */       if ( v14 >= v10 )
/* line: 121 */       {
/* line: 122, address: 0x607a8a6c */         v15 = *(float *)(a1 + 112);
/* line: 123, address: 0x607a8a74 */         v16 = *(float *)(a1 + 116);
/* line: 124, address: 0x607a8a78 */         v17[0] = v7;
/* line: 125, address: 0x607a8a84 */         v17[1] = v15 + 8.0;
/* line: 126, address: 0x607a8a88 */         v18 = v16;
/* line: 127, address: 0x607a8a90 */         sub_60766B08(a1, v17);
/* line: 128, address: 0x607a8aa4 */         sub_607948E8(a1 + 11356, 0);
/* line: 129, address: 0x607a8aac */         *v3 = 5;
/* line: 130, address: 0x607a8ab4 */         result = *(_DWORD *)(a1 + 1232) | 0x100;
/* line: 131, address: 0x607a8ab8 */         *(_DWORD *)(a1 + 1232) = result;
/* line: 132 */       }
/* line: 133 */       return result;
/* line: 134, address: 0x607a87bc */     case 5:
/* line: 135, address: 0x607a88f4 */       *(_DWORD *)(a1 + 116) = -991887360;
/* line: 136, address: 0x607a88f8 */       return -991887360;
/* line: 137 */     default:
/* line: 138 */       return result;
/* line: 139 */   }
/* line: 140 */ }