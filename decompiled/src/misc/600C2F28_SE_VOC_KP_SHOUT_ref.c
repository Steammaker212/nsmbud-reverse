/* SE_VOC_KP_SHOUT_ref
 * address: 0x600C2F28   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_VOC_KP_SHOUT_ref(int a1)
{
  _DWORD *v2; // r0
  int **v3; // r7
  _DWORD *v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  _DWORD *v7; // r1
  unsigned int v8; // r0
  int v9; // r6
  int v10; // r0
  int v11; // r1
  unsigned int v12; // r0
  int result; // r0
  _BYTE v14[48]; // [sp+0h] [bp-50h] BYREF
  _DWORD v15[8]; // [sp+30h] [bp-20h] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  v3 = (int **)(a1 + 7100);
  v2 = *(_DWORD **)(a1 + 7100);
  v4 = (_DWORD *)v2[3];
  v5 = v2[2];
  v6 = v2[17];
  if ( v5 > v6 )
    v4 += v6;
  if ( sub_60418548(*v4 + 4) )
  {
    AreaRumbleMgr_rumble2(AreaRumbleMgr_instance, 8, 3, 0);
    sub_60813430(a1 + 6332, "SE_VOC_KP_SHOUT", 0);
  }
  v7 = (_DWORD *)(*v3)[3];
  v8 = (*v3)[17];
  if ( (*v3)[2] > v8 )
    v7 += v8;
  if ( sub_60418548(*v7 + 4) )
    sub_60400BE4(AreaRumbleMgr_instance);
  if ( sub_60235E50(a1 + 7920) == 1 )
  {
    v15[0] = &sead__SafeStringBase__vtable;
    v15[1] = "ef_flame";
    v9 = **v3;
    v10 = (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v9 + 84))(v9, v15);
    (*(void (__fastcall **)(int, int, _BYTE *))(*(_DWORD *)v9 + 108))(v9, v10, v14);
    sub_60236A80(a1 + 7920, v14, 1);
  }
  v11 = (*v3)[3];
  v12 = (*v3)[17];
  if ( (*v3)[2] > v12 )
    v11 += 4 * v12;
  result = *(_DWORD *)(*(_DWORD *)v11 + 28);
  if ( (result & 1) != 0 )
  {
    if ( (result & 4) == 0 )
      return result;
    return sub_600C69CC(a1);
  }
  if ( (result & 0x30) != 0 )
    return sub_600C69CC(a1);
  return result;
}
