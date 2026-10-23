/* sub_605033B8
 * address: 0x605033B8   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605033B8(int a1)
{
  StateMgr *v2; // r0
  int *v3; // r1
  int v4; // r1
  int v5; // r2
  bool v6; // zf

  if ( FIELD_U8(a1, 741) )
  {
    FIELD_U8(a1, 741) = 0;
    v2 = (StateMgr *)(a1 + 24);
    if ( FIELD_U8(a1, 731) )
      v3 = &dword_60CA7768;
    else
      v3 = &dword_60CA7748;
    return StateMgr__changeState(v2, (StateBase *)v3);
  }
  else
  {
    v4 = sub_608DE61C(a1 + 52, FIELD_U32(a1, 716));
    v6 = v4 == 0;
    if ( v4 )
      v5 = FIELD_U32(a1, 64);
    else
      v4 = 0;
    if ( !v6 )
      v4 -= v5;
    return (StateMethodExecuter *)sub_6047EBB4(a1 + 40, v4);
  }
}
