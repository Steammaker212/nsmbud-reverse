/* sub_6071FD34
 * address: 0x6071FD34   size: 664   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6071FD34(_DWORD *a1, int a2)
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
  int v15; // r2
  int v16; // r3
  int v17; // r7
  unsigned int v18; // r2
  _DWORD *v19; // r0
  _DWORD *v20; // r4
  int v21; // t1
  int v22; // r5
  int v23; // r7
  int v24; // r2
  int v25; // r5
  int v26; // r6
  __int64 v27; // r0
  int result; // r0
  _DWORD v29[4]; // [sp+Ch] [bp-154h] BYREF
  _BYTE v30[172]; // [sp+1Ch] [bp-144h] BYREF
  __int16 v31; // [sp+C8h] [bp-98h] BYREF
  char v32; // [sp+CAh] [bp-96h]
  char v33; // [sp+F1h] [bp-6Fh]
  char v34; // [sp+F3h] [bp-6Dh]
  char v35; // [sp+F5h] [bp-6Bh]
  char v36; // [sp+121h] [bp-3Fh]

  v5 = FIELD_U32(a2, 28);
  if ( ((unsigned int)&dword_60C8D9F4 & ~(1618083164 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D9F4) )
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
  v8 = sub_6090B350(&v31);
  v32 = 1;
  v35 = 1;
  v34 = 1;
  v33 = 2;
  v36 = 0;
  v31 = 0;
  sub_6090B4B0(v8, FIELD_U32(a2, 40));
  sub_6090C77C(v30, v6, v7, -1.0, 1.0, -1.0, 1.0);
  sub_6091DD8C(a1[657], FIELD_U32(a2, 40), 1);
  v9 = FIELD_U32(a2, 40);
  v10 = a1[657];
  v11 = sub_6090BE54(v30);
  v12 = *(_DWORD **)(v10 + 612);
  if ( *v12 != -1 )
    sub_6091B890(v12, v9, 16, v11);
  v13 = a1[657];
  v14 = FIELD_U32(a2, 40);
  v15 = a1[2282];
  v16 = a1[2281];
  v17 = a1[2280];
  v29[0] = a1[2279];
  v29[1] = v17;
  v29[2] = v16;
  v29[3] = v15;
  v18 = FIELD_U32(v13, 608);
  v19 = *(_DWORD **)(v13 + 612);
  if ( v18 > 1 )
    v19 += 3;
  if ( *v19 != -1 )
    sub_6091B890(v19, v14, 4, v29);
  v21 = a1[1762];
  v20 = a1 + 1762;
  sub_60920EC8(v20 - 746, v21);
  v22 = FIELD_U32(a2, 40);
  v23 = *(v20 - 1105);
  sub_6091D95C(v23);
  v24 = FIELD_U32(v23, 636);
  if ( FIELD_U32(v23, 632) > 1u )
    v24 += 12;
  sub_60920FDC(v20 - 746, v22, v24, -1, 0);
  sub_60922278(v20 - 1022, FIELD_U32(a2, 40));
  v25 = *(v20 - 936);
  v26 = *(_DWORD *)(FIELD_U32(a2, 40) + 192);
  v27 = dword_60CC746C(v20 - 930);
  dword_60CC7874(v26, v25, *(v20 - 937), 6, v27, HIDWORD(v27));
  result = nullsub_113(v30);
  if ( *v20 )
  {
    result = sub_6093EA98(dword_60CD09F8, *v20);
    *v20 = 0;
  }
  return result;
}
