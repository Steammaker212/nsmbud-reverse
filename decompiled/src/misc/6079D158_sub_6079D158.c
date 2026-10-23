/* sub_6079D158
 * address: 0x6079D158   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079D158(int a1, int a2)
{
  int result; // r0

  result = 0;
  if ( (FIELD_U8(a1, 1208) & 2) != 0 )
  {
    FIELD_U32(a1, 156) = a2;
    return 1;
  }
  return result;
}
