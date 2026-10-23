/* sub_60737A9C
 * address: 0x60737A9C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60737A9C(int a1)
{
  float v1; // r2
  float v2; // r3
  Vec3 v4; // [sp+8h] [bp-18h] BYREF
  int a4; // [sp+14h] [bp-Ch] BYREF

  if ( FIELD_U32(a1, 7596) == 1 )
  {
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 7388));
  }
  else
  {
    a4 = 0;
    v1 = FIELD_F32(a1, 112);
    v2 = FIELD_F32(a1, 116);
    v4.x = FIELD_F32(a1, 108);
    v4.y = v1;
    v4.z = v2;
    DrawMgr_drawTile((int)DrawMgr_instance, FIELD_U32(a1, 7296), &v4, &a4, (Vec3 *)(a1 + 144));
  }
  return 1;
}
