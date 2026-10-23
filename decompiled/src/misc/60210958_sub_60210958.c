/* sub_60210958
 * address: 0x60210958   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60210958(int a1)
{
  if ( sub_60190968(dword_60C8996C) )
    return (StateMethodExecuter *)sub_6020EDB4(a1);
  else
    return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C8CDCC);
}
