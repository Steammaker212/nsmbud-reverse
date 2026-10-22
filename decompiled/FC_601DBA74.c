#include "nsmbudx_prelude.h"
/* line: 0, address: 0x601dba74 */ int __fastcall sub_601DBA74(_DWORD *a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r1
/* line: 3 */   int v3; // r2
/* line: 4 */   int v4; // r1
/* line: 5 */   int v5; // r2
/* line: 6 */   int v6; // r2
/* line: 7 */   _DWORD v8[3]; // [sp+4h] [bp-3Ch] BYREF
/* line: 8 */   _DWORD v9[12]; // [sp+10h] [bp-30h] BYREF
/* line: 9 */ 
/* line: 10, address: 0x601dba80 */   sub_601861EC(a1);
/* line: 11, address: 0x601dba88 */   StateMgr::execute(a1 + 74);
/* line: 12, address: 0x601dba9c */   if ( sub_60235E50(a1 + 112) == 1 )
/* line: 13 */   {
/* line: 14, address: 0x601dbaa8 */     v2 = a1[21];
/* line: 15, address: 0x601dbaa8 */     v3 = a1[22];
/* line: 16, address: 0x601dbaac */     v9[0] = a1[20];
/* line: 17, address: 0x601dbaac */     v9[1] = v2;
/* line: 18, address: 0x601dbaac */     v9[2] = v3;
/* line: 19, address: 0x601dbac0 */     EffectData_update(a1 + 112, v9, 0, 0);
/* line: 20 */   }
/* line: 21, address: 0x601dbad0 */   v4 = a1[45];
/* line: 22, address: 0x601dbad0 */   v5 = a1[46];
/* line: 23, address: 0x601dbad4 */   v8[0] = a1[44];
/* line: 24, address: 0x601dbad4 */   v8[1] = v4;
/* line: 25, address: 0x601dbad4 */   v8[2] = v5;
/* line: 26, address: 0x601dbae4 */   sub_601927EC(v9, a1 + 32, v8, a1 + 20);
/* line: 27, address: 0x601dbaf4 */   sub_60793FF0(*(_DWORD *)(a1[67] + 4), v9, v6);
/* line: 28, address: 0x601dbb08 */   (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1[67] + 4) + 148))(*(_DWORD *)(a1[67] + 4));
/* line: 29, address: 0x601dbb1c */   if ( sub_6079437C(*(_DWORD *)(a1[67] + 4)) == 1 )
/* line: 30, address: 0x601dbb3c */     sub_601E4AC4(MEMORY[0xC8B13C], 16, 2, 1);
/* line: 31, address: 0x601dbb48 */   return 1;
/* line: 32 */ }