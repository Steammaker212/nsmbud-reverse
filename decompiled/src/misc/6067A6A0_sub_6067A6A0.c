/* sub_6067A6A0
 * address: 0x6067A6A0   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6067A6A0(int a1)
{
  int v2; // r5
  StateMethodExecuter *result; // r0
  int v4; // [sp+4h] [bp-1Ch] BYREF
  int v5; // [sp+8h] [bp-18h] BYREF
  int v6; // [sp+Ch] [bp-14h] BYREF

  v6 = 0;
  v5 = 0;
  v4 = 0;
  v2 = sub_605BFAE0(a1 + 6104, &v6, &v5, &v4, FIELD_F32(a1, 108));
  result = (StateMethodExecuter *)sub_606A7EB8(a1 + 7216, v5, v4);
  if ( v2 == 2 )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB7E78);
  return result;
}
