/* RiverPiranha__onDraw
 * address: 0x603DF25C   size: 40   group: misc
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
int __fastcall RiverPiranha__onDraw(int a1)
{
  DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 6356));
  return 1;
}
