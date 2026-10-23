/* sub_6091FB58
 * address: 0x6091FB58   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6091FB58(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  void *v4; // r0

  *a1 = off_60C5D6C8;
  a1[4] = &off_60C5D6D8;
  v2 = a1[10];
  if ( v2 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
    a1[10] = 0;
  }
  v3 = a1[9];
  if ( v3 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
    a1[9] = 0;
  }
  v4 = (void *)a1[12];
  if ( v4 )
  {
    operator_delete_8DE3FC(v4);
    a1[11] = 0;
    a1[12] = 0;
  }
  return sead__IDisposer__dtor(a1);
}
