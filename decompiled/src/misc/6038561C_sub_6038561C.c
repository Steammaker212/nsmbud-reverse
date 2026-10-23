/* sub_6038561C
 * address: 0x6038561C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6038561C(int a1)
{
  int v1; // r0
  _DWORD *v2; // r4

  v2 = (_DWORD *)(a1 + 6300);
  v1 = FIELD_U32(a1, 6300);
  if ( v1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 4))(v1);
  *v2 = 0;
  return 1;
}
