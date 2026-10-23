/* sub_6053C7FC
 * address: 0x6053C7FC   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6053C7FC(int a1)
{
  sub_604741D8((_DWORD *)(a1 + 12092), 0, &dword_60CAB46C, 0);
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
  *(_BYTE *)(FIELD_U32(a1, 52568) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 52572) + 64) |= 1u;
  FIELD_U8(a1, 83565) = 1;
  return 83565;
}
