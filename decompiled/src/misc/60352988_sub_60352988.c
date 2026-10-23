/* sub_60352988
 * address: 0x60352988   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60352988(StateActor *a1)
{
  int v2; // r0
  StateActor *v3; // r6
  StageActor *v4; // r0
  int v5; // r0
  StateActor *v6; // r6
  StageActor *v7; // r0
  int v8; // r0

  StageActor__cullCheck(&FIELD_U32(a1, 0x0)._, 2);
  if ( v2 != 1 )
    return 0;
  v3 = a1;
  while ( 1 )
  {
    v4 = (StageActor *)sub_60351954((unsigned int)v3[1]._._.aCollider.activeNode.next);
    v3 = (StateActor *)v4;
    if ( !v4 )
      break;
    StageActor__cullCheck(v4, 2);
    if ( !v5 )
      return 0;
  }
  v6 = a1;
  while ( 1 )
  {
    v7 = (StageActor *)sub_60351954((unsigned int)v6[1]._._.aCollider.activeNode.prev);
    v6 = (StateActor *)v7;
    if ( !v7 )
      break;
    StageActor__cullCheck(v7, 2);
    if ( !v8 )
      return 0;
  }
  sub_60352CBC(a1);
  StageActor__delete(a1, 0);
  return 1;
}
