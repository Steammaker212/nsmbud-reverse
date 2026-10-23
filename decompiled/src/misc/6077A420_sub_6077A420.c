/* sub_6077A420
 * address: 0x6077A420   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6077A420(int a1, int a2)
{
  int result; // r0

  result = Player_getActorSlotChecked(PlayerMgr_instance, a2);
  if ( result )
    FIELD_U32(result, 1232) |= 0x80000u;
  return result;
}
