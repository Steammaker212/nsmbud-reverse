/* sub_60777368
 * address: 0x60777368   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60777368(int a1)
{
  int result; // r0

  result = Player_getActorSlotChecked(PlayerMgr_instance, FIELD_U32(a1, 336));
  if ( result )
    return (*(int (__fastcall **)(int, int))(*(_DWORD *)result + 668))(result, 1);
  return result;
}
