/* sub_60921988
 * address: 0x60921988   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60921988(_DWORD **a1, int a2, int a3, _DWORD *a4, int a5, int a6)
{
  int v8; // r7
  int v9; // r6
  int result; // r0
  int v11; // r9
  int v12; // lr
  unsigned int v13; // r10
  int v14; // r2
  int v15; // r3
  int v16; // r6
  _DWORD *v17; // r7
  int v18; // r6
  int v19; // r1

  v8 = *a1[1] + 12 * a3;
  v9 = FIELD_U8(v8, 8);
  result = ((int (__fastcall *)(_DWORD **, int))(*a1)[3])(a1, v9);
  if ( a6 >= 1 )
  {
    v11 = 4 * result;
    v12 = byte_60B4658F[4 * v9];
    v13 = v12 - 1;
    v14 = 0;
    v15 = a2 + FIELD_U16(v8, 4) + 4 * a5 * result;
    while ( (v12 & 3) == 0 )
    {
      v16 = 0;
      v17 = a4;
      if ( v13 >= 3 )
        goto LABEL_9;
LABEL_11:
      ++v14;
      v15 += v11;
      a4 += v12;
      if ( v14 == a6 )
        return result;
    }
    result = 0;
    v16 = 0;
    do
    {
      result -= 4;
      *(_DWORD *)(v15 + 4 * v16) = a4[v16];
      ++v16;
    }
    while ( (v12 & 3) != v16 );
    v17 = (_DWORD *)((char *)a4 - result);
    if ( v13 < 3 )
      goto LABEL_11;
LABEL_9:
    result = v15 + 4 * v16;
    v18 = v12 - v16;
    do
    {
      v18 -= 4;
      *(_DWORD *)result = *v17;
      FIELD_U32(result, 4) = v17[1];
      FIELD_U32(result, 8) = v17[2];
      v19 = v17[3];
      v17 += 4;
      FIELD_U32(result, 12) = v19;
      result += 16;
    }
    while ( v18 );
    goto LABEL_11;
  }
  return result;
}
