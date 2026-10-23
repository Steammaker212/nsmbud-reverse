/* sub_60393C18
 * address: 0x60393C18   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60393C18(int a1)
{
  _DWORD *v2; // r5
  int v3; // r4
  _DWORD *v4; // t1
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0

  sub_6039AF5C(a1, 7, 0.0);
  if ( (FIELD_U8(a1, 6322) & 1) != 0 )
  {
    v2 = (_DWORD *)(a1 + 6312);
    if ( !FIELD_U32(a1, 6312) )
    {
      *v2 = 16;
      v4 = *(_DWORD **)(a1 + 6304);
      v3 = a1 + 6304;
      sub_60421938(v4, *(_DWORD *)(v3 - 4), (int)&dword_60C97028);
      v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
      v6 = *(_DWORD *)(*(_DWORD *)v3 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v6 )
        v5 += 4 * v6;
      *(_DWORD *)(*(_DWORD *)v5 + 24) = dword_60C96F28[4 * *v2 + 2];
      v7 = *(_DWORD *)(*(_DWORD *)v3 + 12);
      v8 = *(_DWORD *)(*(_DWORD *)v3 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v8 )
        v7 += 4 * v8;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v7 + 4), dword_60C96F28[4 * *v2 + 3]);
    }
  }
}
