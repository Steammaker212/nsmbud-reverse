/* FireBros__setWalkingSpeed
 * address: 0x602A9AD0   size: 40   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BrosBase : 0x60267560
// 
// Overridden by: None
BrosBase *__fastcall FireBros__setWalkingSpeed(BrosBase *result)
{
  FIELD_F32(result, 0x78) = flt_60AF1F80[(unsigned __int8)FIELD_U8(result, 0x189C)[304]];
  FIELD_F32(result, 0x7C) = 0.0;
  FIELD_F32(result, 0x80) = 0.0;
  return result;
}
