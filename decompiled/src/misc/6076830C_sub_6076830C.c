/* sub_6076830C
 * address: 0x6076830C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6076830C(int a1)
{
  Player_changeState(a1, (StateBase *)&dword_60CBF864, 1);
  return sub_60766314(a1, (StateBase *)&unk_60CBF430, 2);
}
