/* sub_6028ED0C
 * address: 0x6028ED0C   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6028ED0C(int a1)
{
  _DWORD *v2; // r0
  int v3; // r2
  unsigned int v4; // r3
  unsigned int v5; // r0
  _DWORD *v6; // r0
  int v7; // r2
  unsigned int v8; // r3
  unsigned int v9; // r0

  if ( FIELD_U32(a1, 48) != 12 )
  {
    FIELD_U32(a1, 48) = 12;
    sub_60421938(*(_DWORD **)(a1 + 40), FIELD_U32(a1, 36), (int)&dword_60C8F664);
    v2 = *(_DWORD **)(a1 + 40);
    v3 = v2[3];
    v4 = v2[2];
    v5 = v2[17];
    if ( v4 > v5 )
      v3 += 4 * v5;
    *(_DWORD *)(*(_DWORD *)v3 + 24) = dword_60C8F5A4[4 * FIELD_U32(a1, 48) + 2];
    v6 = *(_DWORD **)(a1 + 40);
    v7 = v6[3];
    v8 = v6[2];
    v9 = v6[17];
    if ( v8 > v9 )
      v7 += 4 * v9;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v7 + 4), dword_60C8F5A4[4 * FIELD_U32(a1, 48) + 3]);
  }
  FIELD_U32(a1, 64) = 0;
  FIELD_U32(a1, 68) = 0;
  FIELD_U32(a1, 72) = 0;
  return 0;
}
