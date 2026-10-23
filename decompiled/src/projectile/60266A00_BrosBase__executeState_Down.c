/* BrosBase__executeState_Down
 * address: 0x60266A00   size: 608   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall BrosBase__executeState_Down(int a1)
{
  int v2; // r6
  int *v3; // r5
  float v4; // s0
  int result; // r0
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r1
  _DWORD *v9; // r0
  int v10; // r1
  unsigned int v11; // r0
  int v12; // r1
  unsigned int v13; // r0
  int v14; // r1
  _DWORD *v15; // r0
  int v16; // r1
  unsigned int v17; // r0
  int v18; // r1
  unsigned int v19; // r0
  int v20; // r1
  unsigned int v21; // r0
  int (**v22)(); // [sp+0h] [bp-20h] BYREF
  const char *v23; // [sp+4h] [bp-1Ch]

  v2 = a1 + 6300;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  v3 = (int *)(a1 + 12112);
  --FIELD_U32(a1, 12112);
  CollisionActor__handleGravity((CollisionActor *)a1);
  v4 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v4);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 120) = 0;
  result = *v3;
  if ( *v3 < 1 )
    goto LABEL_12;
  v6 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v7 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v7 )
    v6 += 4 * v7;
  result = *(unsigned __int8 *)(*(_DWORD *)v6 + 28);
  if ( (result & 0x20) != 0 )
  {
    FIELD_U8(a1, 12464) = 0;
    v22 = &sead__SafeStringBase__vtable;
    v23 = "bros";
    v8 = LoadResource(ResourceMgrRelated_instance, &v22);
    v9 = *(_DWORD **)v2;
    v22 = &sead__SafeStringBase__vtable;
    v23 = "down_wait";
    sub_60421938(v9, v8, (int)&v22);
    v10 = *(_DWORD *)(*(_DWORD *)v2 + 12);
    v11 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v11 )
      v10 += 4 * v11;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v10 + 4), 1);
    v12 = *(_DWORD *)(*(_DWORD *)v2 + 12);
    v13 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v13 )
      v12 += 4 * v13;
    *(_DWORD *)(*(_DWORD *)v12 + 24) = 1065353216;
    result = *v3;
LABEL_12:
    if ( !result )
    {
      v22 = &sead__SafeStringBase__vtable;
      v23 = "bros";
      v14 = LoadResource(ResourceMgrRelated_instance, &v22);
      v15 = *(_DWORD **)v2;
      v22 = &sead__SafeStringBase__vtable;
      v23 = "return";
      sub_60421938(v15, v14, (int)&v22);
      v16 = *(_DWORD *)(*(_DWORD *)v2 + 12);
      v17 = *(_DWORD *)(*(_DWORD *)v2 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v17 )
        v16 += 4 * v17;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v16 + 4), 0);
      v18 = *(_DWORD *)(*(_DWORD *)v2 + 12);
      v19 = *(_DWORD *)(*(_DWORD *)v2 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v19 )
        v18 += 4 * v19;
      *(_DWORD *)(*(_DWORD *)v18 + 24) = 1065353216;
      result = *v3;
    }
    if ( result <= 0 )
    {
      v20 = *(_DWORD *)(*(_DWORD *)v2 + 12);
      v21 = *(_DWORD *)(*(_DWORD *)v2 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v21 )
        v20 += 4 * v21;
      result = *(unsigned __int8 *)(*(_DWORD *)v20 + 28);
      if ( (result & 0x20) != 0 )
      {
        *v3 = dword_60BE2EB0;
        ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BDBC00, 0);
        return (*(int (__fastcall **)(int, StateVirtual *))(*(_DWORD *)a1 + 192))(a1, &BroBase_StateID_Move);
      }
    }
  }
  return result;
}
