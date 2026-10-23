/* sub_60287B94
 * address: 0x60287B94   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60287B94(int a1)
{
  int *v2; // r6
  int v3; // r0
  int *v4; // r4
  _DWORD *v5; // t1
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r1
  unsigned int v9; // r0
  int result; // r0

  v2 = (int *)(a1 + 6308);
  sub_6041838C((ModelAnimation *)(FIELD_U32(a1, 6308) + 4));
  v3 = *v2;
  FIELD_U32(v3, 20) = 0;
  FIELD_U32(v3, 28) |= 2u;
  *(_DWORD *)(*v2 + 24) = 1065353216;
  v5 = *(_DWORD **)(a1 + 6300);
  v4 = (int *)(a1 + 6300);
  sub_60421938(v5, v4[1], (int)&dword_60C8F1A4);
  v6 = *(_DWORD *)(*v4 + 12);
  v7 = *(_DWORD *)(*v4 + 68);
  if ( *(_DWORD *)(*v4 + 8) > v7 )
    v6 += 4 * v7;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v6 + 4), 0);
  v8 = *(_DWORD *)(*v4 + 12);
  v9 = *(_DWORD *)(*v4 + 68);
  if ( *(_DWORD *)(*v4 + 8) > v9 )
    v8 += 4 * v9;
  *(_DWORD *)(*(_DWORD *)v8 + 24) = 1065353216;
  *((_BYTE *)v4 + 306) = 3;
  *(v4 - 1535) = 0;
  *((_WORD *)v4 + 151) = 7;
  *(v4 - 1545) = 0;
  *(v4 - 1544) = 0;
  result = *(v4 - 1548);
  v4[67] = result;
  return result;
}
