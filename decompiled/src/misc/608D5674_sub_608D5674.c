/* sub_608D5674
 * address: 0x608D5674   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D5674(int a1)
{
  int v1; // r0
  unsigned int v2; // r2
  unsigned int v3; // t1
  int v4; // r1

  v3 = FIELD_U32(a1, 4);
  v1 = a1 + 4;
  v2 = v3;
  LOBYTE(v4) = 64;
  if ( (v3 & 4) != 0 )
    return (unsigned __int8)*(_DWORD *)(v1 + 4 * ((v2 & 1) + ((v2 >> 1) & 1)) + 4);
  return (unsigned __int8)v4;
}
