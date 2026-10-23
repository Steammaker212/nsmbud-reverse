/* ActiveCollider_getBottom
 * address: 0x60159228   size: 28   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall ActiveCollider_getBottom(ActiveCollider *result)
{
  return (float)(FIELD_F32(FIELD_U32(result, 0x40), 0x70) + FIELD_F32(result, 0x78)) - FIELD_F32(result, 0x80);
}
