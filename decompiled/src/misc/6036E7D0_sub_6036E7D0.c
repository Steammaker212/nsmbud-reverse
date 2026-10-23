/* sub_6036E7D0
 * address: 0x6036E7D0   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6036E7D0(int a1)
{
  Vec3 *v2; // r5
  int *v3; // r0
  int v4; // r1
  int v5; // r1
  int v6; // r2
  int v7; // r0
  unsigned int v8; // r1
  int *v9; // r0

  v2 = (Vec3 *)(a1 + 108);
  sub_60237208(a1 + 6768, (Vec3 *)(a1 + 108), 0, 0);
  sub_60237208(a1 + 6872, v2, 0, 0);
  if ( *(float *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 28) + 20) != 30.0 )
    pol_block_hatena_ref(a1);
  if ( FIELD_U32(a1, 6340) )
  {
    v3 = (int *)(a1 + 156);
    v4 = FIELD_U32(a1, 156);
    if ( FIELD_U8(a1, 6360) )
    {
      v5 = v4 - 0x400000;
      v6 = -402653184;
    }
    else
    {
      v5 = v4 + 0x400000;
      v6 = 402653184;
    }
  }
  else
  {
    v6 = 0x10000000;
    v3 = (int *)(a1 + 160);
    v5 = FIELD_U32(a1, 160) + 402653184;
  }
  *v3 = v5;
  FIELD_U32(a1, 164) += v6;
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + FIELD_F32(a1, 120);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + FIELD_F32(a1, 124);
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
  if ( !FIELD_U16(a1, 6278) )
    sub_603701F4(a1);
  v7 = FIELD_U32(a1, 6304);
  v8 = FIELD_U32(v7, 24);
  v9 = *(int **)(v7 + 28);
  if ( v8 > 1 )
    ++v9;
  return Animation_update(*v9);
}
