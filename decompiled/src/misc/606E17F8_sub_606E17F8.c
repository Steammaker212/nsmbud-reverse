/* sub_606E17F8
 * address: 0x606E17F8   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall sub_606E17F8(StateActor *result)
{
  int eventId1; // r1
  int v2; // lr
  unsigned int v3; // r2
  int v4; // r1

  eventId1 = (unsigned __int8)FIELD_U8(result, 0x21B);
  if ( !FIELD_U8(result, 0x21B) )
    return (StateActor *)StageActor__delete(result, 1);
  v2 = eventId1 - 33;
  v3 = 1u >> (33 - eventId1);
  v4 = 1 << (eventId1 - 1);
  if ( v2 >= 0 )
  {
    v3 = 1 << v2;
    v4 = 0;
  }
  if ( !(FIELD_U32(EventMgr__instance, 16) & v4 | FIELD_U32(EventMgr__instance, 20) & v3) )
    return (StateActor *)StageActor__delete(result, 1);
  return result;
}
