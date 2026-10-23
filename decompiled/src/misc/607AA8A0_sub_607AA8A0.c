/* sub_607AA8A0
 * address: 0x607AA8A0   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607AA8A0(_DWORD *a1, int a2)
{
  int v3; // r0
  _DWORD *v4; // r2

  v3 = (*(int (__fastcall **)(_DWORD *, _DWORD))(*a1 + 156))(a1, a1[330]);
  v4 = &unk_60B0CD90;
  if ( a2 )
    v4 = &unk_60B0CD9C;
  return v4[v3];
}
