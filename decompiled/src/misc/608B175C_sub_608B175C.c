/* sub_608B175C
 * address: 0x608B175C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B175C(int a1, int a2)
{
  int result; // r0
  int v4; // r3
  unsigned int v5; // r1
  int v6; // r2
  unsigned int v7; // t1

  result = 0;
  if ( (a2 & 0xFF000000) == 0x1000000 )
  {
    v4 = FIELD_U32(a1, 4);
    v5 = a2 & 0xFFFFFF;
    v7 = *(_DWORD *)(a1 + v4);
    v6 = a1 + v4;
    if ( v5 < v7 )
      return v6 + *(_DWORD *)(v6 + 8 * v5 + 8);
  }
  return result;
}
