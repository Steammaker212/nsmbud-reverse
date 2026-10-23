/* sub_60971A3C
 * address: 0x60971A3C   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60971A3C(int a1, int a2, char *a3)
{
  unsigned int *v6; // r5
  unsigned int v7; // r0
  int v9; // r4
  int v10; // r7
  int v11; // r5

  if ( *(_DWORD *)a3 == -1 )
    return 0;
  v6 = (unsigned int *)(a1 + 272);
  do
    v7 = __ldrex(v6);
  while ( __strex(0x80000000, v6) );
  if ( v7 )
  {
    if ( v7 == 0x80000000 )
    {
      while ( *v6 == 0x80000000 )
        sub_609085CC();
    }
    else
    {
      if ( FIELD_U16(a1, 34) == 8 )
        dword_60CC7540(a1 + 288, 4);
      dword_60CC752C(a1 + 288, FIELD_U8(a1, 278), 1);
      dword_60CC7530(a1 + 288, FIELD_U16(a1, 276), 0);
      sub_60920CA8(a1, a1 + 288);
      sub_60917A78(a1 + 64);
      sub_60917C30((__int64 *)(a1 + 280));
    }
  }
  FIELD_U32(a1, 272) = 0;
  v9 = FIELD_U32(a1, 280);
  v10 = FIELD_U32(a1, 284);
  v11 = dword_60CCFC8C;
  sub_60917A78(a1 + 64);
  sub_609172E0(v11, a2, v9, v10, a3, FIELD_U32(a1, 256));
  return 1;
}
