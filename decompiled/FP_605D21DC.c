#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_605D21DC(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_605D21DC(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_605D21DC(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_605D21DC(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_605D21DC(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_605D21DC(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_605D21DC(int a1, int a2);
/* line: 0, address: 0x605d21dc */ int __fastcall sub_605D21DC(int a1, int a2)
/* line: 1 */ {
/* line: 2 */   int v2; // r4
/* line: 3 */   int result; // r0
/* line: 4 */   int v5; // r5
/* line: 5 */   int v6; // r7
/* line: 6 */   int v7; // r6
/* line: 7 */   int v8; // r5
/* line: 8 */ 
/* line: 9, address: 0x605d21e0 */   v2 = *(_DWORD *)(a1 + 64);
/* line: 10, address: 0x605d2204 */   result = _cxa_guard_acquire_0(13308420);
/* line: 11, address: 0x605d220c */   if ( result )
/* line: 12 */   {
/* line: 13, address: 0x605d2224 */     MEMORY[0xCB1200] = 12320992;
/* line: 14, address: 0x605d2230 */     result = _cxa_guard_release_0(13308420);
/* line: 15 */   }
/* line: 16, address: 0x605d2238 */   if ( v2 )
/* line: 17 */   {
/* line: 18, address: 0x605d2250 */     result = (**(int (__fastcall ***)(int, int))v2)(v2, 13308416);
/* line: 19, address: 0x605d2258 */     if ( result == 1 )
/* line: 20 */     {
/* line: 21, address: 0x605d2260 */       result = *(unsigned __int8 *)(v2 + 6976);
/* line: 22, address: 0x605d2268 */       if ( result == 255 )
/* line: 23 */       {
/* line: 24, address: 0x605d2270 */         v5 = *(_DWORD *)(a2 + 64);
/* line: 25, address: 0x605d2274 */         v6 = *(unsigned __int8 *)(v5 + 84);
/* line: 26, address: 0x605d227c */         if ( v6 != 255 )
/* line: 27 */         {
/* line: 28, address: 0x605d2280 */           result = *(unsigned __int8 *)(v5 + 533);
/* line: 29, address: 0x605d228c */           if ( (unsigned int)(result - 1) <= 1 )
/* line: 30 */           {
/* line: 31, address: 0x605d2294 */             if ( result != 1 )
/* line: 32 */             {
/* line: 33, address: 0x605d2334 */               if ( _cxa_guard_acquire_0(13087752) )
/* line: 34 */               {
/* line: 35, address: 0x605d2354 */                 MEMORY[0xC7B404] = 12320944;
/* line: 36, address: 0x605d2360 */                 _cxa_guard_release_0(13087752);
/* line: 37 */               }
/* line: 38, address: 0x605d2378 */               (**(void (__fastcall ***)(int, int))v5)(v5, 13087748);
/* line: 39, address: 0x605d2388 */               v7 = sub_607D6C28();
/* line: 40, address: 0x605d2390 */               if ( !v7 )
/* line: 41 */               {
/* line: 42, address: 0x605d23ec */                 v8 = 0;
/* line: 43 */ LABEL_22:
/* line: 44, address: 0x605d23c4 */                 sub_605D1F54(v2, (char)v6, v8);
/* line: 45, address: 0x605d23e8 */                 return StateMgr__changeState((_DWORD *)(v2 + 6084), 13308384);
/* line: 46 */               }
/* line: 47 */ LABEL_19:
/* line: 48, address: 0x605d2394 */               v8 = 0;
/* line: 49, address: 0x605d2394 */               if ( !*(_DWORD *)(v7 + 1320) )
/* line: 50 */               {
/* line: 51, address: 0x605d23ac */                 v8 = 1;
/* line: 52, address: 0x605d23b0 */                 sub_607A27A8((_DWORD *)v7, 1);
/* line: 53, address: 0x605d23b8 */                 sub_607AA6F4(v7);
/* line: 54 */               }
/* line: 55, address: 0x605d23c0 */               sub_607AA68C(v7);
/* line: 56, address: 0x605d23c0 */               goto LABEL_22;
/* line: 57 */             }
/* line: 58, address: 0x605d22b4 */             if ( _cxa_guard_acquire_0(13087604) )
/* line: 59 */             {
/* line: 60, address: 0x605d22d4 */               MEMORY[0xC7B370] = 12320944;
/* line: 61, address: 0x605d22e0 */               _cxa_guard_release_0(13087604);
/* line: 62 */             }
/* line: 63, address: 0x605d22fc */             v7 = (**(int (__fastcall ***)(int, int))v5)(v5, 13087600);
/* line: 64, address: 0x605d2304 */             if ( v7 )
/* line: 65, address: 0x605d2304 */               v7 = v5;
/* line: 66, address: 0x605d2308 */             result = *(unsigned __int8 *)(v7 + 1217);
/* line: 67, address: 0x605d2310 */             if ( (result & 0x10) == 0 )
/* line: 68, address: 0x605d2310 */               goto LABEL_19;
/* line: 69 */           }
/* line: 70 */         }
/* line: 71 */       }
/* line: 72 */     }
/* line: 73 */   }
/* line: 74, address: 0x605d226c */   return result;
/* line: 75 */ }