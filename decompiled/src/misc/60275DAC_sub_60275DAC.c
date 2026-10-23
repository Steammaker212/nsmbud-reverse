/* sub_60275DAC
 * address: 0x60275DAC   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60275DAC(int a1)
{
  float v2; // s16
  float v3; // s18
  float v4; // s0
  int v5; // r0
  int v6; // r1
  StateBase *CurrentState; // r0
  int v8; // r5
  int v9; // r1
  int result; // r0
  int v11; // r2

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 584);
  nullsub_7();
  v4 = v2 - v3;
  v5 = FIELD_U32(a1, 8888);
  if ( (v5 & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  if ( (v5 & 0x440000) != 0 && v4 > 0.0 && (v5 & 0x10000000) == 0
    || (v5 & 0x880000) != 0 && v4 < 0.0 && (v5 & 0x20000000) == 0 )
  {
    FIELD_F32(a1, 120) = -FIELD_F32(a1, 120);
  }
  StateMgr__execute((StateMgr *)(a1 + 6336));
  v6 = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6416) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6420) = v6;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6336));
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v8 != (*((int (**)(void))LineFollower_StateID_Fall._.vtable + 2))() )
  {
    v9 = 0;
    FIELD_U32(a1, 80) = 0;
    if ( FIELD_F32(a1, 120) <= 0.0 )
    {
      v9 = 1;
      FIELD_U32(a1, 80) = 1;
    }
    FIELD_F32(a1, 6496) = *(float *)((char *)&flt_60AFDD1C[8 * v9] + ((FIELD_U32(a1, 20) >> 2) & 0x1C));
    ((void (__fastcall *)(int))sub_6000F338)(a1 + 6316);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8ECA0);
  }
  result = FIELD_U32(a1, 164);
  if ( result )
  {
    v11 = 0x8000000;
    if ( !FIELD_U32(a1, 6484) )
      v11 = -134217728;
    result += v11;
    FIELD_U32(a1, 164) = result;
  }
  return result;
}
