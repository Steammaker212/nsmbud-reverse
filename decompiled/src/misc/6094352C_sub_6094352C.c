/* sub_6094352C
 * address: 0x6094352C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6094352C(int a1)
{
  unsigned int v1; // r0

  v1 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 28))(a1) - 1;
  if ( v1 <= 0xF )
    return (0x803Du >> v1) & 1;
  else
    return 0;
}
