/* sub_60303F64
 * address: 0x60303F64   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60303F64(int a1)
{
  int v2; // r7
  int v3; // r8
  int Resource; // r0
  int result; // r0
  unsigned int v6; // r1
  _DWORD *v7; // r4
  unsigned int v8; // t1
  int v9; // r0
  _DWORD v10[2]; // [sp+0h] [bp-28h] BYREF
  _DWORD v11[8]; // [sp+8h] [bp-20h] BYREF

  FIELD_U32(a1, 160) = ((FIELD_S32(a1, 160) >> 31) & 0xE3900000) + 238551040;
  FIELD_U8(a1, 7010) = 1;
  v2 = a1 + 6952;
  if ( FIELD_U32(a1, 7000) )
  {
    v3 = **(_DWORD **)(*(_DWORD *)v2 + 12);
    v11[0] = &sead__SafeStringBase__vtable;
    v11[1] = "jugem";
    Resource = LoadResource(ResourceMgrRelated_instance, v11);
    v10[0] = &sead__SafeStringBase__vtable;
    v10[1] = "wait";
    SkeletalAnim_play(v3, Resource, (int)v10);
    *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v2 + 12) + 24) = 1065353216;
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v2 + 12) + 4), 1);
    sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v2 + 12) + 4));
    FIELD_U32(a1, 7000) = 0;
  }
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v2 + 12) + 4) = 0;
  result = 6988;
  v8 = FIELD_U32(a1, 6988);
  v7 = (_DWORD *)(a1 + 6988);
  v6 = v8;
  if ( v8 )
  {
    v9 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v6);
    if ( v9 )
      FIELD_U8(v9, 19) = 1;
    *v7 = 0;
    return 0;
  }
  return result;
}
