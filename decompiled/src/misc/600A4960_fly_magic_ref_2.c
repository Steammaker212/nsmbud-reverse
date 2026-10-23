/* fly_magic_ref_2
 * address: 0x600A4960   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall fly_magic_ref_2(int a1)
{
  int v2; // r0
  int v3; // r6
  _DWORD **v4; // r0
  _DWORD *v5; // r5
  int ResArchiveById; // r0
  int v7; // r0
  int *v8; // r0
  int v9; // r0
  int *v10; // r0
  int v11; // r2
  int v12; // r1
  bool v13; // cc
  int v14; // r2
  int v15; // r1
  int (**v17)(); // [sp+0h] [bp-20h] BYREF
  const char *v18; // [sp+4h] [bp-1Ch]

  v3 = a1 + 7096;
  v2 = FIELD_U32(a1, 7096);
  v17 = &sead__SafeStringBase__vtable;
  v18 = "fly_magic";
  sub_60421AD4(v2);
  v4 = *(_DWORD ***)(*(_DWORD *)v3 + 28);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 24) > 1u )
    ++v4;
  v5 = *v4;
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(v3 - 7084), 0);
  v17 = &sead__SafeStringBase__vtable;
  v18 = "wand";
  ShuAnim_play(v5, ResArchiveById, (int)&v17);
  v7 = *(_DWORD *)(*(_DWORD *)v3 + 28);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 24) > 1u )
    v7 += 4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v7 + 4), 0);
  v8 = *(int **)(*(_DWORD *)v3 + 28);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 24) > 1u )
    ++v8;
  v9 = *v8;
  FIELD_U32(v9, 20) = 0;
  FIELD_U32(v9, 28) |= 2u;
  *(float *)(v3 - 6984) = FIELD_F32(dword_60CC6484, 128) + 96.0;
  *(_DWORD *)(v3 - 6976) = 1086324736;
  *(_DWORD *)(v3 - 6972) = -1070945621;
  *(_DWORD *)(v3 - 6960) = -1070945621;
  if ( *(_DWORD *)(v3 - 7016) == 1 )
    FIELD_U32(a1, 120) = -1061158912;
  FIELD_U32(a1, 100) = 1026952033;
  fly_magic_ref_2_helper(a1);
  v10 = *(int **)(a1 + 19456);
  if ( v10 )
  {
    v11 = v10[2];
    if ( FIELD_U32(a1, 80) )
    {
      if ( v11 < 1 )
        v12 = 0;
      else
        v12 = *v10;
      if ( v12 )
        v12 -= 12;
      FIELD_U32(a1, 19460) = v12;
      v15 = v10[2] - 1;
    }
    else
    {
      v13 = v11 < 1;
      v14 = 0;
      v15 = 0;
      if ( !v13 )
        v14 = v10[1];
      if ( v14 )
        v14 -= 12;
      FIELD_U32(a1, 19460) = v14;
    }
    FIELD_U32(a1, 19592) = v15;
  }
  FIELD_U16(a1, 6276) = 120;
  return 6276;
}
