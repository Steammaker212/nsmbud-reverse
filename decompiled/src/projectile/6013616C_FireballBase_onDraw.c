/* FireballBase_onDraw
 * address: 0x6013616C   size: 24   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall FireballBase_onDraw(FireballBase *this)
{
  LightMask__draw(&FIELD_U32(this, 0x17D4));
  return 1;
}
