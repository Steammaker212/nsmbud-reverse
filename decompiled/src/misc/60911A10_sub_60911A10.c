/* sub_60911A10
 * address: 0x60911A10   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60911A10(int a1, int *a2, unsigned int a3)
{
  int v5; // r6
  _BYTE *v7; // r0

  if ( a2[2] < 256 )
  {
    v7 = (_BYTE *)a2[1];
  }
  else
  {
    if ( FIELD_U32(a1, 8) > a3 )
    {
      v5 = FIELD_U32(a1, 4);
      (*(void (__fastcall **)(int *))(*a2 + 12))(a2);
      sub_6091187C(v5, a3, a2[1]);
      return 1;
    }
    v7 = (_BYTE *)a2[1];
  }
  *v7 = 0;
  return 0;
}
