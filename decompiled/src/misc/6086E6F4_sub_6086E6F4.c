/* sub_6086E6F4
 * address: 0x6086E6F4   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086E6F4(int a1, float a2)
{
  return *(__int16 *)(FIELD_U32(a1, 8) + 2 * ((int)a2 - (int)FIELD_F32(a1, 24)));
}
