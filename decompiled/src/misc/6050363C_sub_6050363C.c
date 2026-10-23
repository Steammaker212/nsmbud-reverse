/* sub_6050363C
 * address: 0x6050363C   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6050363C(int a1)
{
  unsigned int v2; // r1
  int v4; // r1
  int v5; // r2

  v2 = FIELD_U32(a1, 716);
  if ( v2 == 99 )
    goto LABEL_5;
  if ( v2 >= 0x63 )
    v2 = 0;
  if ( (*(_DWORD *)(a1 + 4 * v2 + 744) | 2) == 2 )
  {
LABEL_5:
    FIELD_U8(a1, 728) = 0;
  }
  else
  {
    v4 = 0;
    FIELD_U8(a1, 731) = 0;
    while ( 1 )
    {
      v5 = a1 + 4 * v4;
      if ( FIELD_U32(v5, 744) <= 1u )
        FIELD_U32(v5, 744) = 0;
      if ( v4 == 98 )
        break;
      v4 += 2;
      if ( FIELD_U32(v5, 748) <= 1u )
        FIELD_U32(v5, 748) = 0;
    }
    FIELD_U8(a1, 741) = 0;
    sub_6047EB18((_DWORD *)(a1 + 40));
  }
  FIELD_U8(a1, 730) = 0;
  return 0;
}
