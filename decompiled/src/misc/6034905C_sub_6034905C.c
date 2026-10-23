/* sub_6034905C
 * address: 0x6034905C   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6034905C(int a1, ActiveCollider *a2, ActiveCollider *a3)
{
  Actor *v6; // r0
  StateBase *CurrentState; // r0
  int v8; // r6
  StateBase *v9; // r0
  int v10; // r5
  char v11; // r0
  float v12; // r2
  int v13; // r0
  Vec3 v15; // [sp+4h] [bp-1Ch] BYREF

  if ( FIELD_U32(a3, 0x88) != 10 )
    return Enemy__vf100((Enemy *)a1, a2, a3);
  v6 = &FIELD_U32(a3, 0x40);
  if ( !v6 || Actor__getProfileId(v6) != 807 )
    return Enemy__vf100((Enemy *)a1, a2, a3);
  if ( FIELD_F32(a1, 124) < 0.0 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v8 == (*(int (**)(void))(dword_60C949D0 + 8))()
      || (v9 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
          v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9),
          v10 == (*(int (**)(void))(dword_60C949F0 + 8))()) )
    {
      FIELD_F32(a1, 120) = FIELD_F32(a1, 120) * 0.97;
    }
    if ( !FIELD_U8(a1, 6372) )
    {
      v11 = 0;
      if ( !FIELD_U8(a1, 6054) && !FIELD_U8(a1, 6373) )
      {
        v12 = FIELD_F32(a1, 112);
        v13 = FIELD_U32(a1, 5956);
        v15.x = FIELD_F32(a1, 108);
        v15.y = v12;
        v15.z = 4500.0;
        EffectData_create(dword_60AFFC94[BYTE1(v13)], &v15, 0, 0);
        v11 = 1;
      }
      FIELD_U8(a1, 6372) = v11;
    }
  }
  return 0;
}
