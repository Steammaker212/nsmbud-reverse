/* sub_6071F6CC
 * address: 0x6071F6CC   size: 788   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6071F6CC(_DWORD *a1, int a2)
{
  char v2; // r12
  int v5; // r6
  float v6; // s16
  float v7; // s18
  int v8; // r0
  int v9; // r6
  int v10; // r5
  int v11; // r3
  _DWORD *v12; // r0
  int v13; // r0
  int v14; // r1
  unsigned int v15; // r2
  _DWORD *v16; // r0
  _DWORD *v17; // r7
  _DWORD *v18; // r6
  _DWORD *v19; // r11
  int v20; // r5
  int v21; // r4
  int v22; // r4
  int v23; // r5
  int v24; // r2
  int v25; // r5
  int v26; // r8
  __int64 v27; // r0
  _DWORD *v29; // [sp+Ch] [bp-164h]
  _DWORD *v30; // [sp+10h] [bp-160h]
  _DWORD v31[4]; // [sp+14h] [bp-15Ch] BYREF
  _BYTE v32[172]; // [sp+24h] [bp-14Ch] BYREF
  __int16 v33; // [sp+D0h] [bp-A0h] BYREF
  char v34; // [sp+D2h] [bp-9Eh]
  char v35; // [sp+FBh] [bp-75h]
  char v36; // [sp+FDh] [bp-73h]
  char v37; // [sp+129h] [bp-47h]

  v5 = FIELD_U32(a2, 28);
  if ( ((unsigned int)&dword_60C8D9F4 & ~(1618081528 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D9F4) )
  {
    dword_60C8D9F0 = (int)&off_60BD9634;
    _cxa_guard_release(&dword_60C8D9F4);
  }
  v6 = 0.0;
  v7 = 1.0;
  if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C8D9F0) == 1 )
  {
    v6 = (*(float (__fastcall **)(int))(*(_DWORD *)v5 + 16))(v5);
    v7 = (*(float (__fastcall **)(int, float))(*(_DWORD *)v5 + 20))(v5, v6);
  }
  v8 = sub_6090B350(&v33);
  v34 = 1;
  v36 = 5;
  v35 = 1;
  v37 = 0;
  v33 = 257;
  sub_6090B4B0(v8, FIELD_U32(a2, 40));
  sub_6090C77C(v32, v6, v7, -1.0, 1.0, -1.0, 1.0);
  sub_6091DD8C(a1[656], FIELD_U32(a2, 40), 1);
  v9 = FIELD_U32(a2, 40);
  v10 = a1[656];
  v11 = sub_6090BE54(v32);
  v12 = *(_DWORD **)(v10 + 612);
  if ( *v12 != -1 )
    sub_6091B890(v12, v9, 16, v11);
  v13 = a1[656];
  v14 = FIELD_U32(a2, 40);
  v31[0] = 0;
  v31[1] = 0;
  v31[2] = 1048608897;
  v31[3] = 1048608897;
  v15 = FIELD_U32(v13, 608);
  v16 = *(_DWORD **)(v13 + 612);
  if ( v15 > 1 )
    v16 += 3;
  if ( *v16 != -1 )
    sub_6091B890(v16, v14, 4, v31);
  v17 = a1 + 844;
  v30 = a1 + 1102;
  sub_60920EC8(a1 + 844, a1[1102]);
  v18 = a1 + 1762;
  v19 = a1 + 930;
  sub_60920EC8(a1 + 930, a1[1762]);
  v29 = a1;
  v20 = FIELD_U32(a2, 40);
  v21 = a1[656];
  sub_6091D95C(v21);
  sub_60920FDC(v17, v20, FIELD_U32(v21, 636), -1, 0);
  v22 = *(v18 - 1106);
  v23 = FIELD_U32(a2, 40);
  sub_6091D95C(v22);
  v24 = FIELD_U32(v22, 636);
  if ( FIELD_U32(v22, 632) > 1u )
    v24 += 12;
  sub_60920FDC(v19, v23, v24, -1, 0);
  sub_60922278(v18 - 1022, FIELD_U32(a2, 40));
  if ( FIELD_U32(dword_60C99DD4, 764) != 3 )
  {
    v25 = *(_DWORD *)(FIELD_U32(a2, 40) + 192);
    v26 = v29[826];
    v27 = dword_60CC746C(v29 + 832);
    dword_60CC7874(v25, v26, v29[825], 6, v27, HIDWORD(v27));
  }
  if ( *v18 )
  {
    sub_6093EA98(dword_60CD09F8, *v18);
    *v18 = 0;
  }
  if ( *v30 )
  {
    sub_6093EA98(dword_60CD09F8, *v30);
    *v30 = 0;
  }
  return nullsub_113(v32);
}
