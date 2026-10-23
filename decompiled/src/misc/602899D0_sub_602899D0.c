/* sub_602899D0
 * address: 0x602899D0   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602899D0(int a1)
{
  _BYTE *v2; // r5
  int v3; // r6
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  _DWORD *v8; // r6
  int v9; // r5
  int v10; // r5
  int v11; // r5
  int v12; // r5
  int v13; // r0
  int v14; // r1

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
  v8 = (_DWORD *)(a1 + 6096);
  v9 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v9 != (*(int (**)(void))(dword_60C8F30C + 8))() || FIELD_U8(a1, 6605) )
  {
    v10 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v8 + 8))(*v8);
    if ( v10 != (*(int (**)(void))(dword_60C8F2CC + 8))() || FIELD_U8(a1, 6605) == 2 )
      FIELD_U32(a1, 160) = 0;
  }
  FIELD_U32(a1, 6572) = 0;
  FIELD_U32(a1, 6576) = 8;
  v11 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v8 + 8))(*v8);
  if ( v11 == (*(int (**)(void))(dword_60C8F30C + 8))() && !FIELD_U8(a1, 6605)
    || (v12 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v8 + 8))(*v8),
        v13 = (*(int (**)(void))(dword_60C8F2CC + 8))(),
        v14 = 357913941,
        v12 == v13)
    && FIELD_U8(a1, 6605) != 2 )
  {
    v14 = 1014089500;
  }
  FIELD_U32(a1, 6560) = v14;
  return 6560;
}
