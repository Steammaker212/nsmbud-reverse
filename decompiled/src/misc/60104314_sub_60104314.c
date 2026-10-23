/* sub_60104314
 * address: 0x60104314   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60104314(int a1)
{
  unsigned int result; // r0

  result = ((sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 2) - 1) * FIELD_U32(a1, 6700);
  FIELD_U32(a1, 164) = result;
  return result;
}
