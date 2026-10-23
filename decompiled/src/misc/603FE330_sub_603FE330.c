/* sub_603FE330
 * address: 0x603FE330   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_603FE330(_DWORD *a1)
{
  int v2; // r5
  int v3; // r0

  *a1 = off_60BF97B4;
  if ( (_DWORD *)dword_60C99E18 == a1 )
  {
    v2 = -238896;
    dword_60C99E18 = 0;
    v3 = dword_60C99E1C + 234704;
    do
    {
      v3 = sub_603FEBBC(v3) - 4424;
      v2 += 4424;
    }
    while ( v2 );
    dword_60C99E1C = 0;
  }
  return sead__IDisposer__dtor(a1);
}
