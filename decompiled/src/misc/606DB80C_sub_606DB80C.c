/* sub_606DB80C
 * address: 0x606DB80C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606DB80C(int a1)
{
  if ( FIELD_U8(a1, 6556) )
    DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 6108));
  if ( FIELD_U8(a1, 6553) )
    DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 6112));
  return 1;
}
