/* sub_607957E0
 * address: 0x607957E0   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607957E0(int a1)
{
  if ( PlayerMgr_instance )
    sub_60788F14(PlayerMgr_instance, FIELD_S8(a1, 84));
  sub_60782550();
  return 1;
}
