#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
unsigned int __fastcall sub_601349FC(int a1, _DWORD *a2);

/* ---- forward declarations for functions defined below ---- */
unsigned int __fastcall sub_601349FC(int a1, _DWORD *a2);

/* ---- forward declarations for functions defined below ---- */
unsigned int __fastcall sub_601349FC(int a1, _DWORD *a2);

/* ---- forward declarations for functions defined below ---- */
unsigned int __fastcall sub_601349FC(int a1, _DWORD *a2);

/* ---- forward declarations for functions defined below ---- */
unsigned int __fastcall sub_601349FC(int a1, _DWORD *a2);

/* ---- forward declarations for functions defined below ---- */
unsigned int __fastcall sub_601349FC(int a1, _DWORD *a2);
/* line: 0, address: 0x601349fc */ unsigned int __fastcall sub_601349FC(int a1, _DWORD *a2)
/* line: 1 */ {
/* line: 2 */   unsigned __int8 *v4; // r6
/* line: 3 */   int v5; // r7
/* line: 4 */   int v6; // r0
/* line: 5 */   unsigned int result; // r0
/* line: 6 */   int v8; // r6
/* line: 7 */   bool v9; // zf
/* line: 8 */ 
/* line: 9, address: 0x60134a08 */   v4 = (unsigned __int8 *)a2[16];
/* line: 10, address: 0x60134a0c */   v5 = *(_DWORD *)(a1 + 64);
/* line: 11, address: 0x60134a10 */   v6 = v4[533];
/* line: 12, address: 0x60134a18 */   if ( v6 == 4 )
/* line: 13 */   {
/* line: 14, address: 0x60134b0c */     result = sub_602A25C0(a1);
/* line: 15, address: 0x60134b10 */     v9 = result == 0;
/* line: 16, address: 0x60134b14 */     if ( !result )
/* line: 17 */     {
/* line: 18, address: 0x60134b14 */       result = a2[35];
/* line: 19, address: 0x60134b18 */       v9 = result == 3;
/* line: 20 */     }
/* line: 21, address: 0x60134b1c */     if ( v9 )
/* line: 22 */     {
/* line: 23, address: 0x60134b2c */       *(_BYTE *)(a1 + 110) |= 2u;
/* line: 24, address: 0x60134b40 */       return (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v5 + 316))(v5, a2);
/* line: 25 */     }
/* line: 26, address: 0x60134b40 */     return result;
/* line: 27 */   }
/* line: 28, address: 0x60134a20 */   if ( v6 == 2 )
/* line: 29 */   {
/* line: 30, address: 0x60134b4c */     result = sub_602A25C0(a1);
/* line: 31, address: 0x60134b54 */     if ( result )
/* line: 32, address: 0x60134b54 */       return result;
/* line: 33, address: 0x60134b58 */     result = v4[84];
/* line: 34, address: 0x60134b60 */     if ( result > 3 )
/* line: 35, address: 0x60134b60 */       return result;
/* line: 36, address: 0x60134b64 */     result = a2[35];
/* line: 37, address: 0x60134b6c */     if ( result == 15 )
/* line: 38, address: 0x60134b6c */       return result;
/* line: 39, address: 0x60134b88 */     if ( result != 3 || !(*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v5 + 316))(v5, a2) )
/* line: 40 */     {
/* line: 41, address: 0x60134bb0 */       if ( _cxa_guard_acquire_0(13087612) )
/* line: 42 */       {
/* line: 43, address: 0x60134bd0 */         MEMORY[0xC7B378] = 12320956;
/* line: 44, address: 0x60134bdc */         _cxa_guard_release_0(13087612);
/* line: 45 */       }
/* line: 46, address: 0x60134bf4 */       result = (**(int (__fastcall ***)(unsigned __int8 *, int))v4)(v4, 13087608);
/* line: 47, address: 0x60134bfc */       if ( v4 )
/* line: 48 */       {
/* line: 49, address: 0x60134c00 */         result ^= 1u;
/* line: 50, address: 0x60134c04 */         if ( !result )
/* line: 51 */         {
/* line: 52, address: 0x60134c14 */           result = (*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v4 + 1156))(v4);
/* line: 53, address: 0x60134c1c */           if ( !result )
/* line: 54 */           {
/* line: 55, address: 0x60134c20 */             result = a2[34];
/* line: 56, address: 0x60134c28 */             if ( result != 15 )
/* line: 57 */             {
/* line: 58, address: 0x60134c30 */               v8 = a2[16];
/* line: 59, address: 0x60134c4c */               result = _cxa_guard_acquire_0(13087612);
/* line: 60, address: 0x60134c54 */               if ( result )
/* line: 61 */               {
/* line: 62, address: 0x60134c6c */                 MEMORY[0xC7B378] = 12320956;
/* line: 63, address: 0x60134c78 */                 result = _cxa_guard_release_0(13087612);
/* line: 64 */               }
/* line: 65, address: 0x60134c80 */               if ( v8 )
/* line: 66, address: 0x60134c80 */                 goto LABEL_33;
/* line: 67 */             }
/* line: 68 */           }
/* line: 69 */         }
/* line: 70 */       }
/* line: 71, address: 0x60134c80 */       return result;
/* line: 72 */     }
/* line: 73, address: 0x60134b90 */     goto LABEL_40;
/* line: 74 */   }
/* line: 75, address: 0x60134a28 */   if ( v6 != 1 )
/* line: 76 */   {
/* line: 77, address: 0x60134cc0 */     result = a2[35];
/* line: 78, address: 0x60134cc8 */     if ( result == 9 )
/* line: 79 */     {
/* line: 80, address: 0x60134cdc */       if ( (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v5 + 320))(v5, a2) )
/* line: 81, address: 0x60134ce4 */         goto LABEL_40;
/* line: 82, address: 0x60134ce8 */       result = a2[35];
/* line: 83 */     }
/* line: 84, address: 0x60134cf0 */     if ( result != 19 )
/* line: 85, address: 0x60134cf0 */       return result;
/* line: 86, address: 0x60134d04 */     result = (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v5 + 324))(v5, a2);
/* line: 87, address: 0x60134d0c */     if ( !result )
/* line: 88, address: 0x60134d0c */       return result;
/* line: 89 */ LABEL_40:
/* line: 90, address: 0x60134d10 */     result = *(unsigned __int8 *)(a1 + 110) | 2;
/* line: 91, address: 0x60134d18 */     *(_BYTE *)(a1 + 110) = result;
/* line: 92, address: 0x60134d18 */     return result;
/* line: 93 */   }
/* line: 94, address: 0x60134a34 */   result = sub_602A25C0(a1);
/* line: 95, address: 0x60134a3c */   if ( result )
/* line: 96, address: 0x60134a3c */     return result;
/* line: 97, address: 0x60134a5c */   if ( a2[35] == 3 && (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v5 + 316))(v5, a2) )
/* line: 98, address: 0x60134a64 */     goto LABEL_40;
/* line: 99, address: 0x60134a68 */   result = a2[34];
/* line: 100, address: 0x60134a70 */   if ( result != 15 )
/* line: 101 */   {
/* line: 102, address: 0x60134a80 */     result = (*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v4 + 1156))(v4);
/* line: 103, address: 0x60134a88 */     if ( !result )
/* line: 104 */     {
/* line: 105, address: 0x60134a8c */       result = a2[34];
/* line: 106, address: 0x60134a94 */       if ( result != 15 )
/* line: 107 */       {
/* line: 108, address: 0x60134a9c */         v8 = a2[16];
/* line: 109, address: 0x60134ab8 */         result = _cxa_guard_acquire_0(13087612);
/* line: 110, address: 0x60134ac0 */         if ( result )
/* line: 111 */         {
/* line: 112, address: 0x60134ad8 */           MEMORY[0xC7B378] = 12320956;
/* line: 113, address: 0x60134ae4 */           result = _cxa_guard_release_0(13087612);
/* line: 114 */         }
/* line: 115, address: 0x60134aec */         if ( v8 )
/* line: 116 */         {
/* line: 117 */ LABEL_33:
/* line: 118, address: 0x60134c84 */           result = (**(int (__fastcall ***)(int, int))v8)(v8, 13087608);
/* line: 119, address: 0x60134ca0 */           if ( result == 1 )
/* line: 120, address: 0x60134cb8 */             return (*(int (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)v8 + 1164))(v8, a1, a2);
/* line: 121 */         }
/* line: 122 */       }
/* line: 123 */     }
/* line: 124 */   }
/* line: 125, address: 0x60134cbc */   return result;
/* line: 126 */ }