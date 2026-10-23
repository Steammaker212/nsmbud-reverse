/* sub_6042F6B8
 * address: 0x6042F6B8   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042F6B8(int *a1)
{
  int v2; // r0
  bool v3; // cc
  int result; // r0
  int v5; // r1
  float v6; // s4
  int v7; // r0

  v2 = a1[1];
  if ( !v2 || (v3 = v2 <= 1, result = v2 - 1, a1[1] = result, v3) )
  {
    result = *a1;
    v5 = *(_DWORD *)(*a1 + 1020);
    if ( v5 == 5 )
    {
      sub_60437644(result, 0);
      v7 = a1[2];
      v3 = v7 <= 1;
      a1[2] = v7 - 1;
      result = 5;
      if ( v3 )
        result = ((90 * (unsigned __int64)sead__Random__getU32((void *)sead__GlobalRandom__sInstance)) >> 32) + 60;
      a1[1] = result;
    }
    else if ( !v5 )
    {
      sub_60437644(result, 5);
      a1[1] = 5;
      result = a1[2];
      if ( !result )
      {
        LODWORD(v6) = (sead__Random__getU32((void *)sead__GlobalRandom__sInstance) >> 9) | 0x3F800000;
        result = 1;
        if ( (float)(v6 + -1.0) < 0.333 )
          result = 2;
        a1[2] = result;
      }
    }
  }
  return result;
}
