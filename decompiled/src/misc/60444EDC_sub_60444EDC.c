/* sub_60444EDC
 * address: 0x60444EDC   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60444EDC(_DWORD *a1, unsigned int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v8; // r5
  int v11; // r10
  __int64 v12; // d17
  __int64 v13; // d17
  __int64 v14; // d17
  _QWORD *v15; // r0
  __int64 v16; // d17
  __int64 v17; // d17
  _QWORD *v18; // r1
  __int64 v19; // d17
  __int64 v20; // d17
  int v21; // r0
  int result; // r0
  int *v23; // r6
  int v24; // r5
  int v25; // t1
  int v26; // r6
  int v27; // r4

  v8 = a3 + 4;
  v11 = a1[225];
  v12 = FIELD_U64(a3, 12);
  if ( a1[224] > a2 )
    v11 += a2 << 7;
  FIELD_U64(v11, 4) = FIELD_U64(a3, 4);
  FIELD_U64(v11, 12) = v12;
  v13 = FIELD_U64(a3, 28);
  FIELD_U64(v11, 20) = FIELD_U64(a3, 20);
  FIELD_U64(v11, 28) = v13;
  v14 = FIELD_U64(a3, 44);
  FIELD_U64(v11, 36) = FIELD_U64(a3, 36);
  FIELD_U64(v11, 44) = v14;
  v15 = (_QWORD *)sub_6090BE54(a4);
  v16 = v15[1];
  FIELD_U64(v11, 52) = *v15;
  FIELD_U64(v11, 60) = v16;
  v17 = v15[3];
  FIELD_U64(v11, 68) = v15[2];
  FIELD_U64(v11, 76) = v17;
  v18 = v15 + 4;
  v15 += 6;
  v19 = v18[1];
  FIELD_U64(v11, 84) = *v18;
  FIELD_U64(v11, 92) = v19;
  v20 = v15[1];
  FIELD_U64(v11, 100) = *v15;
  FIELD_U64(v11, 108) = v20;
  FIELD_U32(v11, 116) = a5;
  FIELD_U32(v11, 120) = a6;
  FIELD_U32(v11, 124) = a7;
  v21 = sub_6090BDE0(a4);
  sub_60924DD0(a1 + 17, v8, v21, a2);
  result = a1[7];
  if ( result )
  {
    v23 = (int *)a1[9];
    v24 = 4 * result;
    do
    {
      v25 = *v23++;
      result = (*(int (__fastcall **)(int, unsigned int, int, int, _DWORD *))(*(_DWORD *)v25 + 16))(
                 v25,
                 a2,
                 v11 + 4,
                 v11 + 52,
                 a1);
      v24 -= 4;
    }
    while ( v24 );
  }
  v26 = a1[12];
  if ( v26 )
  {
    v27 = a1[13];
    do
    {
      result = sub_608DED80(v27, sub_60445020);
      v27 += 12;
      --v26;
    }
    while ( v26 );
  }
  return result;
}
