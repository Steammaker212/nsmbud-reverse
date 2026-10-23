/* sub_60392A0C
 * address: 0x60392A0C   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60392A0C(int a1)
{
  _DWORD *v2; // r6
  int v3; // r5
  int v4; // r5
  _DWORD *v5; // r5
  int v6; // r4
  _DWORD *v7; // t1
  int v8; // r1
  unsigned int v9; // r0
  int v10; // r1
  unsigned int v11; // r0

  v2 = (_DWORD *)(a1 + 6096);
  v3 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v3 == (*(int (**)(void))(dword_60C97600 + 8))() )
    FIELD_U16(a1, 6346) = 60;
  v4 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2);
  if ( v4 != (*(int (**)(void))(dword_60C97560 + 8))() )
  {
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2);
    (*(int (**)(void))(dword_60C97600 + 8))();
  }
  v5 = (_DWORD *)(a1 + 6312);
  if ( FIELD_U32(a1, 6312) != 1 )
  {
    *v5 = 1;
    v7 = *(_DWORD **)(a1 + 6304);
    v6 = a1 + 6304;
    sub_60421938(v7, *(_DWORD *)(v6 - 4), (int)&dword_60C96F38);
    v8 = *(_DWORD *)(*(_DWORD *)v6 + 12);
    v9 = *(_DWORD *)(*(_DWORD *)v6 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v6 + 8) > v9 )
      v8 += 4 * v9;
    *(_DWORD *)(*(_DWORD *)v8 + 24) = dword_60C96F28[4 * *v5 + 2];
    v10 = *(_DWORD *)(*(_DWORD *)v6 + 12);
    v11 = *(_DWORD *)(*(_DWORD *)v6 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v6 + 8) > v11 )
      v10 += 4 * v11;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v10 + 4), dword_60C96F28[4 * *v5 + 3]);
  }
}
