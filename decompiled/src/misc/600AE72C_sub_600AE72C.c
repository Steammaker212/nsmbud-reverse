/* sub_600AE72C
 * address: 0x600AE72C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_600AE72C(int a1)
{
  if ( FIELD_U8(a1, 6108) )
  {
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6104));
    LightSource_update1((LightSource *)(a1 + 7488), 53, (Vec3 *)(a1 + 108), 0, 0, 0, 0, 0, 0);
    LightSource_unkUpdate3((LightSource *)(a1 + 7488));
  }
  return 1;
}
