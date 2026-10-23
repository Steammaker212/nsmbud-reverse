/* sub_6032D740
 * address: 0x6032D740   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6032D740(int a1)
{
  int v2; // r5
  unsigned int v3; // r1
  signed int v4; // r0
  int v5; // r1
  int v6; // r5
  unsigned int v7; // r1
  int result; // r0
  int v9; // r1
  Vec2 v10[3]; // [sp+0h] [bp-18h] BYREF

  v2 = PlayerMgr_instance;
  v3 = StageActor__distanceToPlayer((StateActor *)a1, v10);
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
  v6 = PlayerMgr_instance;
  v7 = StageActor__distanceToPlayer((StateActor *)a1, v10);
  result = 0;
  if ( v7 >= 4 )
    v7 = 0;
  v9 = *(_DWORD *)(v6 + 4 * v7 + 32);
  if ( v9 )
  {
    FIELD_F32(a1, 7336) = FIELD_F32(a1, 108) + flt_60AF2098[FIELD_U32(a1, 80)];
    FIELD_F32(a1, 7340) = (float)(FIELD_F32(v9, 112) + 16.0) + 18.0;
    FIELD_U32(a1, 7344) = FIELD_U32(a1, 116);
    return 1;
  }
  return result;
}
