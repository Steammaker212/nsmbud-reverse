/* sub_6062F98C
 * address: 0x6062F98C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6062F98C(_DWORD *a1)
{
  unsigned int v1; // r1
  StateMgr *v2; // r0
  StateBase *v3; // r1

  v1 = a1[5];
  a1[1525] = v1 & 0xF;
  a1[1532] = HIBYTE(v1) & 3;
  v2 = (StateMgr *)(a1 + 1521);
  if ( (v1 & 0xF) != 0 )
    v3 = (StateBase *)&dword_60CB4088;
  else
    v3 = &stru_60CB4128;
  StateMgr__changeState(v2, v3);
  return 1;
}
