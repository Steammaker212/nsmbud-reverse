/* sub_603FED88
 * address: 0x603FED88   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_603FED88(_DWORD *a1)
{
  int v2; // r7

  *a1 = off_60BF97E4;
  if ( (_DWORD *)dword_60C99E20 == a1 )
  {
    dword_60C99E20 = 0;
    v2 = dword_60C99E24;
    sub_604FC4A0(dword_60C99E24 + 120364);
    sub_604FC4A0(v2 + 80248);
    sub_604FC4A0(v2 + 40132);
    sub_604FC4A0(v2 + 16);
    dword_60C99E24 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
