/* sub_604D4B28
 * address: 0x604D4B28   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D4B28(int a1)
{
  int result; // r0
  StateBase *v3; // r1
  int v4; // [sp+4h] [bp-Ch]

  result = FIELD_U8(a1, 4943);
  if ( result )
  {
    v4 = FIELD_U32(a1, 4928);
    if ( v4 == 12 )
    {
      FIELD_U32(a1, 52620) = 12;
      v3 = (StateBase *)&unk_60CA3E58;
    }
    else
    {
      FIELD_U32(a1, 52620) = v4;
      v3 = (StateBase *)&unk_60CA3EB8;
    }
    StateMgr__changeState((StateMgr *)(a1 + 20), v3);
    return sub_604D1A84(FIELD_U32(a1, 52608));
  }
  return result;
}
