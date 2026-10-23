/* sub_6032D0D0
 * address: 0x6032D0D0   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6032D0D0(int a1)
{
  int v2; // r5
  unsigned int v3; // r1
  signed int v4; // r0
  int v5; // r1
  Vec2 v7; // [sp+0h] [bp-18h] BYREF

  v2 = PlayerMgr_instance;
  v3 = StageActor__distanceToPlayer((StateActor *)a1, &v7);
  v4 = 0;
  if ( v3 >= 4 )
    v3 = 0;
  v5 = *(_DWORD *)(v2 + 4 * v3 + 32);
  if ( v5 )
  {
    if ( (float)(FIELD_F32(a1, 108) + -40.0) >= FIELD_F32(v5, 108) )
      v4 = 1;
  }
  else
  {
    v4 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  }
  FIELD_U32(a1, 80) = v4;
  FIELD_U32(a1, 120) = dword_60AFF678[v4];
  FIELD_U8(a1, 13064) = 0;
  sub_60321FA0(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
  FIELD_U16(a1, 6276) = 90;
  return 6276;
}
