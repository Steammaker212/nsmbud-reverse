/* SE_EMY_MECHAKOOPA_WALK_ref
 * address: 0x60348704   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_MECHAKOOPA_WALK_ref(int a1)
{
  int v2; // r6
  signed int v3; // r0
  signed int v4; // r7
  ActorScaler *v5; // r0
  int v6; // s2
  float v7; // r1
  int v8; // r6
  StateBase *CurrentState; // r0
  int v10; // r5
  Vec2 v12; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v2 = sub_6034891C();
  v3 = sub_602A588C(a1);
  v4 = v3;
  if ( v2 == 1 )
  {
    FIELD_U8(a1, 6059) = FIELD_U8(a1, 2872) & 1;
  }
  else if ( v3 != 1 )
  {
    goto LABEL_5;
  }
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6356));
LABEL_5:
  StateMgr__execute((StateMgr *)(a1 + 6084));
  v5 = (ActorScaler *)(a1 + 6380);
  if ( (v2 | v4) == 1 )
  {
    ActorScaler_execute(v5);
  }
  else
  {
    FIELD_U32(a1, 6404) = 0;
    FIELD_F64(a1, 6384) = ((double (__fastcall *)(ActorScaler *))*(_DWORD *)FIELD_U32(v5, 0x0))(v5);
    FIELD_U32(a1, 6392) = v6;
  }
  sub_602A33AC((_BYTE *)a1);
  if ( v2 )
  {
    FIELD_F32(a1, 304) = (float)(*(float *)((char *)sinLutTable + ((FIELD_U32(a1, 160) >> 20) & 0xFF0))
                                 + (float)((float)((float)(FIELD_U32(a1, 160) & 0xFFFFFF)
                                                 * *(float *)((char *)&sinLutTable[1]
                                                            + ((FIELD_U32(a1, 160) >> 20) & 0xFF0)))
                                         * 0.000000059605))
                         * 1.5;
    if ( !FIELD_U32(a1, 6368) && sub_60418548(**(_DWORD **)(FIELD_U32(a1, 6356) + 12) + 4) )
    {
      v7 = FIELD_F32(a1, 112);
      v8 = Global_BasicSoundActor1;
      position.x = FIELD_F32(a1, 108);
      position.y = v7;
      mapPositionToScreen(&v12, &position);
      BasicSoundActor1_playSound(v8, "SE_EMY_MECHAKOOPA_WALK", (int)&v12, 0);
    }
    sub_60003840(a1);
  }
  if ( sub_60003AE0((StageActor *)a1) == 1 )
    SE_EMY_DOWN_ref_2A7624(a1);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v10 != (*((int (**)(void))stru_60C8EA70._.vtable + 2))() )
    StageActor__cullCheck((StageActor *)a1, 0);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U8(a1, 6373) = 0;
  return 1;
}
