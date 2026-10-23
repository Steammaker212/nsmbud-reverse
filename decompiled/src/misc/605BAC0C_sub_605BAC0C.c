/* sub_605BAC0C
 * address: 0x605BAC0C   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BAC0C(int a1)
{
  int result; // r0
  int v3; // [sp+4h] [bp-54h] BYREF
  _BYTE v4[80]; // [sp+8h] [bp-50h] BYREF

  result = sub_604092F8((unsigned __int8 *)dword_60C9A1F0, FIELD_U8(a1, 8173));
  if ( result == 1 )
  {
    sub_605BB950(a1 + 6100, 0);
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB0638);
    memset(v4, 0, 64);
    v3 = 0;
    result = sub_606BAB1C(v4, &v3, a1 + 7456);
    FIELD_U16(a1, 8170) = result;
  }
  return result;
}
