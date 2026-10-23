/* sub_607C416C
 * address: 0x607C416C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607C416C(int a1)
{
  return (FIELD_U8(a1, 6903) & 8) != 0 && !sub_607868D4(a1 + 688, 0) && FIELD_U32(a1, 1320) != 5;
}
