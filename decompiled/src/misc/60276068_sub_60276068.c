/* sub_60276068
 * address: 0x60276068   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60276068(int a1)
{
  int v2; // r0
  int v3; // r1
  StateBase *CurrentState; // r0
  int v5; // r5
  int v6; // r1
  _BYTE *result; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r1

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  nullsub_7();
  v2 = FIELD_U32(a1, 8888);
  if ( (v2 & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
  }
  else if ( (v2 & 0x440000) != 0 && (v2 & 0x10000000) == 0 || (v2 & 0x880000) != 0 && (v2 & 0x20000000) == 0 )
  {
    FIELD_F32(a1, 120) = -FIELD_F32(a1, 120);
  }
  StateMgr__execute((StateMgr *)(a1 + 6336));
  v3 = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6416) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6420) = v3;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6336));
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v5 != (*((int (**)(void))LineFollower_StateID_Fall._.vtable + 2))() )
  {
    v6 = 0;
    FIELD_U32(a1, 80) = 0;
    if ( FIELD_F32(a1, 120) <= 0.0 )
    {
      v6 = 1;
      FIELD_U32(a1, 80) = 1;
    }
    FIELD_F32(a1, 6496) = *(float *)((char *)&flt_60AFDD1C[8 * v6] + ((FIELD_U32(a1, 20) >> 2) & 0x1C));
    sub_6000F338(a1 + 6316);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8ECA0);
  }
  result = (_BYTE *)(a1 + 6508);
  v8 = FIELD_S8(a1, 6508);
  if ( v8 == 2 )
  {
    result = *(_BYTE **)(a1 + 164);
    if ( result )
    {
      if ( FIELD_U32(a1, 6484) )
        result += 0x8000000;
      else
        result -= 0x8000000;
      FIELD_U32(a1, 164) = result;
    }
  }
  else if ( v8 == 1 )
  {
    v9 = 0x8000000;
    if ( !FIELD_U32(a1, 6484) )
      v9 = -134217728;
    v10 = v9 + FIELD_U32(a1, 164);
    FIELD_U32(a1, 164) = v10;
    if ( !v10 )
      *result = 2;
  }
  return result;
}
