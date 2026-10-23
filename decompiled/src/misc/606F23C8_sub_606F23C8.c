/* sub_606F23C8
 * address: 0x606F23C8   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_606F23C8(int a1)
{
  Vec3 *v2; // r8
  float v3; // s20
  float v4; // s24
  float v5; // s18
  float v6; // s20
  int v7; // r0
  int v8; // r7
  unsigned int v9; // r6
  unsigned int v10; // r0
  int v11; // r1
  Vec3 *v12; // r2
  EffectWrapper *v13; // r0
  int v14; // r0
  float v15; // s0

  v2 = (Vec3 *)(a1 + 144);
  v3 = FIELD_F32(a1, 7532);
  v4 = FIELD_F32(a1, 7540);
  v5 = FIELD_F32(a1, 7536) + -8.0;
  FIELD_F32(a1, 7368) = v3 + 8.0;
  FIELD_F32(a1, 7372) = v5;
  FIELD_U32(a1, 7376) = 1175232512;
  EffectWrapper_update((EffectWrapper *)(a1 + 6120), 409, (Vec3 *)(a1 + 7368), 0, (Vec3 *)(a1 + 144));
  v6 = v3 + 64.0;
  v7 = (int)(float)(v4 * 0.0625);
  if ( v7 - 4 >= 5 )
  {
    v8 = v7 - 8;
    v9 = 0;
    do
    {
      v10 = 0;
      if ( v9 < 0xA )
        v10 = v9;
      v11 = a1 + 12 * v10;
      v12 = (Vec3 *)(v11 + 7392);
      FIELD_F32(v11, 7392) = v6 + 8.0;
      FIELD_F32(v11, 7396) = v5;
      FIELD_U32(v11, 7400) = 1175232512;
      *(_BYTE *)(a1 + v10 + 7512) = 1;
      v13 = (EffectWrapper *)(a1 + 104 * v10 + 6328);
      if ( v8 < 4 )
      {
        EffectWrapper_update(v13, 407, v12, 0, v2);
        v15 = 16.0;
        v14 = -1;
      }
      else
      {
        EffectWrapper_update(v13, 408, v12, 0, v2);
        v14 = -4;
        v15 = 64.0;
      }
      v6 = v6 + v15;
      v8 += v14;
      ++v9;
    }
    while ( v8 );
  }
  FIELD_F32(a1, 7380) = v6 + 8.0;
  FIELD_F32(a1, 7384) = v5;
  FIELD_U32(a1, 7388) = 1175232512;
  return EffectWrapper_update((EffectWrapper *)(a1 + 6224), 410, (Vec3 *)(a1 + 7380), 0, v2);
}
