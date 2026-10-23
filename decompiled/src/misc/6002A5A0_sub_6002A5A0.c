/* sub_6002A5A0
 * address: 0x6002A5A0   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6002A5A0(int a1)
{
  _BYTE *v2; // r5
  int v3; // r7
  int v4; // r6
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  int v9; // r5
  int result; // r0

  v2 = (_BYTE *)(a1 + 7426);
  if ( FIELD_U8(a1, 7426) != 8 )
  {
    v3 = a1 + 7096;
    v4 = FIELD_U32(a1, 7380);
    sub_60421938(*(_DWORD **)(a1 + 7096), FIELD_U32(a1, 7100), (int)&dword_60C7F760);
    v5 = *(_DWORD *)(FIELD_U32(a1, 7096) + 12);
    v6 = *(_DWORD *)(FIELD_U32(a1, 7096) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 7096) + 8) > v6 )
      v5 += 4 * v6;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 0);
    v7 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    v8 = *(_DWORD *)(*(_DWORD *)v3 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v8 )
      v7 += 4 * v8;
    *(_DWORD *)(*(_DWORD *)v7 + 24) = v4;
    *v2 = 8;
  }
  v9 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  result = (*(int (**)(void))(dword_60C7F928 + 8))();
  if ( v9 == result )
  {
    FIELD_U32(a1, 7092) = 3;
    return 7092;
  }
  return result;
}
