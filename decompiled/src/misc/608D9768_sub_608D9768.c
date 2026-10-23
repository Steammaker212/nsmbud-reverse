/* sub_608D9768
 * address: 0x608D9768   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D9768(int a1, unsigned int a2)
{
  int v3; // r0
  int v4; // r2
  unsigned int v5; // t1
  int result; // r0
  int v7; // r1

  v3 = FIELD_U32(a1, 12);
  v5 = *(_DWORD *)(a1 + v3);
  v4 = a1 + v3;
  result = 0;
  if ( v5 > a2 )
  {
    v7 = v4 + 8 * a2;
    if ( FIELD_U16(v7, 4) == 18688 )
      return v4 + FIELD_U32(v7, 8);
  }
  return result;
}
