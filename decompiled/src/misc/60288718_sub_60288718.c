/* sub_60288718
 * address: 0x60288718   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60288718(int a1)
{
  int *v2; // r5
  int v3; // r0
  int v4; // r6
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0

  v2 = (int *)(a1 + 6308);
  sub_6041838C((ModelAnimation *)(FIELD_U32(a1, 6308) + 4));
  v3 = *v2;
  FIELD_U32(v3, 20) = 0;
  FIELD_U32(v3, 28) |= 2u;
  *(_DWORD *)(*v2 + 24) = 1065353216;
  if ( FIELD_U8(a1, 6606) != 4 )
  {
    v4 = a1 + 6300;
    sub_60421938(*(_DWORD **)(a1 + 6300), FIELD_U32(a1, 6304), (int)&dword_60C8F1AC);
    v5 = *(_DWORD *)(FIELD_U32(a1, 6300) + 12);
    v6 = *(_DWORD *)(FIELD_U32(a1, 6300) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 6300) + 8) > v6 )
      v5 += 4 * v6;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 1);
    v7 = *(_DWORD *)(*(_DWORD *)v4 + 12);
    v8 = *(_DWORD *)(*(_DWORD *)v4 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v8 )
      v7 += 4 * v8;
    *(_DWORD *)(*(_DWORD *)v7 + 24) = 1061997773;
    FIELD_U8(a1, 6606) = 4;
  }
  FIELD_F32(a1, 120) = (float)-byte_60AFE3F4[FIELD_U32(a1, 80)];
  FIELD_U32(a1, 124) = 1069547520;
  FIELD_U8(a1, 6607) = 1;
  return 6607;
}
