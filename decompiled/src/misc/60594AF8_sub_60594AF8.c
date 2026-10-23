/* sub_60594AF8
 * address: 0x60594AF8   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60594AF8(int a1)
{
  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6104));
  if ( FIELD_U32(a1, 8216) )
    LightMask__draw((RevealMaskRelated *)(a1 + 7760));
  return 1;
}
