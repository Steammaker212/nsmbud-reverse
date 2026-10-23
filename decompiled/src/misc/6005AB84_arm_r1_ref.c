/* arm_r1_ref
 * address: 0x6005AB84   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall arm_r1_ref(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  ActiveColliderMgr *v6; // r6
  ActiveColliderMgr *v7; // r6
  float result; // s0
  float *v9; // r4
  int *v10; // t1
  int v11; // r0
  int (__fastcall *v12)(int, _DWORD *); // r2
  int v13; // r0
  _DWORD v14[16]; // [sp+0h] [bp-40h] BYREF

  j_spin_jump_st_ref(a1);
  if ( FIELD_U32(a1, 8512) == 3 )
  {
    v2 = *(_DWORD **)(a1 + 7204);
    v3 = v2[3];
    v4 = v2[2];
    v5 = v2[17];
    if ( v4 > v5 )
      v3 += 4 * v5;
    if ( *(float *)(*(_DWORD *)v3 + 20) >= 45.0 )
    {
      FIELD_U32(a1, 312) = 1096286208;
      v6 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8744))
        && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)(a1 + 8744)) )
      {
        ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)(a1 + 8744));
      }
    }
  }
  v7 = ActiveColliderMgr_instance;
  if ( ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8744))
    || ActiveColliderMgr_isInCreateList(v7, (ActiveCollider *)(a1 + 8744)) == 1 )
  {
    v10 = *(int **)(a1 + 7204);
    v9 = (float *)(a1 + 7204);
    v11 = *v10;
    v12 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)*v10 + 84);
    v14[0] = &sead__SafeStringBase__vtable;
    v14[1] = "arm_r1";
    v13 = v12(v11, v14);
    (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)v9 + 108))(**(_DWORD **)v9, v13, v14);
    result = *(float *)&v14[7] - *(v9 - 1773);
    v9[415] = result;
  }
  return result;
}
