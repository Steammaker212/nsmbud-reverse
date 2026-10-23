/* sub_6052F434
 * address: 0x6052F434   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052F434(_DWORD *a1)
{
  int v2; // r5
  int (__fastcall *v3)(int, int, int); // r7
  int v4; // r9
  int v5; // r0
  _DWORD *v6; // r3
  int *v7; // r7
  int v8; // r1
  int *v9; // r2
  int v10; // t1
  int v11; // r0
  int v12; // r1
  int *v13; // r2
  _DWORD *v14; // r3
  int v15; // t1
  int v16; // r0
  int *v17; // r2
  _DWORD *v18; // r3
  int v19; // r1
  int v20; // t1
  int v21; // r0
  int *v22; // r2
  _DWORD *v23; // r3
  int v24; // r1
  int v25; // t1
  int v26; // r0
  int *v27; // r2
  _DWORD *v28; // r3
  int v29; // r1
  int v30; // t1
  int v31; // r0
  _DWORD *v32; // r2
  int v33; // r1
  int v34; // t1
  int result; // r0
  _BYTE v36[84]; // [sp+0h] [bp-78h] BYREF
  int v37; // [sp+54h] [bp-24h]

  v2 = sub_60473B4C((int)(a1 + 10));
  v3 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v2 + 48);
  (*(void (__fastcall **)(int *))(dword_60CAA7E0 + 12))(&dword_60CAA7E0);
  v4 = v3(v2, dword_60CAA7E4, 1);
  v5 = operator_new(0x44u);
  v6 = v36;
  v37 = 0;
  v7 = a1 + 919;
  v8 = 84;
  v9 = a1 + 919;
  do
  {
    v10 = *v9++;
    v8 -= 4;
    *v6++ = v10;
  }
  while ( v8 );
  a1[907] = sub_6052FD50(v5, v2, v4, a1[918]);
  v11 = operator_new(0x44u);
  v12 = 84;
  v13 = a1 + 919;
  v14 = v36;
  v37 = 1;
  do
  {
    v15 = *v13++;
    v12 -= 4;
    *v14++ = v15;
  }
  while ( v12 );
  a1[908] = sub_6052FD50(v11, v2, v4, a1[918]);
  v16 = operator_new(0x44u);
  v17 = a1 + 919;
  v18 = v36;
  v37 = 2;
  v19 = 84;
  do
  {
    v20 = *v17++;
    v19 -= 4;
    *v18++ = v20;
  }
  while ( v19 );
  a1[909] = sub_6052FD50(v16, v2, v4, a1[918]);
  v21 = operator_new(0x44u);
  v22 = a1 + 919;
  v23 = v36;
  v37 = 3;
  v24 = 84;
  do
  {
    v25 = *v22++;
    v24 -= 4;
    *v23++ = v25;
  }
  while ( v24 );
  a1[910] = sub_6052FD50(v21, v2, v4, a1[918]);
  v26 = operator_new(0x44u);
  v27 = a1 + 919;
  v28 = v36;
  v37 = 4;
  v29 = 84;
  do
  {
    v30 = *v27++;
    v29 -= 4;
    *v28++ = v30;
  }
  while ( v29 );
  a1[911] = sub_6052FD50(v26, v2, v4, a1[918]);
  v31 = operator_new(0x44u);
  v32 = v36;
  v37 = 5;
  v33 = 84;
  do
  {
    v34 = *v7++;
    v33 -= 4;
    *v32++ = v34;
  }
  while ( v33 );
  a1[912] = sub_6052FD50(v31, v2, v4, a1[918]);
  result = a1[913];
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
