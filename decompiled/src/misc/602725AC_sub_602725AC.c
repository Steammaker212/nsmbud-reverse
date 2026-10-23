/* sub_602725AC
 * address: 0x602725AC   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602725AC(int a1, int a2, int a3)
{
  return *(float *)(a2 + 4 * FIELD_U32(a3, 136) + 176) <= 0.0;
}
