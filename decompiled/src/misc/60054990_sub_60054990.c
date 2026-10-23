/* sub_60054990
 * address: 0x60054990   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60054990(int a1)
{
  int v1; // r1
  int v2; // r2

  FIELD_F32(a1, 108) = FIELD_F32(dword_60CC6484, 112) + -48.0;
  FIELD_U32(a1, 6316) = 2;
  v1 = FIELD_U32(a1, 80);
  FIELD_U32(a1, 80) = v1 ^ 1;
  v2 = 0x20000000;
  if ( !v1 )
    v2 = -536870912;
  FIELD_U32(a1, 160) = v2;
  return PlayerLookTargetMgr_remove(PlayerLookTargetList_instance, a1 + 6424);
}
