/* sub_608FB128
 * address: 0x608FB128   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608FB128(int a1, unsigned int a2)
{
  return FIELD_U32(a1, 128) <= a2 && FIELD_U32(a1, 128) + FIELD_U32(a1, 132) > a2;
}
