/* sub_60831878
 * address: 0x60831878   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60831878(int a1)
{
  int v1; // r2

  v1 = FIELD_U32(a1, 6100);
  if ( v1 )
    FIELD_U32(a1, 6100) = v1 - 1;
  StateMgr__execute((StateMgr *)(a1 + 6084));
  return 1;
}
