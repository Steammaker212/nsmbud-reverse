/* sub_6015CEA0
 * address: 0x6015CEA0   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6015CEA0(int a1, int a2)
{
  int v2; // r2
  __int64 *v3; // r3

  v3 = (__int64 *)(a2 + 24);
  v2 = FIELD_U16(a2, 24);
  if ( v2 == 2 )
  {
    sub_6015CD5C(a1, FIELD_U32(a2, 32), FIELD_U32(a1, 4), (int)v3);
  }
  else if ( v2 == 3 )
  {
    sub_6015CB9C(a1, FIELD_U32(a2, 32), *(_BYTE **)(a1 + 4), v3);
    return 0;
  }
  return 0;
}
