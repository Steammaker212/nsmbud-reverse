/* ActiveCollider_getCenterY
 * address: 0x60159244   size: 20   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall ActiveCollider_getCenterY(ActiveCollider *result)
{
  return FIELD_F32(result, 0xB0) + FIELD_F32(result, 0x78);
}
