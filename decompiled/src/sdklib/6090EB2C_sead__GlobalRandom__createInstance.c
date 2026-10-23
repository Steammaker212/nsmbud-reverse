/* sead__GlobalRandom__createInstance
 * address: 0x6090EB2C   size: 120   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int *__fastcall sead__GlobalRandom__createInstance(_DWORD *a1)
{
  unsigned int *v2; // r4
  _DWORD *v3; // r0

  v2 = (unsigned int *)sead__GlobalRandom__sInstance;
  if ( !sead__GlobalRandom__sInstance )
  {
    v2 = (unsigned int *)operator_new_8DE2C8(0x20u, (int)a1, 4);
    v3 = sead__IDisposer__ctor(v2 + 4, a1, 3u);
    v2[4] = (unsigned int)off_60C5D26C;
    dword_60CCF4E0 = (int)v3;
    sead__Random__init(v2);
    sead__GlobalRandom__sInstance = (int)v2;
  }
  return v2;
}
