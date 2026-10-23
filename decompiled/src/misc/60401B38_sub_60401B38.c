/* sub_60401B38
 * address: 0x60401B38   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60401B38(_DWORD *a1)
{
  int v2; // r7
  _DWORD *v3; // r0

  *a1 = off_60BF9A28;
  if ( (_DWORD *)dword_60C99E64 == a1 )
  {
    dword_60C99E64 = 0;
    v2 = dword_60C99E68;
    sub_60402278(dword_60C99E68 + 89816);
    sub_604023AC(v2 + 16);
    dword_60C99E68 = 0;
  }
  v3 = sead__IDisposer__dtor(a1);
  operator_delete(v3);
}
