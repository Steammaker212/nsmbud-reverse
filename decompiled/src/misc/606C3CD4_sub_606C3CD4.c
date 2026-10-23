/* sub_606C3CD4
 * address: 0x606C3CD4   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_606C3CD4(int a1)
{
  unsigned int v2; // r0
  int v3; // r0

  if ( FIELD_U16(a1, 539) )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBAAF8);
  v2 = FIELD_U32(a1, 24);
  if ( (v2 & 0x80000) != 0 )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CBAAB8);
  if ( !((v2 >> 20) & 0xF | (v2 >> 8) & 0xF0) )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBAA98);
  v3 = a1 + 6228;
  if ( (FIELD_U8(a1, 22) & 8) != 0 )
    sub_606C4BFC(v3);
  else
    ((void (__fastcall *)(int))loc_606C4880)(v3);
  FIELD_U32(a1, 6336) = FIELD_U32(a1, 6296);
  FIELD_U32(a1, 6340) = FIELD_U32(a1, 6300);
  return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CBAAD8);
}
