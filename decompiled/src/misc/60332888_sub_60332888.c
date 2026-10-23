/* sub_60332888
 * address: 0x60332888   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60332888(int a1)
{
  _BYTE *v2; // r6
  int v3; // r7
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0

  FIELD_U32(a1, 6972) = 1065353216;
  v2 = (_BYTE *)(a1 + 6994);
  if ( FIELD_U8(a1, 6994) != 5 )
  {
    v3 = a1 + 6336;
    sub_60421938(*(_DWORD **)(a1 + 6336), FIELD_U32(a1, 6340), (int)&dword_60C93F20);
    v4 = *(_DWORD *)(FIELD_U32(a1, 6336) + 12);
    v5 = *(_DWORD *)(FIELD_U32(a1, 6336) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 6336) + 8) > v5 )
      v4 += 4 * v5;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v4 + 4), 0);
    v6 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    v7 = *(_DWORD *)(*(_DWORD *)v3 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v7 )
      v6 += 4 * v7;
    *(_DWORD *)(*(_DWORD *)v6 + 24) = 1065353216;
    *v2 = 5;
  }
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 304) = 0;
  FIELD_U32(a1, 308) = 1094713344;
  FIELD_U32(a1, 312) = 1094713344;
  FIELD_U32(a1, 316) = 1094713344;
  FIELD_U32(a1, 6984) = 150;
  return 6984;
}
