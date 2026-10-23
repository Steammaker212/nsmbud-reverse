/* sub_60927404
 * address: 0x60927404   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60927404(_DWORD *result, int a2)
{
  int v2; // r12
  int v3; // lr
  unsigned int v4; // r3
  int v5; // r2
  int v6; // r2
  _DWORD *v7; // r5
  unsigned int v8; // r1
  unsigned __int16 *v9; // r4
  int v10; // r12
  unsigned int v11; // r1

  v2 = result[49];
  if ( v2 )
  {
    v3 = 0;
    v4 = 0;
    v5 = a2 - result[50] + 136;
    while ( 1 )
    {
      v5 -= 164;
      if ( !v5 )
        break;
      ++v4;
      v3 -= 4;
      if ( v2 == v4 )
        return result;
    }
    v6 = FIELD_U32(a2, 56);
    if ( v6 < 0 )
    {
      v11 = result[5];
      result = (_DWORD *)result[6];
      v10 = 0;
    }
    else
    {
      v7 = (_DWORD *)result[41];
      v8 = FIELD_U32(a2, 76);
      v9 = (unsigned __int16 *)v7[4];
      v10 = 0;
      if ( v7[3] > v8 )
        v9 += 2 * v8;
      if ( v9[1] > v6 )
        v10 = *(_DWORD *)(v7[6] + 4 * (*v9 + v6));
      v11 = result[5];
      result = (_DWORD *)result[6];
    }
    if ( v11 > v4 )
      result = (_DWORD *)((char *)result - v3);
    *result = v10;
  }
  return result;
}
