/* DryBones_beginState_Turn
 * address: 0x603124F8   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall DryBones_beginState_Turn(Enemy *a1)
{
  int v2; // r5
  int result; // r0
  char *v4; // r6
  Enemy *v5; // r4
  _DWORD *vtable; // t1
  int ResArchiveById; // r0
  int v8; // r1
  unsigned int v9; // r0
  int v10; // r1
  unsigned int v11; // r0
  _DWORD v12[8]; // [sp+0h] [bp-20h] BYREF

  FIELD_F32(a1, 0x78) = 0.0;
  FIELD_F32(a1, 0x7C) = 0.0;
  v2 = (*((int (__fastcall **)(StateBase *))FIELD_U32(a1, 0x17D0) + 2))(FIELD_U32(a1, 0x17D0));
  if ( v2 != (*(int (**)(void))(dword_60C9349C + 8))() )
    FIELD_U32(a1, 0x50) ^= 1u;
  v4 = &a1[1]._._.collisionMgr[676];
  result = *(_DWORD *)&a1[1]._._.collisionMgr[676];
  if ( result )
  {
    vtable = (_DWORD *)a1[1]._._._._.vtable;
    v5 = a1 + 1;
    ResArchiveById = Profile__getResArchiveById(v5[-1]._._._._.profile, 0);
    v12[0] = &sead__SafeStringBase__vtable;
    v12[1] = "walk";
    sub_60421938(vtable, ResArchiveById, (int)v12);
    v8 = *(_DWORD *)(FIELD_U32(v5, 0x0) + 12);
    v9 = *(_DWORD *)(FIELD_U32(v5, 0x0) + 68);
    if ( *(_DWORD *)(FIELD_U32(v5, 0x0) + 8) > v9 )
      v8 += 4 * v9;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v8 + 4), 1);
    v10 = *(_DWORD *)(FIELD_U32(v5, 0x0) + 12);
    v11 = *(_DWORD *)(FIELD_U32(v5, 0x0) + 68);
    if ( *(_DWORD *)(FIELD_U32(v5, 0x0) + 8) > v11 )
      v10 += 4 * v11;
    result = *(_DWORD *)v10;
    *(_DWORD *)(*(_DWORD *)v10 + 24) = 1065353216;
    *(_DWORD *)v4 = 0;
  }
  return result;
}
