/* sub_607E14F4
 * address: 0x607E14F4   size: 8   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607E14F4(int a1, _DWORD *a2)
{
  int result; // r0

  result = a1 + 7296;
  if ( FIELD_U8(result, 3548) )
    return sub_60473B88((_DWORD *)result, a2, 0);
  return result;
}
