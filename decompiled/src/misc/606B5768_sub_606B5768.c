/* sub_606B5768
 * address: 0x606B5768   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B5768(int a1)
{
  int result; // r0

  result = FIELD_U32(a1, 7224);
  if ( result )
  {
    result = sub_60003B88(a1, (_DWORD *)(a1 + 6632));
    if ( !result )
      return ((int (__fastcall *)(int, int))loc_6069B070)(a1 + 6108, a1 + 108);
  }
  return result;
}
