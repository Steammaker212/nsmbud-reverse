/* sub_607A5FA0
 * address: 0x607A5FA0   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A5FA0(int result)
{
  int v1; // r1

  v1 = FIELD_U32(result, 9704);
  if ( v1 != 5 )
    return ((int (__fastcall *)(int))*(&off_60C25370 + 2 * v1))(result + ((int)*(&off_60C25370 + 2 * v1 + 1) >> 1));
  return result;
}
