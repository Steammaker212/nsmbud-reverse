/* sub_606C6A20
 * address: 0x606C6A20   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_606C6A20(StateActor *a1)
{
  int eventId1; // r0
  int v3; // r3
  unsigned int v4; // r1
  int v5; // r0
  _BYTE *result; // r0

  (*(void (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0) + 220))(a1);
  eventId1 = (unsigned __int8)FIELD_U8(a1, 0x21B);
  v3 = eventId1 - 33;
  v4 = 1u >> (33 - eventId1);
  v5 = 1 << (eventId1 - 1);
  if ( v3 >= 0 )
  {
    v4 = 1 << v3;
    v5 = 0;
  }
  result = (_BYTE *)(v5 & FIELD_U32(EventMgr__instance, 16) | v4 & FIELD_U32(EventMgr__instance, 20));
  if ( !result )
    return StageActor__delete(a1, 1);
  return result;
}
