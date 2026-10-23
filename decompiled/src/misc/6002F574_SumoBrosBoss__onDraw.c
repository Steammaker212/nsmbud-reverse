/* SumoBrosBoss__onDraw
 * address: 0x6002F574   size: 56   group: misc
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
int __fastcall SumoBrosBoss__onDraw(int a1)
{
  if ( !FIELD_U8(a1, 7442) )
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 7096));
  return 1;
}
