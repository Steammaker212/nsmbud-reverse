/* sub_603EF988
 * address: 0x603EF988   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_603EF988(_DWORD *a1)
{
  int v2; // r7

  *a1 = off_60BF9314;
  if ( (_DWORD *)dword_60C99D68 == a1 )
  {
    dword_60C99D68 = 0;
    v2 = dword_60C99D6C;
    sub_604E1754(dword_60C99D6C + 28776);
    sub_604E1754(v2 + 23024);
    sub_604E1754(v2 + 17272);
    sub_604E1754(v2 + 11520);
    sub_604E1754(v2 + 5768);
    sub_604E1754(v2 + 16);
    dword_60C99D6C = 0;
  }
  return sead__IDisposer__dtor(a1);
}
