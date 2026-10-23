/* sub_6075D0C0
 * address: 0x6075D0C0   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6075D0C0(int a1, int a2)
{
  int v4; // r1
  int v5; // r0
  _DWORD *v6; // r0
  int v7; // r1

  sub_6078E8E8();
  FIELD_U32(a1, 1156) = FIELD_U32(a1, 1152);
  v4 = dword_60B0A834[a2];
  FIELD_U32(a1, 1152) = v4;
  v5 = *(_DWORD *)(a1 + 4 * v4 + 1160);
  FIELD_U32(a1, 1176) = v5;
  if ( !v5 )
  {
    v6 = *(_DWORD **)(a1 + 564);
    goto LABEL_7;
  }
  if ( ((1 << v4) & 0xE) == 0 )
  {
    v6 = *(_DWORD **)(a1 + 564);
    if ( FIELD_U8(a1, 1182) )
      goto LABEL_6;
LABEL_7:
    v7 = 0;
    return sub_604376E0(v6, v7, 0);
  }
  v6 = *(_DWORD **)(a1 + 564);
LABEL_6:
  v7 = dword_60AF2C04[v4];
  return sub_604376E0(v6, v7, 0);
}
