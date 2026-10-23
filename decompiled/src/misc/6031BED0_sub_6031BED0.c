/* sub_6031BED0
 * address: 0x6031BED0   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6031BED0(int a1)
{
  int v2; // r7
  float v3; // s0
  _DWORD *v4; // r5
  int v5; // r6
  int ResArchiveById; // r1
  int v7; // r1
  unsigned int v8; // r0
  int v9; // r1
  unsigned int v10; // r0
  int v11; // r1
  unsigned int v12; // r0
  int v13; // r1
  unsigned int v14; // r0
  int v15; // r0
  _DWORD *v16; // r5
  int v17; // r0
  int v18; // r0
  int (**v20)(); // [sp+0h] [bp-28h] BYREF
  const char *v21; // [sp+4h] [bp-24h]

  v2 = FIELD_U32(a1, 12588);
  if ( v2 < 1 )
    v3 = 16.0;
  else
    v3 = (float)((float)((float)(unsigned int)(8 * v2) + (float)(unsigned int)(8 * v2)) * 1.25) + 32.0;
  FIELD_F32(a1, 500) = v3;
  FIELD_F32(a1, 504) = v3;
  v5 = a1 + 7124;
  v4 = *(_DWORD **)(a1 + 7124);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  if ( v2 <= 0 )
  {
    v20 = &sead__SafeStringBase__vtable;
    v21 = "pinch";
    sub_60421938(v4, ResArchiveById, (int)&v20);
    v11 = *(_DWORD *)(*(_DWORD *)v5 + 12);
    v12 = *(_DWORD *)(*(_DWORD *)v5 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v12 )
      v11 += 4 * v12;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v11 + 4), 1);
    v13 = *(_DWORD *)(*(_DWORD *)v5 + 12);
    v14 = *(_DWORD *)(*(_DWORD *)v5 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v14 )
      v13 += 4 * v14;
    sub_6041838C((ModelAnimation *)(*(_DWORD *)v13 + 4));
    v15 = **(_DWORD **)(*(_DWORD *)v5 + 20);
    FIELD_U32(v15, 20) = 1065353216;
    FIELD_U32(v15, 28) |= 2u;
    v16 = **(_DWORD ***)(*(_DWORD *)v5 + 28);
    v17 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    v20 = &sead__SafeStringBase__vtable;
    v21 = "pinch";
    ShuAnim_play(v16, v17, (int)&v20);
    v18 = **(_DWORD **)(*(_DWORD *)v5 + 28);
    FIELD_U32(v18, 20) = 0;
    FIELD_U32(v18, 28) |= 2u;
  }
  else
  {
    v20 = &sead__SafeStringBase__vtable;
    v21 = "wait";
    sub_60421938(v4, ResArchiveById, (int)&v20);
    v7 = *(_DWORD *)(*(_DWORD *)v5 + 12);
    v8 = *(_DWORD *)(*(_DWORD *)v5 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v8 )
      v7 += 4 * v8;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v7 + 4), 1);
    v9 = *(_DWORD *)(*(_DWORD *)v5 + 12);
    v10 = *(_DWORD *)(*(_DWORD *)v5 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v10 )
      v9 += 4 * v10;
    sub_6041838C((ModelAnimation *)(*(_DWORD *)v9 + 4));
  }
  FIELD_U32(a1, 12596) = 180;
  return 12596;
}
