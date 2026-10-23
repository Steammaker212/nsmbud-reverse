/* sub_606951B4
 * address: 0x606951B4   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606951B4(int a1)
{
  DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 912));
  if ( FIELD_U32(a1, 1000) )
    DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 916));
  return 1;
}
