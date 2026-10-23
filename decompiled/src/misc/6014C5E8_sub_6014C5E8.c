/* sub_6014C5E8
 * address: 0x6014C5E8   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6014C5E8(int a1)
{
  int v2; // r2
  unsigned int result; // r0
  int v4; // r2

  v2 = FIELD_U32(a1, 2224) & 0x10400;
  result = 0x80000000;
  if ( v2 == 1024 )
  {
    v4 = FIELD_U32(a1, 2568);
    if ( v4 <= 5 )
      return *(_DWORD *)(a1 + 56 * v4 + 3272);
  }
  return result;
}
