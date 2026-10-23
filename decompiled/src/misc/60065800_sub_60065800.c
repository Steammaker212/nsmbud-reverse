/* sub_60065800
 * address: 0x60065800   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60065800(int a1)
{
  obj_peach_question_ref(a1);
  FIELD_U32(a1, 144) = 1092616192;
  FIELD_U32(a1, 148) = 1092616192;
  FIELD_U32(a1, 152) = 1092616192;
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 164) = 0;
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C81134);
  sub_60065A78(a1);
  return 1;
}
