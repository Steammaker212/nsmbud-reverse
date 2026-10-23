/* sub_6021501C
 * address: 0x6021501C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6021501C(int a1)
{
  void *v1; // r1

  if ( !FIELD_U8(a1, 425) )
    return 0;
  if ( FIELD_U8(a1, 424) == 1 )
  {
    v1 = **(void ***)(a1 + 384);
    goto LABEL_7;
  }
  if ( !FIELD_U8(a1, 424) )
  {
    v1 = **(void ***)(a1 + 376);
LABEL_7:
    DrawMgr_drawModel(DrawMgr_instance, v1);
  }
  return 1;
}
