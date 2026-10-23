/* DryBones_beginState_Walk
 * address: 0x60312034   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall DryBones_beginState_Walk(int a1)
{
  _DWORD *v2; // r6
  _DWORD *v3; // r5
  int v4; // r7
  int ResArchiveById; // r0
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r1
  unsigned int v9; // r0
  int v10; // r0
  _DWORD v12[8]; // [sp+0h] [bp-20h] BYREF

  v2 = (_DWORD *)(a1 + 7624);
  if ( FIELD_U32(a1, 7624) )
  {
    v4 = a1 + 6300;
    v3 = *(_DWORD **)(a1 + 6300);
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    v12[0] = &sead__SafeStringBase__vtable;
    v12[1] = "walk";
    sub_60421938(v3, ResArchiveById, (int)v12);
    v6 = *(_DWORD *)(FIELD_U32(a1, 6300) + 12);
    v7 = *(_DWORD *)(FIELD_U32(a1, 6300) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 6300) + 8) > v7 )
      v6 += 4 * v7;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v6 + 4), 1);
    v8 = *(_DWORD *)(*(_DWORD *)v4 + 12);
    v9 = *(_DWORD *)(*(_DWORD *)v4 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v9 )
      v8 += 4 * v9;
    *(_DWORD *)(*(_DWORD *)v8 + 24) = 0x3F800000;
    *v2 = 0;
  }
  v10 = FIELD_U32(a1, 80);
  FIELD_U32(a1, 120) = dword_60AFF3B8[v10];
  FIELD_U32(a1, 160) = *(&DryBones_rotations + v10);
  FIELD_U32(a1, 7604) = 0;
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U16(a1, 7644) = 0;
  return 7644;
}
