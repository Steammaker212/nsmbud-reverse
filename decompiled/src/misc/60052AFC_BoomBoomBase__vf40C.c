/* BoomBoomBase__vf40C
 * address: 0x60052AFC   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall BoomBoomBase__vf40C(int a1)
{
  int v1; // r4
  int v2; // r5
  int ResArchiveById; // r0
  int result; // r0
  _DWORD v5[8]; // [sp+0h] [bp-20h] BYREF

  v5[2] = &sead__SafeStringBase__vtable;
  v5[3] = "demo_battleA";
  v1 = a1 + 7204;
  sub_60421AD4(FIELD_U32(a1, 7204));
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "demo_battleA";
  v2 = **(_DWORD **)(*(_DWORD *)v1 + 36);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(v1 - 7192), 0);
  sub_6045195C(v2, ResArchiveById, v5);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v1 + 36) + 4), 0);
  result = FIELD_U32(EnemyCounterMaybe_instance, 24);
  if ( result )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 240))(result);
  return result;
}
