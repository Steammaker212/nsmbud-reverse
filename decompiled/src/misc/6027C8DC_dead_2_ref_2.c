/* dead_2_ref_2
 * address: 0x6027C8DC   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall dead_2_ref_2(int a1)
{
  int v2; // r7
  int v3; // r5
  int ResArchiveById; // r0
  int v5; // r0
  unsigned int v6; // r1
  int v7; // r0
  _DWORD v9[8]; // [sp+0h] [bp-20h] BYREF

  v2 = a1 + 6300;
  v3 = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v9[0] = &sead__SafeStringBase__vtable;
  v9[1] = "dead_2";
  SkeletalAnim_play(v3, ResArchiveById, (int)v9);
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v2 + 12) + 24) = 1065353216;
  v5 = **(_DWORD **)(*(_DWORD *)v2 + 12);
  FIELD_U32(v5, 20) = 0;
  FIELD_U32(v5, 28) |= 2u;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v2 + 12) + 4), 1);
  FIELD_U32(a1, 120) = FIELD_U32(a1, 6104);
  FIELD_U32(a1, 124) = 1082130432;
  FIELD_U32(a1, 128) = 0;
  v6 = FIELD_U32(a1, 6304);
  if ( v6 )
  {
    v7 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v6);
    if ( v7 )
      FIELD_U8(v7, 10566) = 1;
    FIELD_U32(a1, 6304) = 0;
  }
  return Enemy__beginState_DieFall((Enemy *)a1);
}
