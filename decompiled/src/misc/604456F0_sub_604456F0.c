/* sub_604456F0
 * address: 0x604456F0   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604456F0(int a1, int a2)
{
  int v2; // r2
  int v3; // r12
  int result; // r0
  int v5; // r3

  v2 = FIELD_U32(a1, 896);
  if ( !v2 )
    return -1;
  v3 = FIELD_U32(a1, 900);
  result = 0;
  while ( 1 )
  {
    v5 = *(_DWORD *)(v3 + (result << 7));
    if ( !v5 )
      break;
    if ( v5 == a2 )
      return result;
    if ( v2 == ++result )
      return -1;
  }
  *(_DWORD *)(v3 + (result << 7)) = a2;
  return result;
}
