/* sub_605855E0
 * address: 0x605855E0   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605855E0(int a1, unsigned int a2)
{
  int result; // r0

  if ( a2 >= 0x100 )
    a2 = 0;
  result = a1 + 24 * a2;
  FIELD_U8(result, 27684) = 1;
  return result;
}
