/* sub_601861EC
 * address: 0x601861EC   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601861EC(Actor *a1)
{
  int result; // r0

  result = sub_60185D08(a1);
  if ( result == 1 )
    return (*(int (__fastcall **)(Actor *))(FIELD_U32(a1, 0x0) + 80))(a1);
  return result;
}
