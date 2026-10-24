/* sub_600E21F0
 * address: 0x600E21F0   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_600E21F0(EffectWrapper *a1, int a2)
{
  float v4; // s18
  float v5; // r6
  float v6; // s16
  float v7; // s18
  int v8; // r1
  Vec3i v10; // [sp+8h] [bp-38h] BYREF
  Vec3 v11; // [sp+14h] [bp-2Ch] BYREF

  v4 = *(float *)&FIELD_U32(a1 + (1) * 104, 0x8);
  v5 = *(float *)&FIELD_U32(a1 + (1) * 104, 0x4);
  v6 = (*(float (__fastcall **)(EffectWrapper *))(FIELD_U32(a1, 0x0) + 204))(a1);
  v7 = v4 - (float)(v6 * (*(float (__fastcall **)(EffectWrapper *, float))(FIELD_U32(a1, 0x0) + 200))(a1, v6));
  v11.x = v5;
  v8 = -1073741824;
  if ( !a2 )
    v8 = 0x40000000;
  v11.y = v7;
  v11.z = 4500.0;
  v10.x = 0;
  v10.z = 0;
  v10.y = v8;
  return EffectWrapper_update(a1 + 66, 255, &v11, &v10, 0);
}
