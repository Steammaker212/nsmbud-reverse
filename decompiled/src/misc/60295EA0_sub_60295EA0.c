/* sub_60295EA0
 * address: 0x60295EA0   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60295EA0(int a1)
{
  float v2; // s0
  int v3; // r8
  int *v4; // r5
  int v5; // r6
  _DWORD *result; // r0
  _DWORD *v7; // r2
  int v8; // r3
  unsigned int v9; // r7
  unsigned int v10; // r2
  _DWORD *v11; // r0
  int v12; // r1
  unsigned int v13; // r2
  unsigned int v14; // r0
  _DWORD *v15; // r0
  int v16; // r1
  unsigned int v17; // r2
  unsigned int v18; // r0
  int v19; // r6
  int v20; // r6
  ActiveColliderMgr *v21; // r7
  ActiveColliderMgr *v22; // r7

  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = (*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 800))(a1, v2);
  v4 = (int *)(a1 + 6664);
  v5 = FIELD_U32(a1, 6664);
  if ( v5 <= (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 804))(a1)
    && (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 772))(a1) == 1 )
  {
    FIELD_U32(a1, 120) = 0;
    FIELD_U32(a1, 124) = 0;
    FIELD_U32(a1, 128) = 0;
    ++FIELD_U8(a1, 6740);
    result = (_DWORD *)(a1 + 6300);
    v7 = *(_DWORD **)(a1 + 6300);
    v8 = v7[3];
    v9 = v7[2];
    v10 = v7[17];
    if ( v9 > v10 )
      v8 += 4 * v10;
    *(_DWORD *)(*(_DWORD *)v8 + 24) = 1068708659;
    if ( FIELD_U8(a1, 6740) >= 0x1Fu )
    {
      v11 = (_DWORD *)*result;
      v12 = v11[3];
      v13 = v11[2];
      v14 = v11[17];
      if ( v13 > v14 )
        v12 += 4 * v14;
      *(_DWORD *)(*(_DWORD *)v12 + 24) = 1065353216;
      return (_DWORD *)(*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8FC60);
    }
  }
  else
  {
    v15 = *(_DWORD **)(a1 + 6300);
    v16 = v15[3];
    v17 = v15[2];
    v18 = v15[17];
    if ( v17 > v18 )
      v16 += 4 * v18;
    *(_DWORD *)(*(_DWORD *)v16 + 24) = 1065353216;
    sub_602970EC(a1, 0);
    v19 = *v4 - 1;
    *v4 = v19;
    if ( v19 <= (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 808))(a1) )
      FIELD_U8(a1, 6848) = 1;
    v20 = *v4;
    if ( v20 <= (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 812))(a1) )
    {
      FIELD_U8(a1, 6673) = 1;
      v21 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6360))
        && !ActiveColliderMgr_isInCreateList(v21, (ActiveCollider *)(a1 + 6360)) )
      {
        ActiveColliderMgr_addToCreateList(v21, (ActiveCollider *)(a1 + 6360));
      }
      v22 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7164))
        && !ActiveColliderMgr_isInCreateList(v22, (ActiveCollider *)(a1 + 7164)) )
      {
        ActiveColliderMgr_addToCreateList(v22, (ActiveCollider *)(a1 + 7164));
      }
    }
    result = (_DWORD *)*v4;
    if ( *v4 <= 0 )
    {
      return (_DWORD *)(*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8FC3C);
    }
    else if ( (int)result >= v3 )
    {
      FIELD_U32(a1, 160) += (int)(float)((float)(2147500000.0
                                                  * (float)(360.0
                                                          / (float)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 796))(a1)))
                                          / 180.0);
      result = (_DWORD *)*v4;
      if ( *v4 == v3 )
      {
        result = (_DWORD *)dword_60C8FBF0;
        FIELD_U32(a1, 160) = dword_60C8FBF0;
      }
    }
  }
  return result;
}
