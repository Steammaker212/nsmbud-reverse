/* sub_604794C0
 * address: 0x604794C0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_604794C0(_DWORD *a1)
{
  int v2; // r6
  _DWORD *v3; // r5

  *a1 = off_60BFD104;
  v2 = a1[1];
  if ( v2 )
  {
    v3 = (_DWORD *)(a1[2] + 272);
    do
    {
      if ( *v3 )
        sub_60913ABC(v3);
      v3 += 208;
      --v2;
    }
    while ( v2 );
  }
  sub_60475AE8(a1 + 3);
  return a1;
}
