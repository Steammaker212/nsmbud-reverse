/* sub_605A5114
 * address: 0x605A5114   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605A5114(float a1)
{
  int result; // r0

  result = TileMgr_instance;
  FIELD_F32(TileMgr_instance, 24) = a1;
  return result;
}
