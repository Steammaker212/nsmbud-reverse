/* sub_605E084C
 * address: 0x605E084C   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605E084C(int a1)
{
  int v1; // r2

  v1 = FIELD_U32(a1, 8016);
  if ( v1 )
    FIELD_U32(a1, 8016) = v1 - 1;
  return StateMgr__execute((StateMgr *)(a1 + 6740));
}
