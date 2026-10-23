/* sub_602FA42C
 * address: 0x602FA42C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602FA42C(int a1)
{
  void *v2; // r5

  v2 = DrawMgr_instance;
  DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 6304));
  if ( FIELD_U8(a1, 6464) )
  {
    DrawMgr_drawModel(v2, **(void ***)(a1 + 6312));
    DrawMgr_drawModel(v2, **(void ***)(a1 + 6308));
  }
  LightMask__draw((RevealMaskRelated *)(a1 + 6320));
  return 1;
}
