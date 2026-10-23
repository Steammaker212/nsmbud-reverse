/* jcm_shot_st_wait_ref
 * address: 0x601130D0   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jcm_shot_st_wait_ref(int a1)
{
  int v2; // r0
  _DWORD *v3; // r6
  _DWORD *v4; // r0
  int v5; // r5
  int *v6; // r1
  unsigned int v7; // r2
  unsigned int v8; // r0
  int v9; // r0
  int v10; // r1
  int *v11; // r1
  unsigned int v12; // r0
  int v13; // r0
  int v14; // r1
  unsigned int v15; // r0
  int v16; // r1
  unsigned int v17; // r0
  int v18; // r5
  char v19; // r12
  int v20; // r0
  _DWORD v22[6]; // [sp+0h] [bp-18h] BYREF

  v3 = (_DWORD *)(a1 + 7648);
  v2 = FIELD_U32(a1, 7648);
  if ( v2 == 2 )
  {
    if ( !FIELD_U16(a1, 6278) )
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C86A04);
  }
  else if ( v2 == 1 )
  {
    v5 = a1 + 7100;
    v4 = *(_DWORD **)(a1 + 7100);
    v6 = (int *)v4[3];
    v7 = v4[2];
    v8 = v4[17];
    if ( v7 > v8 )
      v6 += v8;
    v9 = *v6;
    if ( (*(_BYTE *)(*v6 + 28) & 0x20) != 0 )
    {
      v10 = FIELD_U32(a1, 7096);
      v22[0] = &sead__SafeStringBase__vtable;
      v22[1] = "jcm_shot_st_wait";
      SkeletalAnim_play(v9, v10, (int)v22);
      v11 = *(int **)(*(_DWORD *)v5 + 12);
      v12 = *(_DWORD *)(*(_DWORD *)v5 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v12 )
        v11 += v12;
      v13 = *v11;
      FIELD_U32(v13, 20) = 0;
      FIELD_U32(v13, 28) |= 2u;
      v14 = *(_DWORD *)(*(_DWORD *)v5 + 12);
      v15 = *(_DWORD *)(*(_DWORD *)v5 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v15 )
        v14 += 4 * v15;
      *(_DWORD *)(*(_DWORD *)v14 + 24) = 1065353216;
      v16 = *(_DWORD *)(*(_DWORD *)v5 + 12);
      v17 = *(_DWORD *)(*(_DWORD *)v5 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v17 )
        v16 += 4 * v17;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v16 + 4), 1);
      v18 = FIELD_U32(a1, 7244);
      if ( ((unsigned int)&dword_60C86B30 & ~(1611739624 << v19) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B30) )
      {
        dword_60C86B2C = (int)&off_60BC2CD4;
        _cxa_guard_release(&dword_60C86B30);
      }
      if ( v18 )
      {
        if ( (**(int (__fastcall ***)(int, int *))v18)(v18, &dword_60C86B2C) == 1 )
        {
          v20 = FIELD_U32(v18, 9264);
          if ( v20 )
            FIELD_U16(a1, 6278) = v20;
        }
      }
      *v3 = 2;
    }
  }
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1068))(a1);
}
