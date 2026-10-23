/* BrosBase__onDraw
 * address: 0x60264068   size: 40   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F54
// 
// Overridden by: None
signed int __fastcall BrosBase__onDraw(int a1)
{
  DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 0x189C));
  return 1;
}
