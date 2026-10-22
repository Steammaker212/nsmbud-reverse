#include "nsmbudx_prelude.h"
/* line: 0, address: 0x601597e8 */ bool __fastcall ActiveCollider_doOverlapMaybe(int a1, int a2)
/* line: 1 */ {
/* line: 2 */   _BOOL4 result; // r0
/* line: 3 */   int v5; // r1
/* line: 4 */   int v6; // r2
/* line: 5 */   int v7; // r3
/* line: 6 */   bool v8; // zf
/* line: 7 */   bool v9; // zf
/* line: 8 */   int v10; // r7
/* line: 9 */   int v11; // r2
/* line: 10 */   int v12; // r8
/* line: 11 */   int v13; // r1
/* line: 12 */   int v14; // r6
/* line: 13 */   int v15; // r11
/* line: 14 */   int v16; // r0
/* line: 15 */   int v17; // r1
/* line: 16 */   int v18; // [sp+4h] [bp-10h]
/* line: 17 */   int v19; // [sp+8h] [bp-Ch]
/* line: 18 */   void (__fastcall *v20)(int, int); // [sp+Ch] [bp-8h]
/* line: 19 */   void (__fastcall *v21)(int, int); // [sp+10h] [bp-4h]
/* line: 20 */ 
/* line: 21, address: 0x601597f8 */   result = 0;
/* line: 22, address: 0x60159800 */   if ( a2 != a1 )
/* line: 23 */   {
/* line: 24, address: 0x60159804 */     v5 = *(_DWORD *)(a1 + 64);
/* line: 25, address: 0x60159808 */     v6 = *(_DWORD *)(a2 + 64);
/* line: 26, address: 0x60159810 */     if ( v6 != v5 )
/* line: 27 */     {
/* line: 28, address: 0x60159814 */       v7 = *(_DWORD *)(a1 + 68);
/* line: 29, address: 0x60159818 */       v8 = v6 == v7;
/* line: 30, address: 0x6015981c */       if ( v6 != v7 )
/* line: 31, address: 0x60159820 */         v8 = v5 == *(_DWORD *)(a2 + 68);
/* line: 32, address: 0x60159824 */       if ( !v8 )
/* line: 33 */       {
/* line: 34, address: 0x6015982c */         v9 = (*(_BYTE *)(a1 + 110) & 2) == 0;
/* line: 35, address: 0x60159830 */         if ( (*(_BYTE *)(a1 + 110) & 2) == 0 )
/* line: 36, address: 0x60159834 */           v9 = (*(_BYTE *)(a2 + 110) & 2) == 0;
/* line: 37, address: 0x60159864 */         if ( v9
/* line: 38 */           && (*(_BYTE *)(a1 + 108) & *(_BYTE *)(a2 + 108)) != 0
/* line: 39 */           && *(unsigned __int8 *)(a1 + 109) == *(unsigned __int8 *)(a2 + 109) )
/* line: 40 */         {
/* line: 41, address: 0x60159868 */           v10 = *(_DWORD *)(a2 + 136);
/* line: 42, address: 0x60159874 */           v11 = *(_DWORD *)(a1 + 144) & (1 << v10);
/* line: 43, address: 0x6015987c */           if ( !v11 )
/* line: 44, address: 0x6015987c */             return *(_DWORD *)(a1 + 92) != 0;
/* line: 45, address: 0x60159884 */           v12 = 1 << *(_DWORD *)(a1 + 136);
/* line: 46, address: 0x60159888 */           v13 = *(_DWORD *)(a2 + 144);
/* line: 47, address: 0x60159890 */           if ( (v13 & v12) == 0 )
/* line: 48, address: 0x60159890 */             return *(_DWORD *)(a1 + 92) != 0;
/* line: 49, address: 0x601598a8 */           v18 = *(_DWORD *)(a2 + 152);
/* line: 50, address: 0x601598b0 */           v21 = *(void (__fastcall **)(int, int))(a2 + 156);
/* line: 51, address: 0x601598c0 */           v19 = *(_DWORD *)(a1 + 152);
/* line: 52, address: 0x601598c8 */           v20 = *(void (__fastcall **)(int, int))(a1 + 156);
/* line: 53, address: 0x601598cc */           v14 = *(_DWORD *)(a1 + 148) & (1 << *(_DWORD *)(a2 + 140));
/* line: 54, address: 0x601598d8 */           if ( (v11 & 2) == 0 || v14 )
/* line: 55 */           {
/* line: 56, address: 0x601598dc */             v15 = *(_DWORD *)(a2 + 148) & (1 << *(_DWORD *)(a1 + 140));
/* line: 57, address: 0x601598ec */             if ( v15 || ((unsigned __int8)v13 & (unsigned __int8)v12 & 2) == 0 )
/* line: 58 */             {
/* line: 59, address: 0x601598f4 */               v16 = *(_DWORD *)(a1 + 132);
/* line: 60, address: 0x601598f8 */               v17 = *(_DWORD *)(a2 + 132);
/* line: 61, address: 0x60159904 */               if ( *(_DWORD *)(MEMORY[0xC99D70] + 1828) )
/* line: 62 */               {
/* line: 63, address: 0x60159928 */                 if ( !(*(int (__fastcall **)(int, int))(16 * v17 + 0xBD4810 + 4 * v16))(a1, a2) )
/* line: 64, address: 0x60159930 */                   return *(_DWORD *)(a1 + 92) != 0;
/* line: 65 */               }
/* line: 66, address: 0x60159958 */               else if ( (*(int (__fastcall **)(int, int))(16 * v17 + 0xBD47D0 + 4 * v16))(a1, a2) != 1 )
/* line: 67 */               {
/* line: 68, address: 0x60159a1c */                 return *(_DWORD *)(a1 + 92) != 0;
/* line: 69 */               }
/* line: 70, address: 0x60159964 */               if ( (v18 & 4) == 0 )
/* line: 71 */               {
/* line: 72, address: 0x60159978 */                 *(_DWORD *)(a1 + 92) |= 1 << v10;
/* line: 73, address: 0x6015997c */                 if ( v14 )
/* line: 74, address: 0x60159984 */                   *(_DWORD *)(a1 + 100) |= v14;
/* line: 75, address: 0x6015998c */                 if ( v15 )
/* line: 76, address: 0x60159994 */                   *(_DWORD *)(a1 + 96) |= v15;
/* line: 77 */               }
/* line: 78, address: 0x601599a4 */               if ( (v19 & 4) == 0 )
/* line: 79 */               {
/* line: 80, address: 0x601599b4 */                 *(_DWORD *)(a2 + 92) |= v12;
/* line: 81, address: 0x601599b8 */                 if ( v14 )
/* line: 82, address: 0x601599c0 */                   *(_DWORD *)(a2 + 96) |= v14;
/* line: 83, address: 0x601599c8 */                 if ( v15 )
/* line: 84, address: 0x601599d0 */                   *(_DWORD *)(a2 + 100) |= v15;
/* line: 85 */               }
/* line: 86, address: 0x601599e0 */               if ( v20 && (v18 & 4) == 0 )
/* line: 87, address: 0x601599ec */                 v20(a1, a2);
/* line: 88, address: 0x601599f4 */               if ( (v19 & 4) == 0 )
/* line: 89 */               {
/* line: 90, address: 0x60159a00 */                 if ( v21 )
/* line: 91, address: 0x60159a10 */                   v21(a2, a1);
/* line: 92 */               }
/* line: 93, address: 0x60159a10 */               return *(_DWORD *)(a1 + 92) != 0;
/* line: 94 */             }
/* line: 95 */           }
/* line: 96 */         }
/* line: 97 */       }
/* line: 98 */     }
/* line: 99 */   }
/* line: 100, address: 0x60159840 */   return result;
/* line: 101 */ }