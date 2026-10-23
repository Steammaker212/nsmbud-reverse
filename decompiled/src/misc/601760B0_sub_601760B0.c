/* sub_601760B0
 * address: 0x601760B0   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601760B0(int a1)
{
  void *v1; // r1

  if ( !FIELD_U8(a1, 587) )
    return 0;
  if ( FIELD_U8(a1, 586) == 1 )
  {
    v1 = **(void ***)(a1 + 384);
    goto LABEL_7;
  }
  if ( !FIELD_U8(a1, 586) )
  {
    v1 = **(void ***)(a1 + 376);
LABEL_7:
    DrawMgr_drawModel(DrawMgr_instance, v1);
  }
  return 1;
}
