/* RollingHill_onDraw
 * address: 0x6060A354   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall RollingHill_onDraw(int a1)
{
  if ( !FIELD_U8(a1, 1048) )
    DrawMgr_drawModel(DrawMgr_instance, *(void **)(a1 + 644));
  return 1;
}
