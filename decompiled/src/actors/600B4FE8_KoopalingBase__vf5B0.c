/* KoopalingBase__vf5B0
 * address: 0x600B4FE8   size: 620   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall KoopalingBase__vf5B0(int a1)
{
  int v2; // r7
  int v3; // r1
  __int16 v4; // r2
  int v5; // r8
  int result; // r0
  StateBase *CurrentState; // r0
  int v8; // r5
  int *v9; // r1
  unsigned int v10; // r0
  int v11; // r5
  int v12; // r0
  unsigned int v13; // r1
  _DWORD *v14; // r6
  int v15; // s2

  v2 = a1 + 7096;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  FIELD_U32(a1, 7124) = sub_600B2FD4(a1, v3, v4);
  v5 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1036))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1040))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1312))(a1);
  result = FIELD_U32(a1, 7092);
  if ( result == 2 )
  {
    v13 = FIELD_U32(a1, 7136);
    if ( v13 )
    {
      v14 = (_DWORD *)ActorMgrRelated_getById(ActorMgr__instance + 27168, v13);
      if ( v14 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1044))(a1);
        FIELD_F64(a1, 7140) = ((double (__fastcall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 1152))(a1);
        FIELD_U32(a1, 7148) = v15;
        v14[29] = FIELD_U32(a1, 7148);
        v14[28] = FIELD_U32(a1, 7144);
        v14[27] = FIELD_U32(a1, 7140);
      }
    }
    result = FIELD_U32(a1, 7128);
    FIELD_U32(a1, 7128) = result - 1;
    if ( v5 && result <= 1 )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C832B4);
  }
  else if ( result == 1 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    result = (*(int (**)(void))(dword_60C83290 + 8))();
    if ( v8 == result )
    {
      v9 = *(int **)(*(_DWORD *)v2 + 12);
      v10 = *(_DWORD *)(*(_DWORD *)v2 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v10 )
        v9 += v10;
      v11 = *v9;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1200))(a1);
      result = sub_60418548(v11 + 4);
      if ( result == 1 )
      {
        FIELD_U32(a1, 7136) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1116))(a1);
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 724))(a1) == 1 && FIELD_U32(a1, 7180) == 1 )
          v12 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1080))(a1);
        else
          v12 = (int)(float)((float)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1076))(a1) / FIELD_F32(a1, 7760));
        FIELD_U32(a1, 7128) = v12;
        FIELD_U32(a1, 7092) = 2;
        return 2;
      }
    }
  }
  return result;
}
