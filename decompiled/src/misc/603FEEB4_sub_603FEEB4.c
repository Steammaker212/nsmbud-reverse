/* sub_603FEEB4
 * address: 0x603FEEB4   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_603FEEB4(int a1)
{
  _DWORD *v2; // r4

  v2 = (_DWORD *)dword_60C99E24;
  if ( !dword_60C99E24 )
  {
    v2 = (_DWORD *)operator_new_8DE2C8(0x272E4u, a1, 4);
    sead__IDisposer__ctor(v2, a1, 3u);
    *v2 = off_60BF97E4;
    dword_60C99E20 = (int)v2;
    sub_604FC2B4(v2 + 4);
    sub_604FC2B4(v2 + 10033);
    sub_604FC2B4(v2 + 20062);
    sub_604FC2B4(v2 + 30091);
    v2[40120] = 0;
    dword_60C99E24 = (int)v2;
  }
  return v2;
}
