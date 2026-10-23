/* sub_604E5224
 * address: 0x604E5224   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E5224(int a1)
{
  int result; // r0
  signed int v3; // r0
  int v4; // r3
  int v5; // r1

  sub_604E6A14();
  result = dword_60C99DE4;
  if ( !dword_60C99DE4 )
    return result;
  v3 = sub_603FC6A0(dword_60C99DE4);
  if ( FIELD_U8(a1, 564) )
  {
    v3 = FIELD_U16(a1, 566);
    goto LABEL_5;
  }
  if ( v3 >= 0 )
  {
LABEL_5:
    v4 = 999;
    if ( v3 < 999 )
      v4 = v3;
    goto LABEL_7;
  }
  v4 = 0;
LABEL_7:
  result = FIELD_U32(a1, 552);
  if ( result != v4 )
  {
    FIELD_U32(a1, 552) = v4;
    result = 62828;
    v5 = FIELD_U32(a1, 62828);
    if ( v5 )
      return sub_6047DEC8(*(_DWORD **)(a1 + 4), v5, 1);
  }
  return result;
}
