/* sub_6063BC20
 * address: 0x6063BC20   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6063BC20(_DWORD **a1)
{
  DrawMgr_drawModel2(DrawMgr_instance, a1[1548]);
  if ( ((int (__fastcall *)(_DWORD **))(*a1)[66])(a1) == 1 )
  {
    DrawMgr_drawModel2(DrawMgr_instance, a1[1549]);
    sub_6063CCD0(a1 + 1550);
  }
  return 1;
}
