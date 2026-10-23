/* sub_60166914
 * address: 0x60166914   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60166914(int a1, int a2)
{
  return (FIELD_U32(a2, 24) & 0xFFFFFF) == 0x4000D;
}
