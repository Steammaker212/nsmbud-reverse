/* sub_60332DF8
 * address: 0x60332DF8   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60332DF8(int a1)
{
  int result; // r0
  _BYTE *v3; // r5
  int *v4; // r4
  _DWORD *v5; // t1
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r1
  unsigned int v9; // r0

  FIELD_U8(a1, 7004) = 1;
  FIELD_U32(a1, 304) = 0;
  FIELD_U32(a1, 308) = 1094713344;
  FIELD_U32(a1, 312) = 1094713344;
  FIELD_U32(a1, 316) = 1094713344;
  v3 = (_BYTE *)(a1 + 6994);
  result = FIELD_U8(a1, 6994);
  if ( result != 7 )
  {
    v5 = *(_DWORD **)(a1 + 6336);
    v4 = (int *)(a1 + 6336);
    sub_60421938(v5, v4[1], (int)&dword_60C93F30);
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
    *v3 = 7;
    return 7;
  }
  return result;
}
