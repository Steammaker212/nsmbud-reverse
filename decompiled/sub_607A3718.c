#include "nsmbudx_prelude.h"
/* line: 0, address: 0x607a3718 */ int __fastcall sub_607A3718(int a1)
/* line: 1 */ {
/* line: 2 */   unsigned int v2; // r2
/* line: 3 */   _BOOL4 v3; // r1
/* line: 4 */   int v4; // r0
/* line: 5 */   bool v5; // cf
/* line: 6 */   int v6; // r2
/* line: 7 */   int v7; // r2
/* line: 8 */   int v8; // r2
/* line: 9 */   int v9; // r5
/* line: 10 */   unsigned int v10; // r0
/* line: 11 */   int v11; // r4
/* line: 12 */   int v12; // r1
/* line: 13 */   int result; // r0
/* line: 14 */   int v14; // r0
/* line: 15 */   int v15; // t1
/* line: 16 */ 
/* line: 17, address: 0x607a3730 */   (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 632))(a1);
/* line: 18, address: 0x607a3750 */   *(_DWORD *)(MEMORY[0xCC436C] + 152) &= ~(1 << *(_BYTE *)(a1 + 84));
/* line: 19, address: 0x607a375c */   if ( sub_6078A50C() != 1 )
/* line: 20 */   {
/* line: 21, address: 0x607a3764 */     v2 = *(unsigned __int8 *)(a1 + 84);
/* line: 22, address: 0x607a3768 */     v3 = 0;
/* line: 23, address: 0x607a3770 */     v4 = (char)v2;
/* line: 24, address: 0x607a3774 */     v5 = v2 >= 6;
/* line: 25, address: 0x607a3778 */     v6 = 0;
/* line: 26, address: 0x607a377c */     if ( !v5 )
/* line: 27, address: 0x607a377c */       v6 = v4;
/* line: 28, address: 0x607a3788 */     v7 = MEMORY[0xC99DD4] + 72 * v6;
/* line: 29, address: 0x607a378c */     if ( *(_BYTE *)(v7 + 292) )
/* line: 30, address: 0x607a37a4 */       v3 = *(_DWORD *)(v7 + 296) < 1;
/* line: 31, address: 0x607a37a8 */     v8 = *(_DWORD *)(a1 + 1216);
/* line: 32, address: 0x607a37bc */     if ( (v8 & 0x8000000) != 0 || v3 | ((unsigned __int8)(*(_BYTE *)(a1 + 1205) & 0x40) >> 6) )
/* line: 33 */     {
/* line: 34, address: 0x607a37e0 */       *(_DWORD *)(MEMORY[0xCC436C] + 152) |= 1 << v4;
/* line: 35, address: 0x607a37e4 */       v8 = *(_DWORD *)(a1 + 1216);
/* line: 36 */     }
/* line: 37, address: 0x607a37f8 */     if ( (v8 & 0x8000000) == 0 && (*(_BYTE *)(a1 + 1205) & 0x40) != 0 )
/* line: 38 */     {
/* line: 39, address: 0x607a3808 */       *(_DWORD *)(a1 + 1320) = 0;
/* line: 40, address: 0x607a380c */       *(_DWORD *)(a1 + 11388) = 0;
/* line: 41, address: 0x607a3814 */       *(_DWORD *)(a1 + 11384) = 0;
/* line: 42, address: 0x607a3828 */       (*(void (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)a1 + 144))(a1, 0, 0);
/* line: 43 */     }
/* line: 44 */   }
/* line: 45, address: 0x607a3830 */   if ( !sub_6079DF08(a1) )
/* line: 46, address: 0x607a3840 */     sub_6079EA38(a1);
/* line: 47, address: 0x607a384c */   *(_DWORD *)(a1 + 1204) |= 0x40u;
/* line: 48, address: 0x607a3854 */   sub_60768030(a1);
/* line: 49, address: 0x607a3860 */   *(_DWORD *)(a1 + 1204) &= ~0x40u;
/* line: 50, address: 0x607a3868 */   if ( !sub_607C7184(a1) )
/* line: 51, address: 0x607a3878 */     sub_60767E68(a1);
/* line: 52, address: 0x607a3890 */   v9 = MEMORY[0xC99DD4];
/* line: 53, address: 0x607a3894 */   v10 = *(unsigned __int8 *)(a1 + 84);
/* line: 54, address: 0x607a3898 */   v11 = 0;
/* line: 55, address: 0x607a389c */   v12 = *(_DWORD *)(MEMORY[0xCC6D78] + 32);
/* line: 56, address: 0x607a38a4 */   if ( v10 < 6 )
/* line: 57, address: 0x607a38a4 */     v11 = (char)v10;
/* line: 58, address: 0x607a38ac */   result = *(_DWORD *)(MEMORY[0xCC6D78] + 32);
/* line: 59, address: 0x607a38b4 */   if ( v12 == 3 )
/* line: 60 */   {
/* line: 61, address: 0x607a3928 */     result = *(unsigned __int8 *)(MEMORY[0xCBFA90] + 340);
/* line: 62, address: 0x607a3928 */     if ( !*(_BYTE *)(MEMORY[0xCBFA90] + 340) )
/* line: 63 */     {
/* line: 64, address: 0x607a393c */       result = MEMORY[0xC99DD4] + 72 * v11;
/* line: 65, address: 0x607a3940 */       *(_DWORD *)(result + 300) = 0;
/* line: 66 */     }
/* line: 67 */   }
/* line: 68, address: 0x607a38bc */   else if ( v12 == 2 )
/* line: 69 */   {
/* line: 70, address: 0x607a38cc */     result = sub_6040E274(MEMORY[0xC9A684]);
/* line: 71, address: 0x607a38d4 */     if ( result == 1 )
/* line: 72 */     {
/* line: 73, address: 0x607a38ec */       result = *(unsigned __int8 *)(MEMORY[0xCC6D78] + 109032);
/* line: 74, address: 0x607a38ec */       if ( !*(_BYTE *)(MEMORY[0xCC6D78] + 109032) )
/* line: 75 */       {
/* line: 76, address: 0x607a38fc */         v14 = v9 + 72 * v11;
/* line: 77, address: 0x607a3900 */         v15 = *(_DWORD *)(v14 + 300);
/* line: 78, address: 0x607a3900 */         result = v14 + 300;
/* line: 79, address: 0x607a3908 */         if ( v15 == 8 )
/* line: 80, address: 0x607a3910 */           *(_DWORD *)result = 7;
/* line: 81 */       }
/* line: 82 */     }
/* line: 83 */   }
/* line: 84, address: 0x607a3918 */   return result;
/* line: 85 */ }