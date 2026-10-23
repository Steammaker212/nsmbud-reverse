/* sub_6066C958
 * address: 0x6066C958   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6066C958(int a1)
{
  unsigned __int8 *v2; // r5
  StateMethodExecuter *result; // r0
  signed int v4[3]; // [sp+4h] [bp-2Ch] BYREF
  _BYTE v5[12]; // [sp+10h] [bp-20h] BYREF
  signed int v6; // [sp+1Ch] [bp-14h] BYREF

  v2 = (unsigned __int8 *)(a1 + 6104);
  result = (StateMethodExecuter *)sub_606D4384(v4, FIELD_U8(a1, 6104));
  if ( result )
  {
    sub_606D45B8(a1 + 6108, a1 + 6116);
    sub_606D4384(&v6, *v2);
    v4[1] = 0;
    v4[2] = 0;
    sub_606D465C(v5, a1 + 6112);
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB6F00);
  }
  return result;
}
