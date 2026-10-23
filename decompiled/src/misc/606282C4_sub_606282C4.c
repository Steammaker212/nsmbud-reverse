/* sub_606282C4
 * address: 0x606282C4   size: 596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606282C4(int a1)
{
  int Area; // r0
  float v3; // s20
  float v4; // s16
  float v5; // s22
  int v6; // r0
  int v7; // r4
  float v8; // s0
  float v9; // s2
  int v10; // r4
  int v11; // r0
  int v12; // r5
  float v13; // s0
  float v14; // s2
  int v15; // r0
  int v16; // r4
  float v17; // s0
  float v18; // s2
  int ActorSlotChecked; // r0
  int v20; // r4
  float WrappedXPos; // s0
  float v22; // s2
  int v24; // [sp+0h] [bp-40h] BYREF
  int v25; // [sp+4h] [bp-3Ch]
  int v26; // [sp+8h] [bp-38h]
  int v27; // [sp+Ch] [bp-34h]

  v24 = 2139095039;
  v25 = 2139095039;
  v26 = -8388609;
  v27 = -8388609;
  Area = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
  LevelArea_getLocation(Area, (float *)&v24, FIELD_U8(a1, 7509));
  v3 = *(float *)&v24;
  v4 = *(float *)&v25;
  v5 = *(float *)&v27;
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 1) == 0
    || (v6 = Player_getActorSlotChecked(PlayerMgr_instance, 0), (v7 = v6) == 0)
    || (v8 = AreaTask_getWrappedXPos(AreaTask_intance, FIELD_F32(v6, 108)), v9 = FIELD_F32(v7, 112), v9 > v5)
    || v3 > v8
    || (v10 = 1, v4 > v9) )
  {
    if ( (FIELD_U8(PlayerMgr_instance, 66) & 2) == 0
      || (v10 = 1, v11 = Player_getActorSlotChecked(PlayerMgr_instance, 1), (v12 = v11) == 0)
      || (v13 = AreaTask_getWrappedXPos(AreaTask_intance, FIELD_F32(v11, 108)), v14 = FIELD_F32(v12, 112), v14 > v5)
      || v3 > v13
      || v4 > v14 )
    {
      if ( (FIELD_U8(PlayerMgr_instance, 66) & 4) == 0
        || (v15 = Player_getActorSlotChecked(PlayerMgr_instance, 2), (v16 = v15) == 0)
        || (v17 = AreaTask_getWrappedXPos(AreaTask_intance, FIELD_F32(v15, 108)), v18 = FIELD_F32(v16, 112),
                                                                                    v18 > v5)
        || v3 > v17
        || (v10 = 1, v4 > v18) )
      {
        if ( (FIELD_U8(PlayerMgr_instance, 66) & 8) != 0
          && (ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 3), (v20 = ActorSlotChecked) != 0)
          && (WrappedXPos = AreaTask_getWrappedXPos(AreaTask_intance, FIELD_F32(ActorSlotChecked, 108)),
              v22 = FIELD_F32(v20, 112),
              v22 <= v5)
          && v3 <= WrappedXPos )
        {
          return v4 <= v22;
        }
        else
        {
          return 0;
        }
      }
    }
  }
  return v10;
}
