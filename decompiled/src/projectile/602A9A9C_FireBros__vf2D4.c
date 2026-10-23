/* FireBros__vf2D4
 * address: 0x602A9A9C   size: 48   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BrosBase : 0x60267564
// 
// Overridden by: None
bool __fastcall FireBros__vf2D4(Enemy *a1)
{
  int v1; // r1

  v1 = 1;
  if ( (FIELD_U32(a1, 0x14) & 1) != 0 )
    return sub_60266410((int)a1, 0.0, 0.0);
  return v1;
}
