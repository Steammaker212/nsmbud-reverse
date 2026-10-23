/* sub_607F33B0
 * address: 0x607F33B0   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607F33B0(StateMethodExecuter *result)
{
  int v1; // r1
  bool v2; // zf

  v1 = FIELD_U32(dword_60C99DD0, 3668);
  v2 = v1 == 0;
  if ( v1 )
    v2 = FIELD_U8(v1, 1042) == 0;
  if ( v2 )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CC6114);
  return result;
}
