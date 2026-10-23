/* sub_6036E4AC
 * address: 0x6036E4AC   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6036E4AC(int a1)
{
  Vec3 *v2; // r5
  int v3; // r1
  int v4; // r0
  int v5; // r1
  int v6; // r0
  unsigned int v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  int v10; // r0
  unsigned int v11; // r1
  int *v12; // r0
  Vec2 v14; // [sp+0h] [bp-18h] BYREF

  v2 = (Vec3 *)(a1 + 108);
  sub_60237208(a1 + 6768, (Vec3 *)(a1 + 108), 0, 0);
  sub_60237208(a1 + 6872, v2, 0, 0);
  if ( *(float *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 28) + 20) != 30.0 )
    pol_block_hatena_ref(a1);
  v3 = -4194304;
  FIELD_F32(a1, 112) = FIELD_F32(dword_60CC6484, 124) - FIELD_F32(a1, 6312);
  v4 = FIELD_U8(a1, 6360);
  if ( !FIELD_U8(a1, 6360) )
    v3 = 0x400000;
  FIELD_U32(a1, 156) += v3;
  v5 = -402653184;
  if ( !v4 )
    v5 = 402653184;
  FIELD_U32(a1, 164) += v5;
  v6 = FIELD_U16(a1, 6276);
  if ( v6 == 15 )
  {
    v7 = StageActor__distanceToPlayer((StateActor *)a1, &v14);
    if ( v7 == -1 )
      goto LABEL_13;
    if ( v7 >= 4 )
      v7 = 0;
    v8 = *(_DWORD **)(PlayerMgr_instance + 4 * v7 + 32);
    if ( !v8 )
    {
LABEL_13:
      FIELD_U32(a1, 6368) = FIELD_U32(a1, 108);
      FIELD_F32(a1, 6372) = FIELD_F32(a1, 112) + -32.0;
      v9 = (_DWORD *)(a1 + 6376);
    }
    else
    {
      FIELD_U32(a1, 6368) = v8[27];
      FIELD_U32(a1, 6372) = v8[28];
      FIELD_U32(a1, 6376) = v8[29];
      v9 = (_DWORD *)(a1 + 6376);
    }
    *v9 = FIELD_U32(a1, 116);
    v6 = FIELD_U16(a1, 6276);
  }
  if ( !v6 )
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C95FC0);
  v10 = FIELD_U32(a1, 6304);
  v11 = FIELD_U32(v10, 24);
  v12 = *(int **)(v10 + 28);
  if ( v11 > 1 )
    ++v12;
  return Animation_update(*v12);
}
