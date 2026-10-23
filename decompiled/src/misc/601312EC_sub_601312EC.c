/* sub_601312EC
 * address: 0x601312EC   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_601312EC(int a1)
{
  float v3; // [sp+14h] [bp-Ch] BYREF

  v3 = (float)(FIELD_F32(a1, 144) + 1.0) + -1.6;
  LightSource_update1((LightSource *)(a1 + 6596), 36, (Vec3 *)(a1 + 108), 0, &v3, 0, 0, 0, 0);
  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6104));
  return 1;
}
