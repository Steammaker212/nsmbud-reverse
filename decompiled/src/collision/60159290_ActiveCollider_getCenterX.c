/* ActiveCollider_getCenterX
 * address: 0x60159290   size: 20   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall ActiveCollider_getCenterX(ActiveCollider *result)
{
  return FIELD_F32(FIELD_U32(result, 0x40), 0x6C) + FIELD_F32(result, 0x74);
}
