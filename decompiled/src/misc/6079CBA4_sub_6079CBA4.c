/* sub_6079CBA4
 * address: 0x6079CBA4   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079CBA4(int a1)
{
  int v2; // r0
  int result; // r0

  ((void (*)(void))loc_6079CA8C)();
  FIELD_U8(PlayerMgr_instance, 157) |= 1 << FIELD_U8(a1, 84);
  FIELD_U32(a1, 1208) |= 1u;
  v2 = FIELD_U32(a1, 1220);
  if ( (v2 & 0x20000000) != 0 )
    FIELD_U32(a1, 1220) = v2 | 0x10000000;
  sub_6078667C((_DWORD *)(a1 + 688), 2);
  sub_6078667C((_DWORD *)(a1 + 688), 6);
  FIELD_U32(a1, 12216) = FIELD_U32(a1, 9936);
  FIELD_U32(a1, 12220) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 12224) = FIELD_U32(a1, 112);
  result = FIELD_U32(a1, 116);
  FIELD_U32(a1, 12228) = result;
  return result;
}
