/* sub_6014C4A4
 * address: 0x6014C4A4   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6014C4A4(int a1)
{
  int result; // r0
  int v3; // r2

  result = 0;
  if ( (FIELD_U8(a1, 2224) & 1) != 0 )
  {
    v3 = FIELD_U32(a1, 2572);
    if ( v3 <= 5 )
      return *(_DWORD *)(a1 + 56 * v3 + 3608);
  }
  return result;
}
