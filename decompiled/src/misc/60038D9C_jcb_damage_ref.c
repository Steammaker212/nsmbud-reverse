/* jcb_damage_ref
 * address: 0x60038D9C   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jcb_damage_ref(int a1)
{
  int result; // r0
  _DWORD *v3; // r5
  int v4; // r4
  _DWORD *v5; // t1
  int *v6; // r1
  unsigned int v7; // r0
  int v8; // r0
  int v9; // r1
  int *v10; // r1
  unsigned int v11; // r0
  int v12; // r0
  int v13; // r1
  unsigned int v14; // r0
  int v15; // r1
  unsigned int v16; // r0
  _DWORD v17[6]; // [sp+0h] [bp-18h] BYREF

  v3 = (_DWORD *)(a1 + 7772);
  result = FIELD_U32(a1, 7772);
  if ( result == 2 )
  {
    result = FIELD_U16(a1, 6278);
    if ( !FIELD_U16(a1, 6278) )
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C7FF5C);
  }
  else if ( result == 1 )
  {
    result = FIELD_U32(a1, 7624);
    if ( result )
    {
      result = FIELD_U32(result, 11472);
      if ( !result )
      {
        v5 = *(_DWORD **)(a1 + 7100);
        v4 = a1 + 7100;
        v6 = (int *)v5[3];
        v7 = v5[17];
        if ( v5[2] > v7 )
          v6 += v7;
        v8 = *v6;
        v9 = *(_DWORD *)(v4 - 4);
        v17[0] = &sead__SafeStringBase__vtable;
        v17[1] = "jcb_damage";
        SkeletalAnim_play(v8, v9, (int)v17);
        v10 = *(int **)(*(_DWORD *)v4 + 12);
        v11 = *(_DWORD *)(*(_DWORD *)v4 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v11 )
          v10 += v11;
        v12 = *v10;
        FIELD_U32(v12, 20) = 0;
        FIELD_U32(v12, 28) |= 2u;
        v13 = *(_DWORD *)(*(_DWORD *)v4 + 12);
        v14 = *(_DWORD *)(*(_DWORD *)v4 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v14 )
          v13 += 4 * v14;
        *(_DWORD *)(*(_DWORD *)v13 + 24) = 1065353216;
        v15 = *(_DWORD *)(*(_DWORD *)v4 + 12);
        v16 = *(_DWORD *)(*(_DWORD *)v4 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v16 )
          v15 += 4 * v16;
        AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v15 + 4), 1);
        *(_WORD *)(v4 - 822) = 20;
        *v3 = 2;
        return 2;
      }
    }
  }
  return result;
}
