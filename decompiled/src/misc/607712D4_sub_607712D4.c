/* sub_607712D4
 * address: 0x607712D4   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607712D4(int a1)
{
  int result; // r0

  result = FIELD_U8(a1, 1229);
  if ( (result & 8) == 0 )
  {
    if ( (FIELD_U8(a1, 6900) & 1) == 0 )
      JUMPOUT(0x60771320);
    result = *(_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1100))(a1);
    FIELD_U32(a1, 100) = result;
  }
  return result;
}
