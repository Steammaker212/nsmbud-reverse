/* sub_60904C40
 * address: 0x60904C40   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60904C40(int a1)
{
  return (unsigned int)sub_608E7EC4(FIELD_U32(a1, 4)) >= FIELD_U32(a1, 64);
}
