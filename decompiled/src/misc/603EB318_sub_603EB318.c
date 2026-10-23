/* sub_603EB318
 * address: 0x603EB318   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603EB318(int a1)
{
  sub_6077A260(dword_60CBFA90);
  sub_6077A348(dword_60CBFA90);
  StateMgr__changeState((StateMgr *)(a1 + 56), (StateBase *)&dword_60C99A68);
  FIELD_U32(a1, 32) = 0;
  return 0;
}
