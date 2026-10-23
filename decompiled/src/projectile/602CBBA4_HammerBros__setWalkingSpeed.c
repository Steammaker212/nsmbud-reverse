/* HammerBros__setWalkingSpeed
 * address: 0x602CBBA4   size: 40   group: projectile
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
int __fastcall HammerBros__setWalkingSpeed(int result)
{
  FIELD_F32(result, 120) = flt_60AF1F80[FIELD_U8(result, 6604)];
  FIELD_U32(result, 124) = 0;
  FIELD_U32(result, 128) = 0;
  return result;
}
