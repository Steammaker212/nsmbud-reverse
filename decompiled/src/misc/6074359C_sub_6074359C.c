/* sub_6074359C
 * address: 0x6074359C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074359C(int a1)
{
  int v1; // r2

  v1 = FIELD_U32(a1, 6104);
  if ( v1 )
    FIELD_U32(a1, 6104) = v1 - 1;
  StateMgr__execute((StateMgr *)(a1 + 6084));
  return 1;
}
