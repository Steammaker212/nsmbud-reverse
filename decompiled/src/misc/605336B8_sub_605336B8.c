/* sub_605336B8
 * address: 0x605336B8   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605336B8(int a1)
{
  int v2; // r4

  v2 = a1 + 15700;
  sub_60502C04(a1 + 15700, dword_60B03A68, 3);
  *(_BYTE *)(FIELD_U32(a1, 52600) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 52604) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 52608) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 52612) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52644) + 64) |= 1u;
  FIELD_U8(a1, 16743) = 0;
  FIELD_U8(a1, 16740) = 1;
  FIELD_U32(a1, 83580) = 0;
  sub_605391B0(a1, FIELD_U32(a1, 16728));
  sub_60502C84(v2, dword_60B03A54, 0);
  sub_60502C84(v2, &dword_60B03A54[1], 0);
  sub_60502C84(v2, &dword_60B03A54[2], 0);
  sub_60502C84(v2, &dword_60B03A54[3], 0);
  return sub_60502C84(v2, &dword_60B03A54[4], 0);
}
