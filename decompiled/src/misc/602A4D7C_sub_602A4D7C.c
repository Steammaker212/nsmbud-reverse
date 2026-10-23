/* sub_602A4D7C
 * address: 0x602A4D7C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_602A4D7C(int a1)
{
  int v2; // r1
  int v3; // r2

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6104));
  v2 = a1 + 6176;
  v3 = FIELD_U32(dword_60C995D0, 32);
  if ( v3 && v3 == v2 )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&unk_60C9063C);
  else
    return (StateMethodExecuter *)sub_603E552C(dword_60C995D0, v2);
}
