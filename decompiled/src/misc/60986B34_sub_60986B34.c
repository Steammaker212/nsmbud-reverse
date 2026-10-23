/* sub_60986B34
 * address: 0x60986B34   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60986B34(int a1, unsigned int a2)
{
  unsigned int v2; // r2
  int v3; // r0

  v2 = FIELD_U32(a1, 32);
  v3 = FIELD_U32(a1, 36);
  if ( v2 > a2 )
    v3 += 4 * a2;
  return *(_DWORD *)v3;
}
