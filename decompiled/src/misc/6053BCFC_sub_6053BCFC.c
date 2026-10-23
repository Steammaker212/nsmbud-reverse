/* sub_6053BCFC
 * address: 0x6053BCFC   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6053BCFC(int a1)
{
  int v2; // r5
  unsigned int *v3; // r7
  unsigned int v4; // r0
  int result; // r0

  v2 = a1 + 15680;
  v3 = (unsigned int *)(a1 + 83552);
  v4 = FIELD_U32(a1, 16708) - 1;
  if ( v4 <= 2 )
    *v3 = v4;
  sub_60473DE4((_DWORD *)(a1 + 12092), 0, &dword_60CAB474, 0);
  FIELD_U8(a1, 83565) = 1;
  FIELD_U8(a1, 83569) = 1;
  FIELD_U32(a1, 52476) = *v3;
  FIELD_U32(a1, 52448) = 2;
  sub_60502548(v2);
  sub_6047EFCC(a1 + 15720, 0);
  FIELD_U8(a1, 16180) = 1;
  sub_6047EFCC(a1 + 15720, 1);
  FIELD_U8(a1, 16181) = 1;
  sub_6047EFCC(a1 + 15720, 2);
  FIELD_U8(a1, 16182) = 1;
  sub_6047EFCC(a1 + 15720, 3);
  FIELD_U8(a1, 16183) = 1;
  *(_BYTE *)(FIELD_U32(a1, 52580) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52584) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52588) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52592) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52596) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52600) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52604) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52608) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52560) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 52564) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52568) + 64) |= 1u;
  result = FIELD_U32(a1, 52572);
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
