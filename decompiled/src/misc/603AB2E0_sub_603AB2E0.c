/* sub_603AB2E0
 * address: 0x603AB2E0   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603AB2E0(int a1, int a2)
{
  _DWORD *v3; // r5
  int v4; // r4
  _DWORD *v5; // r8
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r1
  unsigned int v9; // r0
  int v10; // r6
  int v11; // t1

  v3 = (_DWORD *)(a1 + 6112);
  if ( FIELD_U32(a1, 6112) != a2 )
  {
    *v3 = a2;
    v4 = a1 + 6104;
    v5 = (_DWORD *)(a1 + 6100);
    sub_60421938(*(_DWORD **)(a1 + 6104), FIELD_U32(a1, 6100), (int)&dword_60C97A54[5 * a2]);
    v6 = *(_DWORD *)(FIELD_U32(a1, 6104) + 12);
    v7 = *(_DWORD *)(FIELD_U32(a1, 6104) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 6104) + 8) > v7 )
      v6 += 4 * v7;
    *(_DWORD *)(*(_DWORD *)v6 + 24) = dword_60C97A54[5 * *v3 + 2];
    v8 = *(_DWORD *)(*(_DWORD *)v4 + 12);
    v9 = *(_DWORD *)(*(_DWORD *)v4 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v9 )
      v8 += 4 * v9;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v8 + 4), dword_60C97A54[5 * *v3 + 3]);
    if ( LOBYTE(dword_60C97A54[5 * *v3 + 4]) )
    {
      v11 = FIELD_U32(a1, 6108);
      v10 = a1 + 6108;
      TexAnim_play(v11, *v5, &dword_60C97A54[5 * *v3]);
      *(_DWORD *)(*(_DWORD *)v10 + 24) = dword_60C97A54[5 * *v3 + 2];
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v10 + 4), dword_60C97A54[5 * *v3 + 3]);
    }
  }
}
