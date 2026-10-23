/* sub_600D52E8
 * address: 0x600D52E8   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600D52E8(int a1)
{
  float v2; // s0

  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  if ( sub_600D5CB4(a1, v2) == 1 )
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C84378);
  JUMPOUT(0x60000CD0);
}
