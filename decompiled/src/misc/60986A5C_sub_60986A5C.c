/* sub_60986A5C
 * address: 0x60986A5C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60986A5C(_DWORD *a1, int a2)
{
  int v4; // r0
  int v5; // r1
  int result; // r0
  int v7; // r0

  v4 = a1[5];
  if ( v4 && (v5 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v4 + 32))(v4, a2), v5 >= 0) )
  {
    result = a1[7];
    if ( a1[6] > (unsigned int)v5 )
      result += 120 * v5;
  }
  else
  {
    v7 = a1[11];
    if ( v7 )
      return sub_60987738(v7, a2);
    else
      return 0;
  }
  return result;
}
