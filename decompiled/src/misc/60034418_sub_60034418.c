/* sub_60034418
 * address: 0x60034418   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60034418(int a1, int a2, int a3)
{
  int v3; // r0
  bool v4; // zf

  v3 = FIELD_U32(a3, 64);
  v4 = v3 == 0;
  if ( v3 )
  {
    a2 = FIELD_U32(a2, 64);
    v4 = a2 == 0;
  }
  if ( !v4 )
    (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v3 + 1168))(v3, a2, 13);
  return 1;
}
