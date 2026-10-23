/* sub_60232E8C
 * address: 0x60232E8C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60232E8C(int a1)
{
  int v1; // r0
  unsigned int v2; // r1
  _DWORD *v3; // r0

  v1 = FIELD_U32(a1, 420);
  v2 = FIELD_U32(v1, 24);
  v3 = *(_DWORD **)(v1 + 28);
  if ( v2 > 1 )
    ++v3;
  return *v3 + 4;
}
