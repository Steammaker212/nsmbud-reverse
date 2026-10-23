/* sub_6036E298
 * address: 0x6036E298   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6036E298(int a1)
{
  Vec3 *v2; // r5
  int v3; // r0
  unsigned int v4; // r0
  _DWORD *v5; // r0
  _DWORD *v6; // r0
  int v7; // r0
  unsigned int v8; // r1
  int *v9; // r0
  Vec2 v11; // [sp+0h] [bp-18h] BYREF

  v2 = (Vec3 *)(a1 + 108);
  sub_60237208(a1 + 6768, (Vec3 *)(a1 + 108), 0, 0);
  sub_60237208(a1 + 6872, v2, 0, 0);
  if ( *(float *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 28) + 20) != 30.0 )
    pol_block_hatena_ref(a1);
  FIELD_U32(a1, 160) += 402653184;
  FIELD_U32(a1, 164) += 0x10000000;
  FIELD_F32(a1, 112) = FIELD_F32(dword_60CC6484, 124) - FIELD_F32(a1, 6312);
  v3 = FIELD_U16(a1, 6276);
  if ( v3 == 30 )
  {
    v4 = StageActor__distanceToPlayer((StateActor *)a1, &v11);
    if ( v4 == -1 )
      goto LABEL_9;
    if ( v4 >= 4 )
      v4 = 0;
    v5 = *(_DWORD **)(PlayerMgr_instance + 4 * v4 + 32);
    if ( !v5 )
    {
LABEL_9:
      FIELD_U32(a1, 6368) = FIELD_U32(a1, 108);
      FIELD_F32(a1, 6372) = FIELD_F32(a1, 112) + -32.0;
      v6 = (_DWORD *)(a1 + 6376);
    }
    else
    {
      FIELD_U32(a1, 6368) = v5[27];
      FIELD_U32(a1, 6372) = v5[28];
      FIELD_U32(a1, 6376) = v5[29];
      v6 = (_DWORD *)(a1 + 6376);
    }
    *v6 = FIELD_U32(a1, 116);
    v3 = FIELD_U16(a1, 6276);
  }
  if ( !v3 )
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C95FC0);
  v7 = FIELD_U32(a1, 6304);
  v8 = FIELD_U32(v7, 24);
  v9 = *(int **)(v7 + 28);
  if ( v8 > 1 )
    ++v9;
  return Animation_update(*v9);
}
