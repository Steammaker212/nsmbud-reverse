/* sub_6095EA6C
 * address: 0x6095EA6C   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6095EA6C(float *a1)
{
  int result; // r0
  int v3; // r5
  int i; // r7
  float v5; // s0
  float v6; // s1
  bool v7; // zf
  int v8; // r0

  result = *((_DWORD *)a1 + 114);
  if ( result >= 1 )
  {
    v3 = 0;
    for ( i = 0; i < result; ++i )
    {
      v5 = 0.0;
      if ( !v3 )
        v5 = a1[130];
      v6 = 0.0;
      v7 = i == result - 1;
      v8 = *((_DWORD *)a1 + 156);
      if ( v7 )
        v6 = a1[134];
      if ( *((_DWORD *)a1 + 155) > (unsigned int)i )
        v8 += v3;
      sub_60960770(
        v8,
        *((_DWORD *)a1 + 173) / *((_DWORD *)a1 + 138),
        *((_DWORD *)a1 + 177) / *((_DWORD *)a1 + 138),
        v5,
        v6);
      result = *((_DWORD *)a1 + 114);
      v3 += 1396;
    }
  }
  return result;
}
