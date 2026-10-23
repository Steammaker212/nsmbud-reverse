/* sub_6057A4C4
 * address: 0x6057A4C4   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6057A4C4(int a1)
{
  CollisionMgr_Sensor *v2; // r2
  CollisionMgr_Sensor *v3; // r3
  int v4; // r1
  _DWORD *v5; // r12
  CollisionMgr_Sensor *v6; // r0
  CollisionMgr *v7; // r0
  CollisionMgr_Sensor *v8; // r1

  FIELD_U32(a1, 6968) = -1070386381;
  v2 = (CollisionMgr_Sensor *)(a1 + 6968);
  FIELD_U32(a1, 6972) = 1077097267;
  FIELD_U32(a1, 6104) = -1070386381;
  v3 = (CollisionMgr_Sensor *)(a1 + 6104);
  FIELD_U32(a1, 6108) = 1077097267;
  v4 = FIELD_U32(a1, 7388);
  if ( v4 == 2 )
  {
    FIELD_U32(a1, 6976) = -1056964608;
    FIELD_U32(a1, 6112) = 1090519040;
  }
  else if ( v4 )
  {
    v5 = (_DWORD *)(a1 + 6976);
    if ( v4 == 3 )
    {
      *v5 = -1056964608;
      FIELD_U32(a1, 6112) = 1090519040;
      FIELD_U32(a1, 3192) |= 0x40000000u;
    }
    else
    {
      *v5 = 1065353216;
    }
  }
  else
  {
    FIELD_U32(a1, 6976) = 1065353216;
    FIELD_U32(a1, 6112) = 1098907648;
  }
  if ( FIELD_U8(a1, 7338) )
  {
    FIELD_U32(a1, 3200) &= ~0x40000000u;
    if ( v4 != 3 )
      FIELD_U32(a1, 3192) &= ~0x40000000u;
    goto LABEL_20;
  }
  if ( v4 == 2 )
  {
    v6 = (CollisionMgr_Sensor *)&unk_60B047DC;
    goto LABEL_15;
  }
  if ( !v4 )
  {
    v6 = (CollisionMgr_Sensor *)&unk_60B047D0;
LABEL_15:
    CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, v2, v3, v6);
    goto LABEL_20;
  }
  v7 = (CollisionMgr *)(a1 + 648);
  if ( v4 == 3 )
  {
    v8 = (CollisionMgr_Sensor *)&unk_60B047DC;
  }
  else
  {
    v3 = 0;
    v8 = (CollisionMgr_Sensor *)&unk_60B047D0;
  }
  CollisionMgr_init(v7, (StateActor *)a1, v2, v3, v8);
LABEL_20:
  FIELD_U32(a1, 3200) |= 0x20000u;
  FIELD_U32(a1, 7380) = 0;
  return 7380;
}
