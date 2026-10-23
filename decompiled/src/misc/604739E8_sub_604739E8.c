/* sub_604739E8
 * address: 0x604739E8   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604739E8(_DWORD *a1, __int64 *a2, __int64 *a3)
{
  int v4; // r6
  int v5; // lr
  int v6; // r3
  unsigned int i; // r5
  _BYTE *v8; // r0
  __int64 *v9; // r0
  __int64 *v10; // r1
  __int64 v11; // d16
  __int64 v12; // d17
  _QWORD *v13; // r3
  __int64 v14; // d20
  __int64 v15; // d21
  __int64 v16; // d18
  __int64 v17; // d19
  __int64 *v18; // r0
  __int64 *v19; // r2
  __int64 v20; // d16
  __int64 v21; // d17
  _QWORD *v22; // r1
  __int64 v23; // d18
  __int64 v24; // d19
  __int64 v25; // d20
  __int64 v26; // d21
  _QWORD *v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r5
  int v31; // r6
  int v32; // r0
  int v33; // r0
  int v34; // r0

  v4 = a1[877];
  if ( v4 >= 1 )
  {
    v5 = v4 - 1;
    v6 = 0;
    for ( i = 0; ; ++i )
    {
      v8 = (_BYTE *)a1[878];
      if ( v4 > i )
        v8 += v6;
      if ( *(_DWORD *)v8 && !v8[16] && (*(_BYTE *)(*(_DWORD *)v8 + 51) & 1) != 0 )
        v8[16] = 1;
      if ( v5 == i )
        break;
      v4 = a1[877];
      v6 += 20;
    }
  }
  v9 = a2 + 4;
  v11 = *a2;
  v12 = a2[1];
  v10 = a2 + 2;
  v13 = (_QWORD *)a1[6];
  v14 = *v10;
  v15 = v10[1];
  v16 = *v9;
  v17 = v9[1];
  v13[10] = v11;
  v13[11] = v12;
  v13[12] = v14;
  v13[13] = v15;
  v13[14] = v16;
  v13[15] = v17;
  *(_BYTE *)(*(_DWORD *)(a1[4] + 12) + 64) &= ~0x20u;
  if ( a3 )
  {
    v18 = a3 + 4;
    v20 = *a3;
    v21 = a3[1];
    v19 = a3 + 2;
    v22 = (_QWORD *)a1[7];
    v23 = *v18;
    v24 = v18[1];
    v25 = *v19;
    v26 = v19[1];
    v27 = v22 + 4;
    *v22 = v20;
    v22[1] = v21;
    v22 += 2;
    *v22 = v25;
    v22[1] = v26;
    *v27 = v23;
    v27[1] = v24;
    v28 = *(_DWORD *)(a1[4] + 12);
    FIELD_U32(v28, 128) = a1[7];
    FIELD_U8(v28, 64) |= 0x20u;
  }
  v29 = (*(int (__fastcall **)(_DWORD *))(*a1 + 16))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)v29 + 232))(v29);
  v30 = a1[4];
  v31 = a1[6];
  v32 = (*(int (__fastcall **)(_DWORD *))(*a1 + 16))(a1);
  v33 = (*(int (__fastcall **)(int))(*(_DWORD *)v32 + 228))(v32);
  (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v30 + 72))(v30, v31, v33);
  v34 = (*(int (__fastcall **)(_DWORD *))(*a1 + 16))(a1);
  return nullsub_128(v34);
}
