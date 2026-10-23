/* sub_60397798
 * address: 0x60397798   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60397798(int a1)
{
  _DWORD *v2; // r5
  int v3; // r6
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r5
  int v9; // r1
  __int16 v10; // r0
  _WORD *v11; // r4
  unsigned int U32; // r0
  int v13; // r1
  int v14; // r2

  v2 = (_DWORD *)(a1 + 6312);
  if ( FIELD_U32(a1, 6312) != 28 )
  {
    *v2 = 28;
    v3 = a1 + 6304;
    sub_60421938(*(_DWORD **)(a1 + 6304), FIELD_U32(a1, 6300), (int)&dword_60C970E8);
    v4 = *(_DWORD *)(FIELD_U32(a1, 6304) + 12);
    v5 = *(_DWORD *)(FIELD_U32(a1, 6304) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 6304) + 8) > v5 )
      v4 += 4 * v5;
    *(_DWORD *)(*(_DWORD *)v4 + 24) = dword_60C96F28[4 * *v2 + 2];
    v6 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    v7 = *(_DWORD *)(*(_DWORD *)v3 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v7 )
      v6 += 4 * v7;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v6 + 4), dword_60C96F28[4 * *v2 + 3]);
  }
  FIELD_U32(a1, 6316) = 0;
  FIELD_F32(a1, 6592) = FIELD_F32(a1, 88) / 50.0;
  v8 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  v9 = (*(int (**)(void))(dword_60C975A0 + 8))();
  v10 = 40;
  if ( v8 != v9 )
    v10 = ((int (__fastcall *)(int))loc_6039C9CC)(a1);
  FIELD_U16(a1, 6600) = v10;
  v11 = (_WORD *)(a1 + 6600);
  U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
  v13 = (unsigned __int16)*v11;
  v14 = (5 * (unsigned __int64)U32) >> 32;
  *v11 = v14 + v13;
  return v14 + v13;
}
