/* ActiveCollider_getTop
 * address: 0x6015920C   size: 28   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall ActiveCollider_getTop(ActiveCollider *result)
{
  return (float)(FIELD_F32(result, 0xB0) + FIELD_F32(result, 0x78)) + FIELD_F32(result, 0x80);
}
