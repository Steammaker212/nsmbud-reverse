/* sub_6079D270
 * address: 0x6079D270   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6079D270(int a1, int a2)
{
  return FIELD_U32(a1, 11408) == FIELD_U32(a2, 8) && FIELD_U32(a2, 9952) == FIELD_U32(a1, 8);
}
