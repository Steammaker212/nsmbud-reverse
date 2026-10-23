/* sub_60333A98
 * address: 0x60333A98   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60333A98(int a1)
{
  _BYTE *v2; // r5
  int v3; // r7
  int v4; // r6
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0

  v2 = (_BYTE *)(a1 + 6994);
  if ( FIELD_U8(a1, 6994) != 8 )
  {
    v3 = a1 + 6336;
    v4 = FIELD_U32(a1, 6972);
    sub_60421938(*(_DWORD **)(a1 + 6336), FIELD_U32(a1, 6340), (int)&dword_60C93F38);
    v5 = *(_DWORD *)(FIELD_U32(a1, 6336) + 12);
    v6 = *(_DWORD *)(FIELD_U32(a1, 6336) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 6336) + 8) > v6 )
      v5 += 4 * v6;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 1);
    v7 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    v8 = *(_DWORD *)(*(_DWORD *)v3 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v8 )
      v7 += 4 * v8;
    *(_DWORD *)(*(_DWORD *)v7 + 24) = v4;
    *v2 = 8;
  }
  return Enemy__beginState_DieFall((Enemy *)a1);
}
