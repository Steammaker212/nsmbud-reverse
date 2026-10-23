/* sub_60768F28
 * address: 0x60768F28   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60768F28(int a1, int a2, int a3)
{
  int result; // r0
  unsigned int v7; // r1

  result = FIELD_U8(a1, 1234);
  if ( (result & 0x10) != 0 )
  {
    FIELD_U32(a1, 9708) = 2;
    Player_changeState(a1, &stru_60CBFA5C, 0);
    PlayerBase_dispatchVirtual3(FIELD_U32(a1, 648), a2);
    result = FIELD_U32(a1, 1232);
    v7 = result & 0xF7FFFFFF;
    if ( a3 )
      v7 = result | 0x8000000;
    FIELD_U32(a1, 1232) = v7;
  }
  return result;
}
