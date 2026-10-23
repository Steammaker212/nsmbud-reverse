/* KaniboTama__onDraw
 * address: 0x60310F30   size: 56   group: misc
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
int __fastcall KaniboTama__onDraw(int a1)
{
  if ( !FIELD_U32(a1, 6408) )
    DrawMgr_drawModel(DrawMgr_instance, *(void **)(a1 + 6300));
  return 1;
}
