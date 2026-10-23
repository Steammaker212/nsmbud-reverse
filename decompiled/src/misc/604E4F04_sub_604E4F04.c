/* sub_604E4F04
 * address: 0x604E4F04   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E4F04(int a1, int a2, int a3)
{
  int result; // r0
  signed int v5; // r0
  int v6; // r3
  int v7; // r1

  if ( dword_60C99DE4 )
    sub_603FC6B4(dword_60C99DE4, FIELD_U16(dword_60C99DE4, 30), a3);
  sub_604E7E14(a1);
  result = dword_60C99DE4;
  if ( dword_60C99DE4 )
  {
    v5 = sub_603FC6A0(dword_60C99DE4);
    if ( FIELD_U8(a1, 564) )
    {
      v5 = FIELD_U16(a1, 566);
    }
    else if ( v5 < 0 )
    {
      v6 = 0;
LABEL_9:
      result = FIELD_U32(a1, 552);
      if ( result != v6 )
      {
        FIELD_U32(a1, 552) = v6;
        result = 62828;
        v7 = FIELD_U32(a1, 62828);
        if ( v7 )
          return sub_6047DEC8(*(_DWORD **)(a1 + 4), v7, 1);
      }
      return result;
    }
    v6 = 999;
    if ( v5 < 999 )
      v6 = v5;
    goto LABEL_9;
  }
  return result;
}
