/* sub_6051DA60
 * address: 0x6051DA60   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6051DA60(_DWORD *result)
{
  int v1; // r12
  unsigned int i; // r2
  int v3; // r4
  signed int v4; // r5
  int v5; // r6
  _DWORD *v6; // r3
  int v7; // r4
  int v8; // lr
  int v9; // r5
  signed int v10; // r1
  _DWORD *v11; // r3
  int v12; // r1
  _DWORD *v13; // r1
  int v14; // r4
  int v15; // r5
  int v16; // r4
  _DWORD *v17; // r1

  v1 = result[970];
  if ( v1 )
  {
    for ( i = 0; i != v1; ++i )
    {
      v3 = result[969];
      v4 = result[968];
      v5 = result[967];
      v6 = (_DWORD *)result[919];
      if ( (int)(i + v3) >= v4 )
        v3 -= v4;
      v7 = i + v3;
      v8 = *(_DWORD *)(v5 + 16 * v7);
      if ( result[922] > i )
      {
        v9 = result[921];
        v10 = result[920];
        if ( (int)(i + v9) >= v10 )
          v9 -= v10;
        v6 += i + v9;
      }
      v11 = (_DWORD *)*v6;
      v12 = v5 + 16 * v7;
      FIELD_U32(v12, 8) = v11;
      v13 = (_DWORD *)(v12 + 8);
      v14 = FIELD_U32(v8, 12);
      if ( v14 == 6 || v11[2] != v14 )
      {
        v11[2] = v14;
        v11[1] |= 1u;
        v11 = (_DWORD *)*v13;
      }
      v15 = v11[5];
      v16 = FIELD_U32(v8, 4);
      if ( v15 != v16 )
      {
        v11[4] = v15;
        v11[5] = v16;
        v11[1] |= 2u;
      }
      if ( i <= 3 )
      {
        v17 = (_DWORD *)*v13;
        if ( i != v17[3] )
        {
          v17[3] = i;
          v17[1] |= 1u;
        }
      }
    }
  }
  return result;
}
