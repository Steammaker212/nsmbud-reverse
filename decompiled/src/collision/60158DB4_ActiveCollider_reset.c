/* ActiveCollider_reset
 * address: 0x60158DB4   size: 52   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ActiveCollider_reset(ActiveCollider *a1)
{
  FIELD_U32(a1, 0x4C) = 0;
  FIELD_U32(a1, 0x50) = 0;
  FIELD_U32(a1, 0x54) = 0;
  FIELD_U32(a1, 0x58) = 0;
  FIELD_U32(a1, 0x5C) = 0;
  FIELD_U32(a1, 0x60) = 0;
  FIELD_U32(a1, 0x64) = 0;
  return memset(&FIELD_U32(a1, 0xB0), 0, 128);
}
