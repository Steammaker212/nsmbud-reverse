/* sub_607D4224
 * address: 0x607D4224   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D4224(int result)
{
  int v1; // r1

  v1 = FIELD_U32(result, 9936);
  FIELD_U32(result, 9940) = v1;
  if ( v1 == 1 )
  {
    FIELD_U32(result, 88) = 0;
    return (*(int (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(result + 11368) + 84))(
             FIELD_U32(result, 11368),
             10,
             2.0,
             0.0,
             0.0);
  }
  return result;
}
