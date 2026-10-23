/* BobOmb_onDraw
 * address: 0x6025DFC4   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BobOmb_onDraw(int a1)
{
  __int16 v2; // r0
  __int16 *v3; // r5

  v3 = (__int16 *)(a1 + 6364);
  v2 = FIELD_U16(a1, 6364);
  if ( (v2 & 8) == 0 )
  {
    DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 6352));
    v2 = *v3;
  }
  if ( (v2 & 0xC) != 0 )
    LightMask__draw((RevealMaskRelated *)(a1 + 6492));
  return 1;
}
