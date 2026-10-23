/* sub_6002DFBC
 * address: 0x6002DFBC   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6002DFBC(int a1)
{
  int result; // r0
  _BYTE *v3; // r5
  int *v4; // r4
  _DWORD *v5; // t1
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r1
  unsigned int v9; // r0

  v3 = (_BYTE *)(a1 + 7426);
  result = FIELD_U8(a1, 7426);
  if ( result != 19 )
  {
    v5 = *(_DWORD **)(a1 + 7096);
    v4 = (int *)(a1 + 7096);
    sub_60421938(v5, v4[1], (int)&dword_60C7F7B8);
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
    *v3 = 19;
    return 19;
  }
  return result;
}
