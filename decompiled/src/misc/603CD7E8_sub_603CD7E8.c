/* sub_603CD7E8
 * address: 0x603CD7E8   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603CD7E8(int a1)
{
  int result; // r0
  int v3; // r1
  int v4; // t1
  bool v5; // zf

  v4 = FIELD_U16(a1, 6100);
  result = a1 + 6100;
  v3 = v4;
  v5 = v4 == 0;
  if ( v4 )
  {
    *(_WORD *)result = --v3;
    result = 0xFFFF;
    v5 = (unsigned __int16)v3 == 0;
  }
  if ( v5 )
  {
    sub_603CD8AC(result, v3);
    return (int)StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C98B38);
  }
  return result;
}
