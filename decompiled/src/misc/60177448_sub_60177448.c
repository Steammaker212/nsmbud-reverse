/* sub_60177448
 * address: 0x60177448   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60177448(_DWORD *result, int a2)
{
  _DWORD *v2; // r12
  _DWORD *v3; // r1
  int v4; // r3
  int v5; // r4
  int v6; // r5
  int v7; // r6
  int v8; // r7
  int v9; // r1

  if ( result[4] < result[5] )
  {
    v2 = (_DWORD *)result[7];
    if ( v2 )
      result[7] = *v2;
    else
      v2 = 0;
    v3 = (_DWORD *)(a2 + 4);
    *v2 = &off_60BD4EF8;
    v4 = v3[1];
    v5 = v3[2];
    v6 = v3[3];
    v7 = v3[4];
    v8 = v3[5];
    v2[1] = *v3;
    v2[2] = v4;
    v2[3] = v5;
    v2[4] = v6;
    v2[5] = v7;
    v2[6] = v8;
    v9 = result[4];
    if ( v9 < result[5] )
    {
      *(_DWORD *)(result[6] + 4 * v9) = v2;
      ++result[4];
    }
  }
  return result;
}
