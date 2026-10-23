/* sub_607EF2A0
 * address: 0x607EF2A0   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607EF2A0(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r2
  int v4; // r1
  bool v5; // zf

  if ( FIELD_U8(a1, 26398) )
    return StateMgr__changeState((StateMgr *)(a1 + 2236), (StateBase *)&dword_60CC5E30);
  result = (StateMethodExecuter *)(a1 + 2648);
  v3 = FIELD_U32(a1, 208) | FIELD_U32(a1, 200);
  if ( (v3 & 0x40) != 0 )
    return (StateMethodExecuter *)sub_604ECFC4((int)result, 0);
  v4 = FIELD_U32(a1, 1824) | FIELD_U32(a1, 1816);
  if ( v4 & 0x40 | v3 & 0x100 | v4 & 0x100 )
    return (StateMethodExecuter *)sub_604ECFC4((int)result, 0);
  v5 = (v3 & 0x80) == 0;
  if ( (v3 & 0x80) == 0 )
    v5 = (v4 & 0x80 | v3 & 0x10000 | v4 & 0x10000) == 0;
  if ( !v5 )
    return (StateMethodExecuter *)sub_604ECFC4((int)result, 1u);
  if ( ((v3 | v4) & 0x4000) != 0 )
    return (StateMethodExecuter *)sub_604ECFC4((int)result, 2u);
  return result;
}
