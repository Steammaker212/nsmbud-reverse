/* sub_602D1D84
 * address: 0x602D1D84   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602D1D84(int a1, int a2, int a3, int a4, float a5, float a6)
{
  _DWORD *v9; // r0
  int v10; // r1
  unsigned int v11; // r2
  unsigned int v12; // r0
  _DWORD *v13; // r0
  int *v14; // r1
  unsigned int v15; // r2
  unsigned int v16; // r0
  int result; // r0

  sub_60421938(*(_DWORD **)(a1 + 4), a3, a2);
  v9 = *(_DWORD **)(a1 + 4);
  v10 = v9[3];
  v11 = v9[2];
  v12 = v9[17];
  if ( v11 > v12 )
    v10 += 4 * v12;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v10 + 4), a4);
  v13 = *(_DWORD **)(a1 + 4);
  v14 = (int *)v13[3];
  v15 = v13[2];
  v16 = v13[17];
  if ( v15 > v16 )
    v14 += v16;
  result = *v14;
  *(float *)(*v14 + 24) = a6;
  return result;
}
