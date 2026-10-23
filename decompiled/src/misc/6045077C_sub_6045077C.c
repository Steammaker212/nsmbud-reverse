/* sub_6045077C
 * address: 0x6045077C   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6045077C(int a1)
{
  int i; // r6
  _DWORD *v3; // r5

  for ( i = 4; i != 16; ++i )
  {
    v3 = *(_DWORD **)(a1 + 4 * i);
    if ( v3 )
    {
      *v3 = off_60BFB08C;
      sub_609175E4(v3 + 506);
      sub_60917AE4(v3 + 486);
      sub_609175E4(v3 + 420);
      sub_60917AE4(v3 + 400);
      sub_609175E4(v3 + 334);
      sub_60917AE4(v3 + 314);
      v3[228] = off_60BFB0D8;
      sub_60913C18(v3 + 228);
      v3[221] = off_60BF97C4;
      sub_60913C18(v3 + 221);
      sub_60919C90(v3 + 168);
      sub_60921BD4(v3 + 84);
      sub_60922478(v3 + 16);
      operator_delete(v3);
      *(_DWORD *)(a1 + 4 * i) = 0;
    }
  }
  return a1;
}
