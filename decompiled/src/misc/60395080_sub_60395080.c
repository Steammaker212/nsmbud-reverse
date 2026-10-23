/* sub_60395080
 * address: 0x60395080   size: 624   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60395080(int a1)
{
  _DWORD **v2; // r6
  int result; // r0
  _DWORD *v4; // r8
  _WORD *v5; // r7
  bool v6; // zf
  int v7; // r2
  unsigned int v8; // r1
  int v9; // r2
  unsigned int v10; // r0
  _BOOL4 v11; // r0
  bool v12; // zf
  int v13; // r2
  unsigned int v14; // r1
  int v15; // r2
  unsigned int v16; // r0
  int v17; // r1
  bool v18; // zf
  __int16 v19; // r1
  int v20; // [sp+0h] [bp-28h] BYREF
  int target; // [sp+4h] [bp-24h] BYREF

  v2 = (_DWORD **)(a1 + 6304);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6304));
  result = FIELD_U32(a1, 6328);
  v4 = (_DWORD *)(a1 + 6312);
  if ( result == 2 )
  {
    target = 0;
    v20 = (int)(float)((float)(2147500000.0 * 60.0) / 180.0) / 15;
    v11 = moveValueTo((int *)(a1 + 160), &target, &v20);
    v12 = v11;
    if ( v11 )
      v12 = *v4 == 2;
    if ( v12 )
    {
      *v4 = 0;
      sub_60421938(*v2, FIELD_U32(a1, 6300), (int)dword_60C96F28);
      v13 = (*v2)[3];
      v14 = (*v2)[17];
      if ( (*v2)[2] > v14 )
        v13 += 4 * v14;
      *(_DWORD *)(*(_DWORD *)v13 + 24) = dword_60C96F28[4 * *v4 + 2];
      v15 = (*v2)[3];
      v16 = (*v2)[17];
      if ( (*v2)[2] > v16 )
        v15 += 4 * v16;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v15 + 4), dword_60C96F28[4 * *v4 + 3]);
    }
    if ( ((float (__fastcall *)(int, float, float, float, float))loc_60832560)(
           a1 + 108,
           FIELD_F32(a1, 6424),
           0.5,
           1.0,
           0.05) < 0.5 )
      FIELD_U32(a1, 108) = FIELD_U32(a1, 6424);
    result = a1 + 6332;
    v17 = FIELD_U16(a1, 6332);
    v18 = v17 == 0;
    if ( FIELD_U16(a1, 6332) )
    {
      v19 = v17 - 1;
      *(_WORD *)result = v19;
      result = 0xFFFF;
      v18 = v19 == 0;
    }
    if ( v18 )
    {
      FIELD_U32(a1, 6392) = &unk_60C97380;
      return (int)&unk_60C97380;
    }
  }
  else if ( result == 1 )
  {
    v5 = (_WORD *)(a1 + 6332);
    result = FIELD_U16(a1, 6332);
    v6 = result == 0;
    if ( FIELD_U16(a1, 6332) )
    {
      *v5 = --result;
      v6 = (unsigned __int16)result == 0;
    }
    if ( v6 )
    {
      if ( *v4 != 2 )
      {
        *v4 = 2;
        sub_60421938(*v2, FIELD_U32(a1, 6300), (int)&dword_60C96F48);
        v7 = (*v2)[3];
        v8 = (*v2)[17];
        if ( (*v2)[2] > v8 )
          v7 += 4 * v8;
        *(_DWORD *)(*(_DWORD *)v7 + 24) = dword_60C96F28[4 * *v4 + 2];
        v9 = (*v2)[3];
        v10 = (*v2)[17];
        if ( (*v2)[2] > v10 )
          v9 += 4 * v10;
        AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v9 + 4), dword_60C96F28[4 * *v4 + 3]);
      }
      *v5 = 40;
      FIELD_U32(a1, 6328) = 2;
      return 2;
    }
  }
  return result;
}
