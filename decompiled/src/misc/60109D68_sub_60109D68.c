/* sub_60109D68
 * address: 0x60109D68   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60109D68(int a1)
{
  int v2; // r5
  float v3; // s0
  _DWORD *v4; // r0
  unsigned int v5; // r1
  unsigned int v6; // r2
  _DWORD *v7; // r3
  _DWORD *v8; // r3
  float v9; // s0
  int v10; // r5
  char v11; // r12
  int result; // r0

  v2 = a1 + 7096;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = FIELD_F32(a1, 7760);
  v4 = *(_DWORD **)(*(_DWORD *)v2 + 12);
  v5 = *(_DWORD *)(*(_DWORD *)v2 + 8);
  v6 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  v7 = v4;
  if ( v5 > v6 )
    v7 = &v4[v6];
  if ( *(float *)(*v7 + 20) < (float)(v3 * 14.0) )
  {
    ((void (__fastcall *)(int, _DWORD))loc_6010C040)(a1, 0);
    v3 = FIELD_F32(a1, 7760);
    v4 = *(_DWORD **)(*(_DWORD *)v2 + 12);
    v5 = *(_DWORD *)(*(_DWORD *)v2 + 8);
    v6 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  }
  v8 = v4;
  v9 = v3 * 14.0;
  if ( v5 > v6 )
    v8 = &v4[v6];
  if ( *(float *)(*v8 + 20) >= v9 )
  {
    sub_6010C1FC(a1, 0);
    v4 = *(_DWORD **)(*(_DWORD *)v2 + 12);
    v5 = *(_DWORD *)(*(_DWORD *)v2 + 8);
    v6 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  }
  if ( v5 > v6 )
    v4 += v6;
  if ( sub_60418548(*v4 + 4) )
  {
    v10 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 8120));
    if ( ((unsigned int)&dword_60C7B364 & ~(1611701912 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( v10 && (**(int (__fastcall ***)(int, int *))v10)(v10, &StageActor_RTTI) == 1 )
      FIELD_U32(v10, 116) = 1153662976;
    FIELD_U32(a1, 8120) = 0;
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1032))(a1);
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C86604);
  return result;
}
