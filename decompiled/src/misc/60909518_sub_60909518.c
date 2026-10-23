/* sub_60909518
 * address: 0x60909518   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60909518(int a1)
{
  _BOOL4 result; // r0

  result = 0;
  if ( !FIELD_U32(a1, 272)
    && (FIELD_U8(a1, 16) & 1) == 0
    && FIELD_F32(a1, 284) == 0.0
    && FIELD_F32(a1, 288) == 0.0
    && FIELD_F32(a1, 292) == 0.0
    && FIELD_F32(a1, 296) == 0.0
    && FIELD_F32(a1, 300) == 0.0 )
  {
    return FIELD_F32(a1, 304) == 0.0;
  }
  return result;
}
