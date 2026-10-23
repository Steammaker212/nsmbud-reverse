/* sub_606818A0
 * address: 0x606818A0   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall sub_606818A0(StateActor *result)
{
  if ( result[1]._.collisionMgr[769] )
    return (StateActor *)StageActor__delete(result, 1);
  return result;
}
