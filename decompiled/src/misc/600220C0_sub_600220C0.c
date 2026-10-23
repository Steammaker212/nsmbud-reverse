/* sub_600220C0
 * address: 0x600220C0   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600220C0(int a1, int a2)
{
  int result; // r0

  if ( sub_6078A4C8(PlayerMgr_instance, 0) == 1 )
    sub_600221A0(a1, 8, 0, a2);
  if ( sub_6078A4C8(PlayerMgr_instance, 1) == 1 )
    sub_600221A0(a1, 8, 1, a2);
  if ( sub_6078A4C8(PlayerMgr_instance, 2) == 1 )
    sub_600221A0(a1, 8, 2, a2);
  result = sub_6078A4C8(PlayerMgr_instance, 3);
  if ( result == 1 )
    return sub_600221A0(a1, 8, 3, a2);
  return result;
}
