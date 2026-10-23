/* sub_6084A0C8
 * address: 0x6084A0C8   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6084A0C8(int a1, int a2, int *a3)
{
  int v3; // r1
  int v4; // r3
  int v5; // r12

  v3 = 0;
  if ( FIELD_S32(a1, 112) <= 0 )
  {
    v4 = a3[2];
    if ( v4 >= 1 )
    {
      v5 = *a3;
      if ( *a3 )
      {
        FIELD_U32(a1, 112) = v4;
        FIELD_U32(a1, 116) = 0;
        FIELD_U32(a1, 120) = v5;
        FIELD_U32(a1, 124) = v5 + 48 * a3[2];
        FIELD_U8(a1, 132) = *((_BYTE *)a3 + 12);
        FIELD_U8(a1, 133) = *((_BYTE *)a3 + 13);
        FIELD_U8(a1, 134) = *((_BYTE *)a3 + 14);
        FIELD_U8(a1, 135) = *((_BYTE *)a3 + 15);
        FIELD_U32(a1, 128) = a3[1];
        return 1;
      }
    }
  }
  return v3;
}
