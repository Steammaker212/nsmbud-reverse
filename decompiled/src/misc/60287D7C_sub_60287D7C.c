/* sub_60287D7C
 * address: 0x60287D7C   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60287D7C(int a1)
{
  _BYTE *v2; // r6
  int v3; // r7
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0

  FIELD_U8(a1, 6609) = 1;
  v2 = (_BYTE *)(a1 + 6606);
  if ( FIELD_U8(a1, 6606) != 4 )
  {
    v3 = a1 + 6300;
    sub_60421938(*(_DWORD **)(a1 + 6300), FIELD_U32(a1, 6304), (int)&dword_60C8F1AC);
    v4 = *(_DWORD *)(FIELD_U32(a1, 6300) + 12);
    v5 = *(_DWORD *)(FIELD_U32(a1, 6300) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 6300) + 8) > v5 )
      v4 += 4 * v5;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v4 + 4), 1);
    v6 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    v7 = *(_DWORD *)(*(_DWORD *)v3 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v7 )
      v6 += 4 * v7;
    *(_DWORD *)(*(_DWORD *)v6 + 24) = 1058642330;
    *v2 = 4;
  }
  FIELD_F32(a1, 120) = (float)-byte_60AFE3F4[FIELD_U32(a1, 80)] * 0.75;
  FIELD_U32(a1, 124) = 0x40000000;
  FIELD_U8(a1, 6607) = 1;
  FIELD_U16(a1, 6604) = 0;
  return 6604;
}
