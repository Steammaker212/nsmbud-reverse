/* sub_6079321C
 * address: 0x6079321C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6079321C(int a1)
{
  int v1; // r0
  unsigned int v2; // r1
  int v3; // r0

  v1 = FIELD_U32(a1, 24);
  v2 = FIELD_U32(v1, 8);
  v3 = FIELD_U32(v1, 12);
  if ( v2 > 1 )
    v3 += 4;
  return *(float *)(*(_DWORD *)v3 + 24);
}
