/* sub_608EC4FC
 * address: 0x608EC4FC   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608EC4FC(int result, int a2)
{
  unsigned int v2; // r1

  FIELD_U32(result, 248) = a2;
  FIELD_U32(a2, 48) |= 1u;
  v2 = FIELD_U32(result, 112);
  if ( v2 <= 3 && v2 != 2 )
    FIELD_U8(result, 492) = 1;
  return result;
}
