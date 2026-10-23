/* sub_60289830
 * address: 0x60289830   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60289830(int a1)
{
  _BYTE *v2; // r5
  int v3; // r6
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r5
  int v9; // r5
  int v10; // r0
  int v11; // r1

  v2 = (_BYTE *)(a1 + 6606);
  if ( FIELD_U8(a1, 6606) != 4 )
  {
    v3 = a1 + 6300;
    sub_60421938(*(_DWORD **)(a1 + 6300), FIELD_U32(a1, 6304), (int)&dword_60C8F1AC);
    v4 = *(_DWORD *)(FIELD_U32(a1, 6300) + 12);
    v5 = *(_DWORD *)(FIELD_U32(a1, 6300) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 6300) + 8) > v5 )
      v4 += 4 * v5;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v4 + 4), 1);
    v6 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    v7 = *(_DWORD *)(*(_DWORD *)v3 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v7 )
      v6 += 4 * v7;
    *(_DWORD *)(*(_DWORD *)v6 + 24) = 1065353216;
    *v2 = 4;
  }
  Enemy__beginState_DieFall((Enemy *)a1);
  FIELD_U32(a1, 160) = Enemy_CommonRotations[FIELD_U32(a1, 80)];
  v8 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v8 == (*(int (**)(void))(dword_60C8F30C + 8))() && !FIELD_U8(a1, 6605)
    || (v9 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096)),
        v10 = (*(int (**)(void))(dword_60C8F2CC + 8))(),
        v11 = 0x20000000,
        v9 == v10)
    && FIELD_U8(a1, 6605) != 2 )
  {
    v11 = 1014089500;
  }
  FIELD_U32(a1, 6560) = v11;
  return 6560;
}
