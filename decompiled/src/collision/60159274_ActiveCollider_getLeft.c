/* ActiveCollider_getLeft
 * address: 0x60159274   size: 28   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall ActiveCollider_getLeft(ActiveCollider *result)
{
  return (float)(FIELD_F32(result, 0xAC) + FIELD_F32(result, 0x74)) - FIELD_F32(result, 0x7C);
}
