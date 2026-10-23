/* sub_608E5E1C
 * address: 0x608E5E1C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E5E1C(int a1, int a2)
{
  int v2; // r4
  int v3; // r1

  v2 = FIELD_U32(a1, 80);
  if ( !v2 )
    return 0;
  v3 = sub_608E78F8(a1, a2);
  return (*(int (__fastcall **)(int, int))(*(_DWORD *)v2 + 44))(v2, v3);
}
