/* sub_60002B6C
 * address: 0x60002B6C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StageActor *__fastcall sub_60002B6C(StageActor *result)
{
  if ( ActorMgr__instance )
    return (StageActor *)ActorMgr_unk((void *)ActorMgr__instance, &FIELD_U8(result, 0x10));
  return result;
}
