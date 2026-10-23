/* sub_602AAF7C
 * address: 0x602AAF7C   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602AAF7C(int a1)
{
  _DWORD *v2; // r5
  int v3; // r6
  int ResArchiveById; // r1
  _DWORD *v5; // r2
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r0
  unsigned int v9; // r1
  int v10; // r0
  _DWORD v12[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v13[6]; // [sp+8h] [bp-18h] BYREF

  if ( FIELD_U32(a1, 80) )
  {
    v12[0] = &sead__SafeStringBase__vtable;
    v12[1] = "L_jump";
    v3 = a1 + 6300;
    v2 = *(_DWORD **)(a1 + 6300);
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    v5 = v12;
  }
  else
  {
    v13[0] = &sead__SafeStringBase__vtable;
    v13[1] = "R_jump";
    v3 = a1 + 6300;
    v2 = *(_DWORD **)(a1 + 6300);
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    v5 = v13;
  }
  sub_60421938(v2, ResArchiveById, (int)v5);
  v6 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v7 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v7 )
    v6 += 4 * v7;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v6 + 4), 0);
  v8 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v9 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v9 )
    v8 += 4 * v9;
  *(_DWORD *)(*(_DWORD *)v8 + 24) = 1065353216;
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v3 + 28) + 24) = 0x40000000;
  v10 = **(_DWORD **)(*(_DWORD *)v3 + 20);
  FIELD_U32(v10, 20) = 1065353216;
  FIELD_U32(v10, 28) |= 2u;
  ((void (__fastcall *)(int))loc_602ADA1C)(a1);
  FIELD_U16(a1, 6276) = 25;
  FIELD_F32(a1, 7248) = (float)(3.0 - FIELD_F32(a1, 144)) / 25.0;
  FIELD_F32(a1, 7252) = (float)(3.0 - FIELD_F32(a1, 148)) / 25.0;
  FIELD_U32(a1, 7256) = 0;
  FIELD_F32(a1, 7260) = (float)(1.5 - FIELD_F32(a1, 7272)) / 25.0;
  FIELD_F32(a1, 7264) = (float)(1.5 - FIELD_F32(a1, 7276)) / 25.0;
  FIELD_U32(a1, 7268) = 0;
  return 7268;
}
