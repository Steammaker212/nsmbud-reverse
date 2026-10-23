/* Fuzzy__onDraw
 * address: 0x6027767C   size: 56   group: misc
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
signed int __fastcall Fuzzy__onDraw(int a1)
{
  if ( !FIELD_U32(a1, 0x1970) )
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 0x189C));
  return 1;
}
