/* sub_603D6980
 * address: 0x603D6980   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603D6980(int a1)
{
  int v2; // r6
  int v3; // r1
  int v4; // r0
  unsigned int v5; // r0
  int v6; // r0
  float v7; // s0
  int v8; // r2
  bool v9; // zf
  bool v10; // nf
  bool v11; // vf
  int v12; // r2
  int v13; // r1
  Vec2 v15; // [sp+0h] [bp-20h] BYREF

  v2 = 0;
  v3 = a1 + 6300;
  v4 = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
  FIELD_U32(v4, 20) = 1077936128;
  FIELD_U32(v4, 28) |= 2u;
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v3 + 12) + 24) = 0;
  *(_DWORD *)(FIELD_U32(a1, 6304) + 24) = 0x40000000;
  if ( ((0x29u >> FIELD_U32(a1, 11848)) & 1) != 0 )
  {
    v5 = StageActor__distanceToPlayer((StateActor *)a1, &v15);
    if ( v5 != -1 )
    {
      v2 = 0;
      if ( v5 >= 4 )
        v5 = 0;
      v6 = *(_DWORD *)(PlayerMgr_instance + 4 * v5 + 32);
      if ( v6 )
      {
        v7 = FIELD_F32(v6, 112) - FIELD_F32(a1, 11756);
        if ( v7 <= 16.0 || (v2 = 1, v7 > 36.0) )
        {
          v2 = 0;
          if ( v7 > 36.0 )
          {
            v2 = 1;
            if ( (FIELD_U32(a1, 11852) & 3) == 0 )
              v2 = 2;
            FIELD_U32(a1, 11852) &= 3u;
          }
        }
        if ( FIELD_F32(v6, 108) < FIELD_F32(a1, 11752) )
          v2 = 5 - v2;
      }
    }
  }
  else
  {
    v2 = dword_60B01314[sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 28];
  }
  FIELD_U32(a1, 11844) = v2;
  sub_603D94F8(a1);
  FIELD_U32(a1, 11848) = ((unsigned __int8)FIELD_U32(a1, 11848) + 1) & 7;
  v8 = FIELD_U32(a1, 11844);
  FIELD_U8(a1, 11813) = 1;
  FIELD_U32(a1, 120) = 0;
  v11 = __OFSUB__(v8, 2);
  v9 = v8 == 2;
  v10 = v8 - 2 < 0;
  v12 = 2;
  v13 = !(v10 ^ v11 | v9);
  if ( v13 != FIELD_U32(a1, 80) )
  {
    FIELD_U32(a1, 80) = v13;
    v12 = 1;
    FIELD_U8(a1, 11812) = 1;
  }
  FIELD_U32(a1, 11856) = v12;
  return 11856;
}
