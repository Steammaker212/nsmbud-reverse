/* sub_6047FDCC
 * address: 0x6047FDCC   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6047FDCC(int a1)
{
  sub_6047FDEC();
  sub_60480008(a1);
  return StateMgr__execute((StateMgr *)(a1 + 36));
}
