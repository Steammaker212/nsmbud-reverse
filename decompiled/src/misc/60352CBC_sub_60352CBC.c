/* sub_60352CBC
 * address: 0x60352CBC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall sub_60352CBC(int a1)
{
  unsigned int i; // r0
  ActiveColliderNode *next; // r5
  StateActor *v4; // r0
  unsigned int j; // r0
  ActiveColliderNode *prev; // r4
  StateActor *result; // r0

  for ( i = FIELD_U32(a1, 6308); ; i = (unsigned int)next )
  {
    v4 = (StateActor *)sub_60351954(i);
    if ( !v4 )
      break;
    next = v4[1]._._.aCollider.activeNode.next;
    StageActor__delete(v4, 0);
  }
  for ( j = FIELD_U32(a1, 6312); ; j = (unsigned int)prev )
  {
    result = (StateActor *)sub_60351954(j);
    if ( !result )
      break;
    prev = result[1]._._.aCollider.activeNode.prev;
    StageActor__delete(result, 0);
  }
  return result;
}
