/* sub_605084AC
 * address: 0x605084AC   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605084AC(int a1)
{
  LabelFree_CourseNum_00_ref();
  return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&dword_60CA7B18);
}
