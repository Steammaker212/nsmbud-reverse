/* line: 0, address: 0x605b4cc4 */ int __fastcall sub_605B4CC4(int a1)
/* line: 1 */ {
/* line: 2 */   unsigned __int8 *v2; // r6
/* line: 3 */   unsigned __int8 v3; // r0
/* line: 4 */   unsigned __int8 v4; // r0
/* line: 5 */   unsigned __int8 v5; // r0
/* line: 6 */   unsigned __int8 v6; // r0
/* line: 7 */   int v7; // r5
/* line: 8 */   int v8; // r0
/* line: 9 */   int v10; // r0
/* line: 10 */   int v11; // r1
/* line: 11 */   _BYTE *v12; // r0
/* line: 12 */   int v13; // r2
/* line: 13 */   int v14; // r3
/* line: 14 */   unsigned __int8 *v15; // r6
/* line: 15 */   unsigned __int8 v16; // r0
/* line: 16 */   unsigned __int8 v17; // r0
/* line: 17 */   unsigned __int8 v18; // r0
/* line: 18 */   unsigned __int8 v19; // r0
/* line: 19 */   int v20; // r3
/* line: 20 */   int v21; // r3
/* line: 21 */   bool v22; // zf
/* line: 22 */   int v23; // r3
/* line: 23 */   bool v24; // zf
/* line: 24 */   int v25; // r3
/* line: 25 */   int v26; // r3
/* line: 26 */   int v27; // r1
/* line: 27 */   int v28; // r1
/* line: 28 */   int v29; // r1
/* line: 29 */   int v30; // r1
/* line: 30 */ 
/* line: 31, address: 0x605b4cf0 */   if ( *(_BYTE *)(a1 + 6843) || *(_DWORD *)(a1 + 6824) != -1 || *(_DWORD *)(a1 + 6828) )
/* line: 32 */   {
/* line: 33, address: 0x605b4d0c */     *(_BYTE *)(a1 + 6850) = 0;
/* line: 34, address: 0x605b4d0c */     v2 = (unsigned __int8 *)(a1 + 6850);
/* line: 35, address: 0x605b4d18 */     v3 = *(_BYTE *)(a1 + 6917);
/* line: 36, address: 0x605b4d20 */     if ( v3 != 255 )
/* line: 37 */     {
/* line: 38, address: 0x605b4d24 */       *v2 = v3;
/* line: 39, address: 0x605b4d34 */       (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
/* line: 40, address: 0x605b4d3c */       *(_BYTE *)(a1 + 6917) = -1;
/* line: 41 */     }
/* line: 42, address: 0x605b4d4c */     v4 = *(_BYTE *)(a1 + 6929);
/* line: 43, address: 0x605b4d54 */     if ( v4 != 255 )
/* line: 44 */     {
/* line: 45, address: 0x605b4d58 */       *v2 = v4;
/* line: 46, address: 0x605b4d68 */       (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
/* line: 47, address: 0x605b4d70 */       *(_BYTE *)(a1 + 6929) = -1;
/* line: 48 */     }
/* line: 49, address: 0x605b4d80 */     v5 = *(_BYTE *)(a1 + 6941);
/* line: 50, address: 0x605b4d88 */     if ( v5 != 255 )
/* line: 51 */     {
/* line: 52, address: 0x605b4d8c */       *v2 = v5;
/* line: 53, address: 0x605b4d9c */       (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
/* line: 54, address: 0x605b4da4 */       *(_BYTE *)(a1 + 6941) = -1;
/* line: 55 */     }
/* line: 56, address: 0x605b4db4 */     v6 = *(_BYTE *)(a1 + 6953);
/* line: 57, address: 0x605b4dbc */     if ( v6 != 255 )
/* line: 58 */     {
/* line: 59, address: 0x605b4dc0 */       *v2 = v6;
/* line: 60, address: 0x605b4dd0 */       (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
/* line: 61, address: 0x605b4dd8 */       *(_BYTE *)(a1 + 6953) = -1;
/* line: 62 */     }
/* line: 63, address: 0x605b4de4 */     v7 = 3;
/* line: 64, address: 0x605b4de8 */     v8 = *(_DWORD *)(a1 + 6824);
/* line: 65, address: 0x605b4df0 */     if ( v8 == -1 )
/* line: 66 */     {
/* line: 67, address: 0x605b4df0 */       LOBYTE(v8) = 2;
/* line: 68, address: 0x605b4df4 */       v7 = 1;
/* line: 69 */     }
/* line: 70, address: 0x605b4df8 */     *(_BYTE *)(a1 + 6849) = v8;
/* line: 71, address: 0x605b4e00 */     if ( *(_DWORD *)(a1 + 6828) )
/* line: 72 */     {
/* line: 73, address: 0x605b4e14 */       *v2 = -1;
/* line: 74, address: 0x605b4e1c */       return 3;
/* line: 75 */     }
/* line: 76, address: 0x605b4e08 */     return v7;
/* line: 77 */   }
/* line: 78, address: 0x605b4e24 */   v10 = *(unsigned __int8 *)(a1 + 6845);
/* line: 79, address: 0x605b4e2c */   if ( v10 == 3 )
/* line: 80 */   {
/* line: 81, address: 0x605b4e88 */     *(_BYTE *)(a1 + 6850) = 0;
/* line: 82, address: 0x605b4e88 */     v15 = (unsigned __int8 *)(a1 + 6850);
/* line: 83, address: 0x605b4e90 */     *(_BYTE *)(a1 + 6849) = 2;
/* line: 84, address: 0x605b4e98 */     v16 = *(_BYTE *)(a1 + 6918);
/* line: 85, address: 0x605b4ea0 */     if ( v16 != 255 )
/* line: 86 */     {
/* line: 87, address: 0x605b4ea4 */       *v15 = v16;
/* line: 88, address: 0x605b4eb4 */       (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
/* line: 89 */     }
/* line: 90, address: 0x605b4ec0 */     v17 = *(_BYTE *)(a1 + 6930);
/* line: 91, address: 0x605b4ec8 */     if ( v17 != 255 )
/* line: 92 */     {
/* line: 93, address: 0x605b4ecc */       *v15 = v17;
/* line: 94, address: 0x605b4edc */       (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
/* line: 95 */     }
/* line: 96, address: 0x605b4ee8 */     v18 = *(_BYTE *)(a1 + 6942);
/* line: 97, address: 0x605b4ef0 */     if ( v18 != 255 )
/* line: 98 */     {
/* line: 99, address: 0x605b4ef4 */       *v15 = v18;
/* line: 100, address: 0x605b4f04 */       (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
/* line: 101 */     }
/* line: 102, address: 0x605b4f0c */     v7 = 1;
/* line: 103, address: 0x605b4f14 */     v19 = *(_BYTE *)(a1 + 6954);
/* line: 104, address: 0x605b4f1c */     if ( v19 != 255 )
/* line: 105 */     {
/* line: 106, address: 0x605b4f20 */       *v15 = v19;
/* line: 107, address: 0x605b4f30 */       (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
/* line: 108, address: 0x605b4f38 */       return 1;
/* line: 109 */     }
/* line: 110 */   }
/* line: 111 */   else
/* line: 112 */   {
/* line: 113, address: 0x605b4e30 */     v7 = 0;
/* line: 114, address: 0x605b4e38 */     if ( v10 == 2 )
/* line: 115 */     {
/* line: 116, address: 0x605b4e40 */       v11 = 0;
/* line: 117, address: 0x605b4e48 */       *(_BYTE *)(a1 + 6850) = 0;
/* line: 118, address: 0x605b4e48 */       v12 = (_BYTE *)(a1 + 6850);
/* line: 119, address: 0x605b4e54 */       v13 = MEMORY[0xCC6D8C];
/* line: 120, address: 0x605b4e58 */       if ( *(_BYTE *)(MEMORY[0xCC6D8C] + 17) )
/* line: 121 */       {
/* line: 122, address: 0x605b4e68 */         v14 = *(unsigned __int8 *)(a1 + 6920);
/* line: 123, address: 0x605b4e70 */         if ( v14 != 255 )
/* line: 124 */         {
/* line: 125, address: 0x605b4e70 */           *v12 = v14;
/* line: 126, address: 0x605b4e74 */           v11 = 1;
/* line: 127 */         }
/* line: 128 */       }
/* line: 129 */       else
/* line: 130 */       {
/* line: 131, address: 0x605b4f40 */         v20 = *(unsigned __int8 *)(a1 + 6916);
/* line: 132, address: 0x605b4f48 */         if ( v20 != 255 )
/* line: 133, address: 0x605b4f48 */           *v12 = v20;
/* line: 134 */       }
/* line: 135, address: 0x605b4f4c */       if ( *(_BYTE *)(v13 + 17) )
/* line: 136 */       {
/* line: 137, address: 0x605b4f5c */         v21 = *(unsigned __int8 *)(a1 + 6932);
/* line: 138, address: 0x605b4f60 */         v22 = v21 == 255;
/* line: 139, address: 0x605b4f64 */         if ( v21 != 255 )
/* line: 140, address: 0x605b4f64 */           v11 = 1;
/* line: 141 */       }
/* line: 142 */       else
/* line: 143 */       {
/* line: 144, address: 0x605b4f70 */         v21 = *(unsigned __int8 *)(a1 + 6928);
/* line: 145, address: 0x605b4f74 */         v22 = v21 == 255;
/* line: 146 */       }
/* line: 147, address: 0x605b4f78 */       if ( !v22 )
/* line: 148, address: 0x605b4f78 */         *v12 = v21;
/* line: 149, address: 0x605b4f7c */       if ( *(_BYTE *)(v13 + 17) )
/* line: 150 */       {
/* line: 151, address: 0x605b4f8c */         v23 = *(unsigned __int8 *)(a1 + 6944);
/* line: 152, address: 0x605b4f90 */         v24 = v23 == 255;
/* line: 153, address: 0x605b4f94 */         if ( v23 != 255 )
/* line: 154, address: 0x605b4f94 */           v11 = 1;
/* line: 155 */       }
/* line: 156 */       else
/* line: 157 */       {
/* line: 158, address: 0x605b4fa0 */         v23 = *(unsigned __int8 *)(a1 + 6940);
/* line: 159, address: 0x605b4fa4 */         v24 = v23 == 255;
/* line: 160 */       }
/* line: 161, address: 0x605b4fa8 */       if ( !v24 )
/* line: 162, address: 0x605b4fa8 */         *v12 = v23;
/* line: 163, address: 0x605b4fac */       if ( *(_BYTE *)(v13 + 17) )
/* line: 164 */       {
/* line: 165, address: 0x605b4fbc */         v25 = *(unsigned __int8 *)(a1 + 6956);
/* line: 166, address: 0x605b4fc4 */         if ( v25 != 255 )
/* line: 167 */         {
/* line: 168, address: 0x605b4fc8 */           *v12 = v25;
/* line: 169 */ LABEL_60:
/* line: 170, address: 0x605b5038 */           v7 = 2;
/* line: 171, address: 0x605b5044 */           *(_BYTE *)(a1 + 6849) = 3;
/* line: 172, address: 0x605b5044 */           return v7;
/* line: 173 */         }
/* line: 174 */       }
/* line: 175 */       else
/* line: 176 */       {
/* line: 177, address: 0x605b4fd4 */         v26 = *(unsigned __int8 *)(a1 + 6952);
/* line: 178, address: 0x605b4fdc */         if ( v26 != 255 )
/* line: 179, address: 0x605b4fdc */           *v12 = v26;
/* line: 180 */       }
/* line: 181, address: 0x605b4ff0 */       if ( !(v11 | (*(_BYTE *)(v13 + 17) == 0)) )
/* line: 182 */       {
/* line: 183, address: 0x605b4ffc */         v27 = *(unsigned __int8 *)(a1 + 6916);
/* line: 184, address: 0x605b5004 */         if ( v27 != 255 )
/* line: 185, address: 0x605b5004 */           *v12 = v27;
/* line: 186, address: 0x605b500c */         v28 = *(unsigned __int8 *)(a1 + 6928);
/* line: 187, address: 0x605b5014 */         if ( v28 != 255 )
/* line: 188, address: 0x605b5014 */           *v12 = v28;
/* line: 189, address: 0x605b501c */         v29 = *(unsigned __int8 *)(a1 + 6940);
/* line: 190, address: 0x605b5024 */         if ( v29 != 255 )
/* line: 191, address: 0x605b5024 */           *v12 = v29;
/* line: 192, address: 0x605b502c */         v30 = *(unsigned __int8 *)(a1 + 6952);
/* line: 193, address: 0x605b5034 */         if ( v30 != 255 )
/* line: 194, address: 0x605b5034 */           *v12 = v30;
/* line: 195 */       }
/* line: 196, address: 0x605b5034 */       goto LABEL_60;
/* line: 197 */     }
/* line: 198 */   }
/* line: 199, address: 0x605b4e1c */   return v7;
/* line: 200 */ }