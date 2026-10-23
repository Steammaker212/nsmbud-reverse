/* swing_sea_ref
 * address: 0x605D111C   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall swing_sea_ref(int a1)
{
  int ResArchiveById; // r5
  _DWORD *v3; // r0
  int v4; // r6
  int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r1
  unsigned int v9; // r0
  ActiveCollider *v10; // r4
  ActiveColliderMgr *v11; // r5
  int (**v13)(); // [sp+0h] [bp-20h] BYREF
  const char *v14; // [sp+4h] [bp-1Ch]

  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v4 = a1 + 6100;
  v3 = *(_DWORD **)(a1 + 6100);
  if ( FIELD_U8(a1, 6408) )
  {
    v13 = &sead__SafeStringBase__vtable;
    v14 = "swing_sea";
  }
  else
  {
    v13 = &sead__SafeStringBase__vtable;
    v14 = "swing";
  }
  sub_60421938(v3, ResArchiveById, (int)&v13);
  v5 = **(_DWORD **)(*(_DWORD *)v4 + 28);
  v13 = &sead__SafeStringBase__vtable;
  v14 = "swing";
  sub_60446088(v5, ResArchiveById, &v13);
  v6 = *(_DWORD *)(*(_DWORD *)v4 + 12);
  v7 = *(_DWORD *)(*(_DWORD *)v4 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v7 )
    v6 += 4 * v7;
  *(_DWORD *)(*(_DWORD *)v6 + 24) = 1065353216;
  v8 = *(_DWORD *)(*(_DWORD *)v4 + 12);
  v9 = *(_DWORD *)(*(_DWORD *)v4 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v9 )
    v8 += 4 * v9;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v8 + 4), 0);
  v10 = (ActiveCollider *)(a1 + 6104);
  v11 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v10);
  ActiveColldierMgr_removeFromCreateList(v11, v10);
  return ActiveColldierMgr_removeFromList3(v11, (int)v10);
}
