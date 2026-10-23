/* sub_606DFFC8
 * address: 0x606DFFC8   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606DFFC8(int a1)
{
  int v2; // r0
  float v3; // s0
  float v4; // s0
  Vec3 *v6; // [sp+14h] [bp-Ch] BYREF

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6104));
  v2 = FIELD_U32(a1, 6108);
  v3 = FIELD_F32(v2, 20);
  v6 = (Vec3 *)1065353216;
  if ( v3 <= 13.0 )
  {
    v4 = v3 * 0.076923;
    goto LABEL_5;
  }
  if ( v3 >= 37.0 )
  {
    v4 = (float)(FIELD_F32(v2, 8) - v3) * 0.043478;
LABEL_5:
    v6 = (Vec3 *)LODWORD(v4);
  }
  return LightSource_update1((LightSource *)(a1 + 6996), 0x39, (Vec3 *)(a1 + 108), 0, 0, (float *)&v6, 0, 0, 0);
}
