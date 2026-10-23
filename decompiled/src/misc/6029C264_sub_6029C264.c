/* sub_6029C264
 * address: 0x6029C264   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_6029C264(_DWORD *a1)
{
  sub_60295C70(a1);
  a1[143] = -1048576000;
  a1[144] = 0;
  a1[145] = 0;
  a1[123] = -1048576000;
  a1[124] = 0;
  a1[41] = 0x40000000;
  return sub_6029951C((int)a1, -8.0, 0.0);
}
