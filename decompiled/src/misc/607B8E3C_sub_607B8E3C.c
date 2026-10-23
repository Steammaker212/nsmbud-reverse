/* sub_607B8E3C
 * address: 0x607B8E3C   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607B8E3C(int a1)
{
  int v2; // r0
  int v3; // r1

  FIELD_U32(a1, 6964) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 9940) = 0;
  PlayerBase_dispatchVirtual3(a1 + 11356, 122, 0.0);
  FIELD_F32(a1, 92) = sub_60772990(a1);
  FIELD_U32(a1, 96) = -1069547520;
  FIELD_U32(a1, 9944) = 4;
  FIELD_U32(a1, 9580) = 10;
  sub_60797414((_DWORD *)a1, 10, 1);
  sub_6079EA38((_DWORD *)a1);
  v2 = FIELD_U32(a1, 1212) | 0x1800;
  FIELD_U32(a1, 1228) |= 0x400u;
  v3 = FIELD_U32(a1, 1224);
  FIELD_U32(a1, 1212) = v2;
  FIELD_U32(a1, 1220) |= 0x100000u;
  FIELD_U32(a1, 1216) |= 0x200000u;
  FIELD_U32(a1, 1224) = v3 | 0x4004;
  return sub_6078667C((_DWORD *)(a1 + 688), 5);
}
