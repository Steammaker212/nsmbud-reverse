/* sub_608AEBA8
 * address: 0x608AEBA8   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_608AEBA8(_DWORD *a1, int a2, int a3, int a4)
{
  int v7; // r7
  _DWORD *v9; // r11
  _DWORD *v10; // r4
  int v11; // r0
  int *v12; // r4
  _DWORD *v13; // r0
  int *v14; // r4
  int v15; // r1
  int v16; // r2
  int *v17; // r1
  int v18; // r2
  int v19; // t1
  _DWORD *v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r0
  _DWORD *v24; // r5
  int v25; // t1
  _DWORD *v26; // r4
  int v27; // t1
  int v28; // r2

  v7 = 0;
  v9 = a1 + 4;
  if ( a3 + a2 > 0 )
    v7 = a3 + a2;
  if ( a3 + a2 > 127 )
    v7 = 127;
  while ( 1 )
  {
    v12 = (int *)a1[7];
    if ( v12 != a1 + 6 )
      break;
    v13 = (_DWORD *)a1[5];
    if ( v13 == v9 )
      return 0;
    v14 = 0;
    v15 = *((unsigned __int8 *)v13 - 232) + *(v13 - 89);
    v16 = 0;
    if ( v15 > 0 )
      v16 = *((unsigned __int8 *)v13 - 232) + *(v13 - 89);
    if ( v15 > 127 )
      v16 = 127;
    if ( v7 < v16 )
      return v14;
    v10 = v13 - 107;
    v11 = sub_608B4E24(2);
    sub_608B4DE4(v11);
    sub_608AF208(v10, 0);
  }
  v17 = (int *)v12[1];
  v18 = *v17;
  *(_DWORD *)(*v12 + 4) = v17;
  *v17 = *v12;
  FIELD_U32(v18, 4) = v12;
  *v12 = v18;
  v19 = *(v12 - 107);
  v14 = v12 - 107;
  if ( !(*(int (__fastcall **)(int *, int))(v19 + 12))(v14, a4) )
  {
    v25 = a1[6];
    v24 = a1 + 6;
    v23 = v25;
    v27 = v14[107];
    v26 = v14 + 107;
    *v26 = v23;
    FIELD_U32(v27, 4) = v24;
    *(_DWORD *)(*v24 + 4) = v26;
    *v24 = v27;
    return 0;
  }
  sub_608AF034(v14, a2, a3);
  v20 = (_DWORD *)a1[5];
  if ( v20 != v9 )
  {
    while ( 1 )
    {
      v21 = *((unsigned __int8 *)v20 - 232) + *(v20 - 89);
      v22 = v21;
      if ( v21 <= 0 )
        v22 = 0;
      if ( v21 > 127 )
        v22 = 127;
      if ( v22 > v7 )
        break;
      v20 = (_DWORD *)v20[1];
      if ( v20 == v9 )
        goto LABEL_27;
    }
    v9 = v20;
  }
LABEL_27:
  v28 = v14[107];
  v14[107] = *v20;
  FIELD_U32(v28, 4) = v9;
  *(_DWORD *)(*v9 + 4) = v14 + 107;
  *v9 = v28;
  return v14;
}
