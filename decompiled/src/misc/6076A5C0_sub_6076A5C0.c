/* sub_6076A5C0
 * address: 0x6076A5C0   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076A5C0(int a1, int a2, int a3)
{
  int v5; // r1
  int result; // r0
  int v7; // r1

  v5 = sub_60769C48(a1, a2);
  result = 0;
  if ( v5 == 1 )
  {
    v7 = FIELD_U32(a1, 9856);
    if ( v7 == 2 )
    {
      Player_changeState(a1, (StateBase *)&dword_60CBF7F8, 0);
    }
    else
    {
      if ( v7 != 1 )
        return result;
      sub_607292EC(dword_60CBD8A4, FIELD_U8(LevelInfo_instance, 18), FIELD_U8(a1, 9724));
      Player_changeState(a1, (StateBase *)&dword_60CBF7F8, 0);
    }
    sub_60766314(a1, (StateBase *)*(&off_60C247F4 + a3), 0);
    return 1;
  }
  return result;
}
