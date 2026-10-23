/* sub_60528260
 * address: 0x60528260   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60528260(int a1)
{
  StateMgr *v2; // r0
  StateBase *v3; // r1
  _DWORD *v4; // r1

  FIELD_U16(a1, 40) = 257;
  v2 = (StateMgr *)(a1 + 24);
  if ( FIELD_U32(dword_60CC6D78, 32) == 2 )
    v3 = (StateBase *)&unk_60CA9AC4;
  else
    v3 = (StateBase *)&unk_60CA9E24;
  StateMgr__changeState(v2, v3);
  sub_60473DE4((_DWORD *)(a1 + 44), 2u, &dword_60CA996C, 0);
  v4 = *(_DWORD **)(a1 + 3556);
  if ( FIELD_U32(a1, 3552) > 2u )
    v4 += 10;
  return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v4 + 104))(*v4);
}
