/* Level_createInstance
 * address: 0x607272B8   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Level_createInstance(int a1)
{
  _DWORD *v2; // r4

  v2 = (_DWORD *)Level_instance;
  if ( !Level_instance )
  {
    v2 = (_DWORD *)operator_new_8DE2C8(0xEF0u, a1, 4);
    sead__IDisposer__ctor(v2, a1, 3u);
    *v2 = Level_vtable;
    dword_60CBD898 = (int)v2;
    memset(v2 + 4, 0, 0xEE0);
    Level_instance = (int)v2;
  }
  return v2;
}
