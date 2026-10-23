/* sub_602AA630
 * address: 0x602AA630   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602AA630(int a1)
{
  signed int v2; // r0
  int v3; // r1
  _DWORD *v4; // r5
  int v5; // r6
  int ResArchiveById; // r1
  _DWORD *v7; // r2
  int v8; // r1
  unsigned int v9; // r0
  int v10; // r0
  unsigned int v11; // r1
  _DWORD v13[2]; // [sp+0h] [bp-30h] BYREF
  _DWORD v14[2]; // [sp+8h] [bp-28h] BYREF
  _DWORD v15[2]; // [sp+10h] [bp-20h] BYREF
  _DWORD v16[6]; // [sp+18h] [bp-18h] BYREF

  v2 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v2;
  v3 = FIELD_U32(a1, 7288) - 1;
  FIELD_U32(a1, 7288) = v3;
  if ( v2 )
  {
    if ( v3 )
    {
      v13[0] = &sead__SafeStringBase__vtable;
      v13[1] = "L_jump_st";
      v5 = a1 + 6300;
      v4 = *(_DWORD **)(a1 + 6300);
      ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
      v7 = v13;
    }
    else
    {
      v14[0] = &sead__SafeStringBase__vtable;
      v14[1] = "L_jump_st_L";
      v5 = a1 + 6300;
      v4 = *(_DWORD **)(a1 + 6300);
      ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
      v7 = v14;
    }
  }
  else if ( v3 )
  {
    v15[0] = &sead__SafeStringBase__vtable;
    v15[1] = "R_jump_st";
    v5 = a1 + 6300;
    v4 = *(_DWORD **)(a1 + 6300);
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    v7 = v15;
  }
  else
  {
    v16[0] = &sead__SafeStringBase__vtable;
    v16[1] = "R_jump_st_L";
    v5 = a1 + 6300;
    v4 = *(_DWORD **)(a1 + 6300);
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    v7 = v16;
  }
  sub_60421938(v4, ResArchiveById, (int)v7);
  v8 = *(_DWORD *)(*(_DWORD *)v5 + 12);
  v9 = *(_DWORD *)(*(_DWORD *)v5 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v9 )
    v8 += 4 * v9;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v8 + 4), 0);
  v10 = *(_DWORD *)(*(_DWORD *)v5 + 12);
  v11 = *(_DWORD *)(*(_DWORD *)v5 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v11 )
    v10 += 4 * v11;
  *(_DWORD *)(*(_DWORD *)v10 + 24) = 1065353216;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  return 0;
}
