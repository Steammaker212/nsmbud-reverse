/* sub_607681C8
 * address: 0x607681C8   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607681C8(int a1)
{
  Player_changeState(a1, &stru_60CBF81C, 0);
  return sub_60766314(a1, (StateBase *)&unk_60CBF40C, 0);
}
