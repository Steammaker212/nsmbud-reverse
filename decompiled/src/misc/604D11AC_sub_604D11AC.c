/* sub_604D11AC
 * address: 0x604D11AC   size: 656   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D11AC(int a1)
{
  int v2; // r6
  int v3; // r0
  int v4; // r7
  int v5; // r5

  if ( FIELD_U8(dword_60C99DEC, 530) )
  {
    v2 = 12;
    FIELD_U32(a1, 52620) = 12;
    v3 = 11;
    if ( FIELD_U8(a1, 56) )
      goto LABEL_14;
    v3 = 10;
    if ( FIELD_U8(a1, 55) )
      goto LABEL_14;
    v3 = 9;
    if ( FIELD_U8(a1, 54) )
      goto LABEL_14;
    v3 = 8;
    if ( FIELD_U8(a1, 53) )
      goto LABEL_14;
    v3 = 7;
    if ( FIELD_U8(a1, 52)
      || (v3 = 6, FIELD_U8(a1, 51))
      || (v3 = 5, FIELD_U8(a1, 50))
      || (v3 = 4, FIELD_U8(a1, 49))
      || (v3 = 3, FIELD_U8(a1, 48))
      || (v3 = 2, FIELD_U8(a1, 47))
      || (v3 = 1, FIELD_U8(a1, 46))
      || (v3 = 0, FIELD_U8(a1, 45)) )
    {
LABEL_14:
      FIELD_U32(a1, 52624) = v3;
    }
  }
  else
  {
    v4 = FIELD_U8(dword_60C99DEC, 529);
    v2 = 0;
    v5 = dword_60C99E44;
    if ( sub_6040137C(dword_60C99E44, FIELD_U32(a1, 40), 0) == v4 )
      goto LABEL_27;
    v2 = 1;
    if ( sub_6040137C(v5, FIELD_U32(a1, 40), 1) == v4 )
      goto LABEL_27;
    v2 = 2;
    if ( sub_6040137C(v5, FIELD_U32(a1, 40), 2) == v4 )
      goto LABEL_27;
    v2 = 3;
    if ( sub_6040137C(v5, FIELD_U32(a1, 40), 3) == v4 )
      goto LABEL_27;
    v2 = 4;
    if ( sub_6040137C(v5, FIELD_U32(a1, 40), 4) == v4
      || (v2 = 5, sub_6040137C(v5, FIELD_U32(a1, 40), 5) == v4)
      || (v2 = 6, sub_6040137C(v5, FIELD_U32(a1, 40), 6) == v4)
      || (v2 = 7, sub_6040137C(v5, FIELD_U32(a1, 40), 7) == v4)
      || (v2 = 8, sub_6040137C(v5, FIELD_U32(a1, 40), 8) == v4)
      || (v2 = 9, sub_6040137C(v5, FIELD_U32(a1, 40), 9) == v4)
      || (v2 = 10, sub_6040137C(v5, FIELD_U32(a1, 40), 10) == v4)
      || (v2 = 11, sub_6040137C(v5, FIELD_U32(a1, 40), 11) == v4) )
    {
LABEL_27:
      FIELD_U32(a1, 52620) = v2;
      FIELD_U32(a1, 52624) = v2;
    }
    else
    {
      v2 = FIELD_U32(a1, 52620);
    }
  }
  FIELD_U32(a1, 4928) = v2;
  return v2;
}
