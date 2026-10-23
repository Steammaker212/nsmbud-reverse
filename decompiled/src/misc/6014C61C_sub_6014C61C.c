/* sub_6014C61C
 * address: 0x6014C61C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6014C61C(int a1, int a2)
{
  int v3; // r3
  int result; // r0
  int v5; // r3

  v3 = FIELD_U32(a1, 2224) & 0x10400;
  result = 0x80000000;
  if ( v3 == 1024 )
  {
    v5 = FIELD_U32(a1, 2568);
    if ( v5 <= 5 )
      result = *(_DWORD *)(a1 + 56 * v5 + 3272);
  }
  if ( !a2 )
    return -result;
  return result;
}
