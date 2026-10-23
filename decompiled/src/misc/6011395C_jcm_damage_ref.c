/* jcm_damage_ref
 * address: 0x6011395C   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall jcm_damage_ref(int a1)
{
  char v1; // r12
  int v3; // r0
  _DWORD *v4; // r6
  int v5; // r5
  int v6; // r4
  _DWORD *v7; // t1
  int *v8; // r1
  unsigned int v9; // r0
  int v10; // r0
  int v11; // r1
  int *v12; // r1
  unsigned int v13; // r0
  int v14; // r0
  int v15; // r1
  unsigned int v16; // r0
  int v17; // r1
  unsigned int v18; // r0
  _BYTE *v19; // r0
  unsigned int v20; // r2
  int v21; // r1
  int *v22; // r4
  int v23; // t1
  char v24; // r2
  int v25; // r1
  _DWORD v26[6]; // [sp+0h] [bp-18h] BYREF

  v4 = (_DWORD *)(a1 + 7648);
  v3 = FIELD_U32(a1, 7648);
  if ( v3 == 2 )
  {
    if ( !FIELD_U16(a1, 6278) )
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C86A84);
    v19 = (_BYTE *)(a1 + 7664);
    v20 = FIELD_U8(a1, 7664);
    if ( v20 <= 2 )
    {
      v23 = FIELD_U32(a1, 7104);
      v22 = (int *)(a1 + 7104);
      v21 = v23;
      if ( (FIELD_U8(v23, 28) & 4) != 0 )
      {
        v24 = v20 + 1;
        *v19 = v24;
        if ( v24 == 3 )
        {
          FIELD_U32(v21, 24) = 0;
          v25 = *v22;
          FIELD_U32(v25, 20) = 0;
          FIELD_U32(v25, 28) |= 2u;
        }
      }
    }
  }
  else if ( v3 == 1 )
  {
    v5 = FIELD_U32(a1, 7244);
    if ( ((unsigned int)&dword_60C86B30 & ~(1611741596 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B30) )
    {
      dword_60C86B2C = (int)&off_60BC2CD4;
      _cxa_guard_release(&dword_60C86B30);
    }
    if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C86B2C) == 1 && !FIELD_U8(v5, 9241) )
    {
      *v4 = 2;
      FIELD_U16(a1, 6278) = 120;
      v7 = *(_DWORD **)(a1 + 7100);
      v6 = a1 + 7100;
      v8 = (int *)v7[3];
      v9 = v7[17];
      if ( v7[2] > v9 )
        v8 += v9;
      v10 = *v8;
      v11 = *(_DWORD *)(v6 - 4);
      v26[0] = &sead__SafeStringBase__vtable;
      v26[1] = "jcm_damage";
      SkeletalAnim_play(v10, v11, (int)v26);
      v12 = *(int **)(*(_DWORD *)v6 + 12);
      v13 = *(_DWORD *)(*(_DWORD *)v6 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v6 + 8) > v13 )
        v12 += v13;
      v14 = *v12;
      FIELD_U32(v14, 20) = 0;
      FIELD_U32(v14, 28) |= 2u;
      v15 = *(_DWORD *)(*(_DWORD *)v6 + 12);
      v16 = *(_DWORD *)(*(_DWORD *)v6 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v6 + 8) > v16 )
        v15 += 4 * v16;
      *(_DWORD *)(*(_DWORD *)v15 + 24) = 1065353216;
      v17 = *(_DWORD *)(*(_DWORD *)v6 + 12);
      v18 = *(_DWORD *)(*(_DWORD *)v6 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v6 + 8) > v18 )
        v17 += 4 * v18;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v17 + 4), 1);
    }
  }
}
