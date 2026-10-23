/* sub_6021962C
 * address: 0x6021962C   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6021962C(_DWORD *a1)
{
  int v2; // r6
  void *v3; // r0
  _DWORD *v4; // r0

  *a1 = off_60BD923C;
  if ( (_DWORD *)dword_60C8D404 == a1 )
  {
    dword_60C8D404 = 0;
    v2 = dword_60C8D408;
    v3 = *(void **)(dword_60C8D408 + 548);
    if ( v3 )
    {
      operator_delete(v3);
      FIELD_U32(v2, 548) = 0;
    }
    nullsub_113(v2 + 364);
    nullsub_111(v2 + 276);
    nullsub_113(v2 + 104);
    nullsub_111(v2 + 16);
    dword_60C8D408 = 0;
  }
  v4 = sead__IDisposer__dtor(a1);
  operator_delete(v4);
}
