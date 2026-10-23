/* sub_60498758
 * address: 0x60498758   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60498758(_DWORD *a1)
{
  int v2; // r5
  _DWORD *result; // r0
  unsigned int v4; // r1
  unsigned int v5; // r5
  _DWORD v6[6]; // [sp+8h] [bp-18h] BYREF

  v2 = (int)(a1 + 16);
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = dword_60CA0720;
  if ( sub_6047467C(a1 + 16, 0, v6, (int)&dword_60CA06FC, 1.0, 0) == 1 )
    sub_6047482C(v2, 0);
  a1[23801] |= 1u;
  result = a1 + 36716;
  if ( (int)a1[36716] >= 1 )
  {
    v4 = 0;
    do
    {
      v5 = 0;
      if ( v4 < 4 )
        v5 = v4;
      ++v4;
      a1[5139 * v5 + 1432] |= 8u;
    }
    while ( (signed int)v4 < *result );
  }
  return result;
}
