/* sub_60319CE8
 * address: 0x60319CE8   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60319CE8(int a1)
{
  if ( FIELD_U8(a1, 535) )
    DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 6304));
  return 1;
}
