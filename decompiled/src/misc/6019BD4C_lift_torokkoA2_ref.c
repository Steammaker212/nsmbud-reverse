/* lift_torokkoA2_ref
 * address: 0x6019BD4C   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lift_torokkoA2_ref(int a1)
{
  _DWORD *v1; // r6
  int v3; // r9
  bool v4; // zf
  int v5; // r5
  unsigned int v6; // r7
  unsigned int v7; // r0
  int v8; // r1
  _DWORD *v9; // r5
  int v10; // r6
  unsigned int v11; // r0
  int v12; // r1
  int v13; // r4
  int v14; // t1
  int v15; // r1
  _DWORD *v16; // r0
  int result; // r0
  _DWORD v18[10]; // [sp+8h] [bp-28h] BYREF

  v3 = sub_601CF9C0(dword_60C8AEF0);
  FIELD_U32(a1, 12592) = 0;
  v4 = v3 == 0;
  if ( v3 )
  {
    v1 = *(_DWORD **)(v3 + 272);
    v4 = v1 == 0;
  }
  if ( !v4 )
  {
    v5 = 1;
    v6 = 1;
    do
    {
      if ( (*(int (__fastcall **)(_DWORD *))(*v1 + 92))(v1) == 1 )
      {
        v7 = v6 + 1;
        if ( v6 >= 5 )
          v6 = 0;
        v8 = a1 + 4 * v6;
        v6 = v7;
        FIELD_U32(v8, 12592) = v5;
      }
      v1 = (_DWORD *)v1[68];
      ++v5;
    }
    while ( v1 );
    v9 = *(_DWORD **)(v3 + 272);
    if ( v9 )
    {
      v10 = 1;
      do
      {
        if ( !(*(int (__fastcall **)(_DWORD *))(*v9 + 92))(v9) )
        {
          v11 = v6 + 1;
          if ( v6 >= 5 )
            v6 = 0;
          v12 = a1 + 4 * v6;
          v6 = v11;
          FIELD_U32(v12, 12592) = v10;
        }
        v9 = (_DWORD *)v9[68];
        ++v10;
      }
      while ( v9 );
    }
  }
  sub_601E4C88(dword_60C8B13C, 194, a1 + 80, 1);
  FIELD_U16(a1, 12888) = 0;
  FIELD_U32(a1, 12880) = sub_601E4EA4(dword_60C8B13C, 195, a1 + 12888, a1 + 80, 1);
  v14 = FIELD_U32(a1, 12628);
  v13 = a1 + 12628;
  v15 = *(_DWORD *)(v13 - 4);
  v16 = **(_DWORD ***)(v14 + 28);
  v18[0] = &sead__SafeStringBase__vtable;
  v18[1] = "lift_torokkoA2";
  ShuAnim_play(v16, v15, (int)v18);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v13 + 28) + 4), 0);
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v13 + 28) + 24) = 1065353216;
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v13 + 28) + 4));
  result = **(_DWORD **)(*(_DWORD *)v13 + 28);
  FIELD_U32(result, 20) = 0;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
