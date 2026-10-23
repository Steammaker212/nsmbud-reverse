/* sub_60041FC0
 * address: 0x60041FC0   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60041FC0(int a1)
{
  if ( FIELD_U8(a1, 11796) )
  {
    DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 11776));
    DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 6320));
  }
  else
  {
    sub_600D04B4(a1);
  }
  return 1;
}
