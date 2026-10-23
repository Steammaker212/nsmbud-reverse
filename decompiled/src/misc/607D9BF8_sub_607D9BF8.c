/* sub_607D9BF8
 * address: 0x607D9BF8   size: 636   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D9BF8(int a1, __int16 *a2, _WORD *a3, unsigned int a4, int a5)
{
  int result; // r0
  double v10; // d17
  double v11; // d16
  double v12; // d22
  double v13; // d24
  double v14; // d18
  double v15; // d19
  double v16; // d20
  double v17; // d21
  int v18; // r3
  _WORD *v19; // r5
  unsigned int v20; // r12
  unsigned int v21; // lr
  __int16 *v22; // r2
  int v23; // r1
  double v24; // d23
  __int16 *v25; // r7
  int v26; // t1
  double v27; // d23
  double v28; // d28
  double v29; // d24
  __int16 *v30; // r7
  int v31; // t1
  int v32; // r0
  double v33; // d25
  double v34; // d16
  double v35; // d28
  int v36; // r1

  result = FIELD_U32(a1, 360);
  if ( result != 2 )
    result = nn__diag__detail__OnAssertionFailure(2, &byte_60ABC94D, &byte_60ABC94D, &byte_60ABC94D, 0);
  v10 = FIELD_F64(a1, 352);
  v11 = FIELD_F64(a1, 272);
  v12 = FIELD_F64(a1, 280);
  v13 = FIELD_F64(a1, 184);
  v14 = FIELD_F64(a1, 192);
  v15 = FIELD_F64(a1, 8);
  v16 = *(double *)a1;
  v17 = FIELD_F64(a1, 96);
  if ( a4 < 3 )
  {
    v33 = FIELD_F64(a1, 264);
    v27 = FIELD_F64(a1, 176);
    if ( !a4 )
    {
LABEL_24:
      v35 = v13;
      goto LABEL_25;
    }
  }
  else
  {
    v18 = a5;
    v19 = a3;
    v20 = (a4 - 3) % 3;
    v21 = 3 * ((a4 - 3) / 3) + 3;
    do
    {
      v22 = a2;
      LOWORD(v23) = 0x7FFF;
      v24 = (double)*a2;
      v26 = a2[a5];
      v25 = &a2[v18];
      v27 = v10 * v24;
      v28 = v13 + v27;
      v29 = (double)v26;
      v31 = v25[a5];
      v30 = &v25[v18];
      LOWORD(v32) = 0x7FFF;
      v13 = v10 * v29;
      v33 = v15 * v12 + v16 * v11 + v28 + v17 * v14;
      v34 = v14 + v13;
      v14 = v10 * (double)v31;
      v11 = v34 + v17 * v27 + v15 * v33 + v16 * v12;
      if ( v33 <= 32767.0 )
      {
        LOWORD(v23) = 0x8000;
        if ( v33 >= -32768.0 )
          v23 = (int)v33;
      }
      v12 = v27 + v14 + v17 * v13 + v15 * v11 + v16 * v33;
      *v19 = v23;
      if ( v11 <= 32767.0 )
      {
        LOWORD(v32) = 0x8000;
        if ( v11 >= -32768.0 )
          v32 = (int)v11;
      }
      v19[1] = v32;
      result = 0x7FFF;
      if ( v12 <= 32767.0 )
      {
        result = 0x8000;
        if ( v12 >= -32768.0 )
          result = (int)v12;
      }
      a4 -= 3;
      v19[2] = result;
      a2 = &v30[v18];
      v19 += 3;
    }
    while ( a4 > 2 );
    a3 += v21;
    a2 = &v22[3 * a5];
    a4 = v20;
    if ( !v20 )
      goto LABEL_24;
  }
  result = 2 * a5;
  do
  {
    v35 = v14;
    v27 = v13;
    v33 = v11;
    v11 = v12;
    LOWORD(v36) = 0x7FFF;
    v14 = v10 * (double)*a2;
    v12 = v15 * v12 + v16 * v33 + v13 + v14 + v17 * v35;
    if ( v12 <= 32767.0 )
    {
      LOWORD(v36) = 0x8000;
      if ( v12 >= -32768.0 )
        v36 = (int)v12;
    }
    v13 = v35;
    a2 = (__int16 *)((char *)a2 + result);
    *a3++ = v36;
    --a4;
  }
  while ( a4 );
LABEL_25:
  FIELD_F64(a1, 176) = v27;
  FIELD_F64(a1, 264) = v33;
  FIELD_F64(a1, 184) = v35;
  FIELD_F64(a1, 272) = v11;
  FIELD_F64(a1, 192) = v14;
  FIELD_F64(a1, 280) = v12;
  return result;
}
