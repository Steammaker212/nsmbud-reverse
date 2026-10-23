/* sub_60524F70
 * address: 0x60524F70   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60524F70(int a1)
{
  int v1; // r2
  int v3; // r1
  StateMgr *v4; // r0
  StateBase *v5; // r1

  v1 = FIELD_U32(a1, 4660);
  if ( v1 )
  {
    FIELD_U32(a1, 4660) = v1 - 1;
    return (StateMethodExecuter *)(v1 - 1);
  }
  else
  {
    v3 = FIELD_U8(a1, 4674);
    v4 = (StateMgr *)(a1 + 24);
    if ( v3 )
      v5 = (StateBase *)&unk_60CA9DA4;
    else
      v5 = (StateBase *)&unk_60CA9DC4;
    return StateMgr__changeState(v4, v5);
  }
}
