/* sub_605F84B0
 * address: 0x605F84B0   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605F84B0(int a1)
{
  if ( FIELD_U8(a1, 6324) )
    DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 6300));
  return 1;
}
