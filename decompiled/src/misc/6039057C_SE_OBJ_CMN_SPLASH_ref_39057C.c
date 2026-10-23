/* SE_OBJ_CMN_SPLASH_ref_39057C
 * address: 0x6039057C   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_SPLASH_ref_39057C(int a1)
{
  int v2; // r1
  int v3; // r2
  float v4; // s0
  int v5; // r5
  _BYTE *v6; // r6
  int v7; // r0
  StateBase *CurrentState; // r0
  int v9; // r7
  StateBase *v10; // r0
  int v11; // r6
  Vec2 a2; // [sp+8h] [bp-38h] BYREF
  int v14; // [sp+10h] [bp-30h]
  int v15; // [sp+14h] [bp-2Ch] BYREF
  _DWORD v16[3]; // [sp+18h] [bp-28h] BYREF
  float v17; // [sp+24h] [bp-1Ch] BYREF

  v2 = FIELD_U32(a1, 112);
  v3 = FIELD_U32(a1, 116);
  v16[0] = FIELD_U32(a1, 108);
  v16[1] = v2;
  v16[2] = v3;
  ((void (__fastcall *)(int *, float *, _DWORD *, _DWORD))checkLiquidCollisions)(
    &v15,
    &v17,
    v16,
    FIELD_U8(a1, 86));
  v5 = 0;
  v6 = (_BYTE *)(a1 + 6353);
  if ( v15 )
  {
    if ( !*v6 )
    {
      a2.x = FIELD_F32(a1, 6328);
      a2.y = v17;
      v14 = 1166843904;
      StageActor__createWaterSplash((StageActor *)a1, &a2, 877, 6, "SE_OBJ_CMN_SPLASH");
    }
    v4 = v17;
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  *v6 = v7;
  if ( v7 == 1 && (float)(FIELD_F32(a1, 112) + 24.0) <= v4 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v9 == (*(int (**)(void))(dword_60C96E14 + 8))()
      || (v10 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
          v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10),
          v11 == (*(int (**)(void))(dword_60C96E54 + 8))()) )
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C96E74);
      return 1;
    }
  }
  return v5;
}
