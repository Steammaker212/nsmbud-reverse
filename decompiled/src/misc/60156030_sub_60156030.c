/* sub_60156030
 * address: 0x60156030   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60156030(int a1, int a2)
{
  return (FIELD_U32(a2, 28) & 0xFF00) == 0x300;
}
