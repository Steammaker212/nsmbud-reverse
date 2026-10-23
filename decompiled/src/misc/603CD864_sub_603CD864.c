/* sub_603CD864
 * address: 0x603CD864   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603CD864(StateActor *a1)
{
  StateMgr__execute(&FIELD_U32(a1, 0x17C4));
  if ( FIELD_U8(LevelInfo_instance, 20) != (unsigned __int8)FIELD_U8(a1, 0x214) )
    StageActor__delete(a1, 1);
  return 1;
}
