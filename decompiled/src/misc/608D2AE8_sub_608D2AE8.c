/* sub_608D2AE8
 * address: 0x608D2AE8   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D2AE8(int a1, const void *a2)
{
  int *v2; // r4
  int result; // r0
  int v4; // r1

  v2 = (int *)(a1 + 127756);
  qmemcpy((void *)(a1 + 3992 * FIELD_U32(a1, 127756) + 8), a2, 0xF98u);
  result = *v2;
  v4 = *v2 + 1;
  if ( *v2 > 30 )
    v4 = 0;
  *v2 = v4;
  return result;
}
