/* sub_60400CEC
 * address: 0x60400CEC   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60400CEC(int a1)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r0

  v2 = (_DWORD *)dword_60C99E44;
  if ( !dword_60C99E44 )
  {
    v2 = (_DWORD *)operator_new_8DE2C8(0x48u, a1, 4);
    v3 = sead__IDisposer__ctor(v2 + 1, a1, 3u);
    v2[1] = off_60BF9974;
    dword_60C99E40 = (int)v3;
    *v2 = &off_60BF9984;
    memset(v2 + 5, 0, 52);
    dword_60C99E44 = (int)v2;
  }
  return v2;
}
