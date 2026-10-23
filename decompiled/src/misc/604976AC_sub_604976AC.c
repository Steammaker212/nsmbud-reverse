/* sub_604976AC
 * address: 0x604976AC   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604976AC(int a1)
{
  int v2; // r0
  unsigned int v3; // r0
  StateBase *v4; // r1
  StateMgr *v5; // r0
  int v6; // r1

  v2 = sub_60834614();
  if ( dword_60C99DD4 && (v3 = FIELD_U32(v2, 492), v3 <= 4) && ((1 << v3) & 0x16) != 0 )
  {
    FIELD_U8(a1, 56) = 1;
    v4 = (StateBase *)&unk_60CA0600;
    v5 = (StateMgr *)(a1 + 40);
  }
  else
  {
    v6 = FIELD_U8(a1, 146844);
    FIELD_U8(a1, 56) = 1;
    v5 = (StateMgr *)(a1 + 40);
    if ( v6 )
      v4 = (StateBase *)&unk_60CA0620;
    else
      v4 = (StateBase *)&unk_60CA05E0;
  }
  return StateMgr__changeState(v5, v4);
}
