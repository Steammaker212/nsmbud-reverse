/* sub_603C5F58
 * address: 0x603C5F58   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603C5F58(int a1)
{
  _DWORD *v2; // r0
  int *v3; // r4
  _DWORD *v4; // t1
  int *v5; // r5
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r1
  unsigned int v9; // r0

  sub_602A3EFC(a1 + 14508, 24, 0.0625);
  if ( !FIELD_U32(a1, 27024) && !FIELD_U8(a1, 27021) )
  {
    sub_603C605C(a1);
    FIELD_U8(a1, 27021) = 15;
    v4 = *(_DWORD **)(a1 + 14956);
    v3 = (int *)(a1 + 14956);
    v2 = v4;
    v5 = &dword_60C98644;
    if ( !v3[3006] )
      v5 = &dword_60C98664;
    sub_60421938(v2, v3[1], (int)(v5 + 2));
    v6 = *(_DWORD *)(*v3 + 12);
    v7 = *(_DWORD *)(*v3 + 68);
    if ( *(_DWORD *)(*v3 + 8) > v7 )
      v6 += 4 * v7;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v6 + 4), 1);
    v8 = *(_DWORD *)(*v3 + 12);
    v9 = *(_DWORD *)(*v3 + 68);
    if ( *(_DWORD *)(*v3 + 8) > v9 )
      v8 += 4 * v9;
    *(_DWORD *)(*(_DWORD *)v8 + 24) = 1065353216;
    *((_BYTE *)v3 + 12073) = 1;
  }
  return 1;
}
