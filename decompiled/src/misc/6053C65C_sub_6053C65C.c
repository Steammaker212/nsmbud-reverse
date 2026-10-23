/* sub_6053C65C
 * address: 0x6053C65C   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6053C65C(int a1)
{
  _DWORD *v2; // r5
  int v3; // r0
  int v4; // r0

  v2 = (_DWORD *)(a1 + 15720);
  sub_6047EFCC(a1 + 15720, 0);
  FIELD_U8(a1, 16180) = 1;
  sub_6047EFCC((int)v2, 1);
  FIELD_U8(a1, 16181) = 1;
  sub_6047EFCC((int)v2, 2);
  FIELD_U8(a1, 16182) = 1;
  sub_6047EFCC((int)v2, 3);
  FIELD_U8(a1, 16183) = 1;
  *(_BYTE *)(FIELD_U32(a1, 52580) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52584) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52588) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52592) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52596) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52600) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52604) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52608) + 64) |= 1u;
  v3 = FIELD_U32(a1, 83552);
  FIELD_U32(a1, 83556) = v3;
  v4 = dword_60B03A88[v3];
  FIELD_U32(a1, 16708) = v4;
  FIELD_U32(a1, 16712) = v4;
  FIELD_U8(a1, 83565) = 0;
  FIELD_U8(a1, 83569) = 0;
  sub_60502548(a1 + 15680);
  FIELD_U16(a1, 16732) = 0;
  return sub_6047EABC(v2);
}
