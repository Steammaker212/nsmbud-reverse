/* sub_60286EB0
 * address: 0x60286EB0   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60286EB0(int a1)
{
  _BYTE *v2; // r5
  int v3; // r6
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0

  v2 = (_BYTE *)(a1 + 6606);
  if ( FIELD_U8(a1, 6606) != 1 )
  {
    v3 = a1 + 6300;
    sub_60421938(*(_DWORD **)(a1 + 6300), FIELD_U32(a1, 6304), (int)&unk_60C8F194);
    v4 = *(_DWORD *)(FIELD_U32(a1, 6300) + 12);
    v5 = *(_DWORD *)(FIELD_U32(a1, 6300) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 6300) + 8) > v5 )
      v4 += 4 * v5;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v4 + 4), 0);
    v6 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    v7 = *(_DWORD *)(*(_DWORD *)v3 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v7 )
      v6 += 4 * v7;
    *(_DWORD *)(*(_DWORD *)v6 + 24) = 1065353216;
    *v2 = 1;
  }
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  return 0;
}
