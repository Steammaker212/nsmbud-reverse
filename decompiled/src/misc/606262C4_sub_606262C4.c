/* sub_606262C4
 * address: 0x606262C4   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606262C4(int a1)
{
  sandpillar_ref(a1, FIELD_U32(a1, 20));
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB3B34);
  return 1;
}
