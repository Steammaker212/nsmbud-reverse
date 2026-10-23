/* sub_6074A02C
 * address: 0x6074A02C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6074A02C(int a1)
{
  StateMethodExecuter *result; // r0
  int a5; // [sp+0h] [bp-10h] BYREF
  int target; // [sp+4h] [bp-Ch] BYREF

  target = 0;
  a5 = 0x10000000;
  moveValueTo((int *)(a1 + 160), &target, &a5);
  result = (StateMethodExecuter *)sub_605EB988(**(_DWORD **)(*(_DWORD *)(FIELD_U32(a1, 644) + 12) + 12));
  if ( result == (StateMethodExecuter *)1 )
    return StateMgr__changeState((StateMgr *)(a1 + 712), &stru_60CBE864);
  return result;
}
