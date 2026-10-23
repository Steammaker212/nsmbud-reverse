/* sub_6022A490
 * address: 0x6022A490   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6022A490(int a1)
{
  return (float)(FIELD_F32(a1, 36) + 0.8) <= 0.00000011921 && (float)(FIELD_F32(a1, 36) + 0.8) >= -0.00000011921;
}
