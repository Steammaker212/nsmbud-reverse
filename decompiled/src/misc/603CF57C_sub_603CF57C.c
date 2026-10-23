/* sub_603CF57C
 * address: 0x603CF57C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603CF57C(StageActor *a1)
{
  signed int v1; // r1
  _BOOL4 result; // r0

  v1 = StageActor__beforeExecute(a1);
  result = 0;
  if ( v1 == 1 )
    return FIELD_U8(EnemyCounterMaybe_instance, 20) == 0;
  return result;
}
