/* sub_6055D840
 * address: 0x6055D840   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6055D840(int a1)
{
  int *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1
  int v6; // r3
  int *v7; // r2

  v4 = FIELD_U32(a1, 13736);
  v2 = (int *)(a1 + 13736);
  v3 = v4;
  if ( v4 < 0 )
  {
    v5 = 10;
    while ( v5 >= 1 )
    {
      v6 = --v5;
      if ( (unsigned int)v5 >= 0xA )
        v6 = 0;
      if ( *(_DWORD *)(a1 + 12 * v6 + 13592) == 2 )
        goto LABEL_10;
    }
  }
  else if ( v3 > 9 || !*(_DWORD *)(a1 + 12 * v3 + 13592) )
  {
    v5 = 0;
LABEL_10:
    *v2 = v5;
  }
  if ( FIELD_U8(a1, 13752) )
    v7 = &dword_60CADD28;
  else
    v7 = &dword_60CADD30;
  sub_60473DE4((_DWORD *)(a1 + 44), 1u, v7, 0);
  sub_6055F98C(a1);
  FIELD_U8(a1, 13585) = 1;
  FIELD_U8(a1, 13749) = 1;
  return 13749;
}
