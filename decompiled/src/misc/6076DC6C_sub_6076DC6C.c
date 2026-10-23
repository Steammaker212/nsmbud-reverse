/* sub_6076DC6C
 * address: 0x6076DC6C   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076DC6C(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r1

  if ( a2 )
    v4 = sub_6077A518(dword_60CBFA90);
  else
    v4 = FIELD_U32(dword_60CBFA90, 72);
  if ( (FIELD_U8(dword_60CC6D78, 44) & 1) != 0 )
  {
    if ( v4 < 2 )
    {
      v5 = a1;
      v6 = 59;
      return sub_60773630(v5, v6, 0);
    }
    goto LABEL_10;
  }
  if ( a2 == 3 )
  {
    v5 = a1;
    v6 = 61;
    return sub_60773630(v5, v6, 0);
  }
  if ( v4 >= 2 )
  {
LABEL_10:
    v5 = a1;
    v6 = 58;
    return sub_60773630(v5, v6, 0);
  }
  if ( a2 )
  {
    v5 = a1;
    v6 = 60;
  }
  else
  {
    v5 = a1;
    if ( FIELD_U8(dword_60CBFA90, 216) )
      v6 = 57;
    else
      v6 = 56;
  }
  return sub_60773630(v5, v6, 0);
}
