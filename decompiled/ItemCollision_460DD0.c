#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60460DD0(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60460DD0(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60460DD0(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60460DD0(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60460DD0(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60460DD0(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60460DD0(int a1, int a2);
/* line: 0, address: 0x60460dd0 */ int __fastcall sub_60460DD0(int a1, int a2)
/* line: 1 */ {
/* line: 2 */   int (__fastcall ***v4)(_DWORD, int); // r5
/* line: 3 */   int v5; // r4
/* line: 4 */   int (__fastcall ***v6)(_DWORD, int); // r6
/* line: 5 */   int result; // r0
/* line: 6 */   int (__fastcall ***v8)(_DWORD, int); // r5
/* line: 7 */   bool v9; // zf
/* line: 8 */   float v10; // s16
/* line: 9 */   int v11; // r4
/* line: 10 */   int v12; // r0
/* line: 11 */   int v13; // r0
/* line: 12 */ 
/* line: 13, address: 0x60460de4 */   v4 = *(int (__fastcall ****)(_DWORD, int))(a2 + 64);
/* line: 14, address: 0x60460e00 */   if ( _cxa_guard_acquire_0(13087588) )
/* line: 15 */   {
/* line: 16, address: 0x60460e20 */     MEMORY[0xC7B360] = 12320920;
/* line: 17, address: 0x60460e2c */     _cxa_guard_release_0(13087588);
/* line: 18 */   }
/* line: 19, address: 0x60460e34 */   if ( v4 )
/* line: 20 */   {
/* line: 21, address: 0x60460e50 */     v5 = (**v4)(v4, 13087584);
/* line: 22, address: 0x60460e58 */     if ( v5 )
/* line: 23, address: 0x60460e58 */       v5 = (int)v4;
/* line: 24 */   }
/* line: 25 */   else
/* line: 26 */   {
/* line: 27, address: 0x60460e60 */     v5 = 0;
/* line: 28 */   }
/* line: 29, address: 0x60460e68 */   v6 = *(int (__fastcall ****)(_DWORD, int))(a1 + 64);
/* line: 30, address: 0x60460e84 */   result = _cxa_guard_acquire_0(13087768);
/* line: 31, address: 0x60460e8c */   if ( result )
/* line: 32 */   {
/* line: 33, address: 0x60460ea4 */     MEMORY[0xC7B414] = 12320968;
/* line: 34, address: 0x60460eb0 */     result = _cxa_guard_release_0(13087768);
/* line: 35 */   }
/* line: 36, address: 0x60460eb8 */   if ( v6 )
/* line: 37 */   {
/* line: 38, address: 0x60460ed0 */     result = (**v6)(v6, 13087764);
/* line: 39, address: 0x60460ed4 */     v8 = (int (__fastcall ***)(_DWORD, int))result;
/* line: 40, address: 0x60460edc */     if ( result )
/* line: 41, address: 0x60460edc */       v8 = v6;
/* line: 42, address: 0x60460ee0 */     v9 = v5 == 0;
/* line: 43, address: 0x60460ee4 */     if ( v5 )
/* line: 44, address: 0x60460ee4 */       v9 = v8 == 0;
/* line: 45, address: 0x60460ee8 */     if ( !v9 )
/* line: 46 */     {
/* line: 47, address: 0x60460eec */       result = *(unsigned __int8 *)(v5 + 533);
/* line: 48, address: 0x60460ef4 */       if ( result == 3 )
/* line: 49 */       {
/* line: 50, address: 0x60461060 */         if ( Actor::getProfileId((Actor *)v5) == MEMORY[0xAF30A0] )
/* line: 51, address: 0x60461068 */           *((_BYTE *)v8 + 6200) = 1;
/* line: 52, address: 0x60461084 */         if ( Actor::getProfileId((Actor *)v5) == MEMORY[0xAF3520] )
/* line: 53 */         {
/* line: 54, address: 0x604610a4 */           if ( _cxa_guard_acquire_0(13164588) )
/* line: 55 */           {
/* line: 56, address: 0x604610c4 */             MEMORY[0xC8E028] = 12321964;
/* line: 57, address: 0x604610d0 */             _cxa_guard_release_0(13164588);
/* line: 58 */           }
/* line: 59, address: 0x604610e8 */           v12 = (**(int (__fastcall ***)(int, int))v5)(v5, 13164584);
/* line: 60, address: 0x604610f8 */           if ( v12 )
/* line: 61, address: 0x604610f8 */             v12 = v5;
/* line: 62, address: 0x60461104 */           if ( sub_60256CFC(v12, a2, *(_DWORD *)(a1 + 64)) == 1 )
/* line: 63, address: 0x6046110c */             *((_BYTE *)v8 + 6255) = 1;
/* line: 64 */         }
/* line: 65, address: 0x60461110 */         result = *(unsigned __int8 *)(v5 + 533);
/* line: 66 */       }
/* line: 67, address: 0x60460eec */       else if ( !*(_BYTE *)(v5 + 533) )
/* line: 68 */       {
/* line: 69, address: 0x60460f04 */         result = Actor::getProfileId((Actor *)v5);
/* line: 70, address: 0x60460f18 */         if ( result == MEMORY[0xAF3664] )
/* line: 71 */         {
/* line: 72, address: 0x60460f38 */           if ( _cxa_guard_acquire_0(13087768) )
/* line: 73 */           {
/* line: 74, address: 0x60460f58 */             MEMORY[0xC7B414] = 12320968;
/* line: 75, address: 0x60460f64 */             _cxa_guard_release_0(13087768);
/* line: 76 */           }
/* line: 77, address: 0x60460f7c */           result = (**(int (__fastcall ***)(int, int))v5)(v5, 13087764);
/* line: 78, address: 0x60460f84 */           if ( result == 1 )
/* line: 79 */           {
/* line: 80, address: 0x60460f88 */             result = 6192;
/* line: 81, address: 0x60460f8c */             if ( !*(_DWORD *)(v5 + 6192) )
/* line: 82 */             {
/* line: 83, address: 0x60460f98 */               result = (int)v8[1548];
/* line: 84, address: 0x60460fb0 */               if ( !result && *(float *)(a1 + 260) >= 0.0 )
/* line: 85 */               {
/* line: 86, address: 0x60460fb8 */                 v10 = *(float *)(a1 + 196);
/* line: 87, address: 0x60460fbc */                 v11 = *(_DWORD *)(a1 + 64);
/* line: 88, address: 0x60460fd8 */                 result = _cxa_guard_acquire_0(13087588);
/* line: 89, address: 0x60460fe0 */                 if ( result )
/* line: 90 */                 {
/* line: 91, address: 0x60460ff8 */                   MEMORY[0xC7B360] = 12320920;
/* line: 92, address: 0x60461004 */                   result = _cxa_guard_release_0(13087588);
/* line: 93 */                 }
/* line: 94, address: 0x6046100c */                 if ( v11 )
/* line: 95 */                 {
/* line: 96, address: 0x60461024 */                   result = (**(int (__fastcall ***)(int, int))v11)(v11, 13087584);
/* line: 97, address: 0x6046102c */                   if ( result == 1 )
/* line: 98, address: 0x6046103c */                     *(float *)(v11 + 108) = *(float *)(v11 + 108) + (float)(v10 * 0.25);
/* line: 99 */                 }
/* line: 100 */               }
/* line: 101 */             }
/* line: 102 */           }
/* line: 103 */         }
/* line: 104, address: 0x60461044 */         return result;
/* line: 105 */       }
/* line: 106, address: 0x60461118 */       if ( result == 1 )
/* line: 107, address: 0x60461118 */         goto LABEL_59;
/* line: 108, address: 0x60461120 */       if ( result != 2 )
/* line: 109, address: 0x60461120 */         return result;
/* line: 110, address: 0x6046112c */       if ( *(_DWORD *)(a2 + 140) == 15 )
/* line: 111 */       {
/* line: 112, address: 0x60461138 */         v8[1552] = (int (__fastcall **)(_DWORD, int))-1;
/* line: 113, address: 0x60461140 */         return 6208;
/* line: 114 */       }
/* line: 115, address: 0x6046115c */       if ( Actor::getProfileId((Actor *)v8) != MEMORY[0xAF368C] )
/* line: 116, address: 0x6046115c */         goto LABEL_59;
/* line: 117, address: 0x6046117c */       if ( _cxa_guard_acquire_0(13087752) )
/* line: 118 */       {
/* line: 119, address: 0x6046119c */         MEMORY[0xC7B404] = 12320944;
/* line: 120, address: 0x604611a8 */         _cxa_guard_release_0(13087752);
/* line: 121 */       }
/* line: 122, address: 0x604611e4 */       if ( (**(int (__fastcall ***)(int, int))v5)(v5, 13087748) != 1
/* line: 123 */         || (v13 = sub_607D6C28(v5)) == 0
/* line: 124 */         || (result = sub_6075EE0C(v13), result == 1) )
/* line: 125 */       {
/* line: 126 */ LABEL_59:
/* line: 127, address: 0x6046120c */         if ( *(_BYTE *)(v5 + 533) != 1 || Actor::getProfileId((Actor *)v8) != MEMORY[0xAF368C] )
/* line: 128, address: 0x6046120c */           goto LABEL_56;
/* line: 129, address: 0x6046122c */         if ( _cxa_guard_acquire_0(13087604) )
/* line: 130 */         {
/* line: 131, address: 0x6046124c */           MEMORY[0xC7B370] = 12320944;
/* line: 132, address: 0x60461258 */           _cxa_guard_release_0(13087604);
/* line: 133 */         }
/* line: 134, address: 0x60461270 */         result = (**(int (__fastcall ***)(int, int))v5)(v5, 13087600);
/* line: 135, address: 0x60461278 */         if ( result == 1 )
/* line: 136 */         {
/* line: 137, address: 0x60461280 */           result = sub_6075EE0C(v5);
/* line: 138, address: 0x60461288 */           if ( result == 1 )
/* line: 139 */           {
/* line: 140 */ LABEL_56:
/* line: 141, address: 0x6046128c */             result = *(char *)(v5 + 84);
/* line: 142, address: 0x60461294 */             v8[1552] = (int (__fastcall **)(_DWORD, int))result;
/* line: 143 */           }
/* line: 144 */         }
/* line: 145 */       }
/* line: 146 */     }
/* line: 147 */   }
/* line: 148, address: 0x60461044 */   return result;
/* line: 149 */ }