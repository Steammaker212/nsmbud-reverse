/* Fuzzy__beginState_DieFall
 * address: 0x602783DC   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7FF0
// 
// Overridden by: None
signed int __fastcall Fuzzy__beginState_DieFall(StateActor *a1)
{
  signed int v2; // r0
  unsigned int v3; // r1
  int v4; // r0

  v2 = StageActor__directionToPlayerX(a1, &FIELD_U32(a1, 0x6C));
  FIELD_U32(a1, 0x50) = v2;
  FIELD_U32(a1, 0xA0) = Enemy_CommonRotations[v2];
  v3 = a1[1]._._.aCollider.field_EC;
  if ( v3 )
  {
    v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v3);
    if ( v4 )
      FIELD_U8(v4, 10566) = 1;
    a1[1]._._.aCollider.field_EC = 0;
  }
  return Enemy__beginState_DieFall((Enemy *)a1);
}
