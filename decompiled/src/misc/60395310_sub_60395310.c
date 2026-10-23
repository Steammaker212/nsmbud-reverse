/* sub_60395310
 * address: 0x60395310   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60395310(_DWORD *a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r4
  _DWORD *v4; // t1
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0

  a1[29] = -991887360;
  (*(void (__fastcall **)(_DWORD *))(*a1 + 72))(a1);
  v2 = a1 + 1578;
  if ( a1[1578] != 18 )
  {
    *v2 = 18;
    v4 = (_DWORD *)a1[1576];
    v3 = a1 + 1576;
    sub_60421938(v4, *(v3 - 1), (int)&dword_60C97048);
    v5 = *(_DWORD *)(*v3 + 12);
    v6 = *(_DWORD *)(*v3 + 68);
    if ( *(_DWORD *)(*v3 + 8) > v6 )
      v5 += 4 * v6;
    *(_DWORD *)(*(_DWORD *)v5 + 24) = dword_60C96F28[4 * *v2 + 2];
    v7 = *(_DWORD *)(*v3 + 12);
    v8 = *(_DWORD *)(*v3 + 68);
    if ( *(_DWORD *)(*v3 + 8) > v8 )
      v7 += 4 * v8;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v7 + 4), dword_60C96F28[4 * *v2 + 3]);
  }
}
