/* sub_6013483C
 * address: 0x6013483C   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013483C(StageActor *a1)
{
  int v2; // r4
  StateMgr *v3; // r0
  StateBase *v4; // r1

  v2 = 0;
  if ( CollisionActor__beforeExecute(a1) == 1 )
  {
    v2 = 1;
    if ( LODWORD(a1[9].aCollider.info.distToEdge.x) )
    {
      (*(void (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0).vtable + 72))(a1);
      switch ( LODWORD(a1[9].aCollider.info.distToEdge.x) )
      {
        case 1:
          v3 = (StateMgr *)&a1[9].aCollider.field_64;
          v4 = (StateBase *)&unk_60C87744;
          goto LABEL_8;
        case 2:
          v3 = (StateMgr *)&a1[9].aCollider.field_64;
          v4 = (StateBase *)&unk_60C87768;
          goto LABEL_8;
        case 3:
          v3 = (StateMgr *)&a1[9].aCollider.field_64;
          v4 = (StateBase *)&unk_60C8778C;
          goto LABEL_8;
        case 4:
          v3 = (StateMgr *)&a1[9].aCollider.field_64;
          v4 = (StateBase *)&dword_60C877B0;
LABEL_8:
          StateMgr__changeState(v3, v4);
          break;
        default:
          return v2;
      }
    }
  }
  return v2;
}
