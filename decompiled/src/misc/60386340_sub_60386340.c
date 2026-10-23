/* sub_60386340
 * address: 0x60386340   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60386340(int a1, unsigned int a2)
{
  if ( a2 >= 2 )
    a2 = 0;
  return DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 4 * a2 + 8));
}
