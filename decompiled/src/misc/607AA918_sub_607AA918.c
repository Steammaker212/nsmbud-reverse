/* sub_607AA918
 * address: 0x607AA918   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607AA918(_DWORD *a1, int a2)
{
  int v3; // r0
  _DWORD *v4; // r2

  v3 = (*(int (__fastcall **)(_DWORD *, _DWORD))(*a1 + 156))(a1, a1[330]);
  v4 = &unk_60B0CDC0;
  if ( a2 )
    v4 = &unk_60B0CDCC;
  return v4[v3];
}
