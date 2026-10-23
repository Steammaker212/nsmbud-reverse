/* sub_6014C540
 * address: 0x6014C540   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6014C540(int a1)
{
  _BOOL4 result; // r0
  int v3; // r2

  result = 0;
  if ( (FIELD_U8(a1, 2224) & 1) != 0 )
  {
    v3 = FIELD_U32(a1, 2572);
    if ( v3 <= 5 )
      return *(_DWORD *)(a1 + 56 * v3 + 3608) > 0;
  }
  return result;
}
