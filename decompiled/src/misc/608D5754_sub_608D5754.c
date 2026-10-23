/* sub_608D5754
 * address: 0x608D5754   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D5754(int a1)
{
  int v1; // r0
  unsigned int v2; // r1
  unsigned int v3; // t1
  __int16 v4; // r2

  v3 = FIELD_U32(a1, 4);
  v1 = a1 + 4;
  v2 = v3;
  LOBYTE(v4) = 0;
  if ( (v3 & 0x10) != 0 )
    return (unsigned __int8)*(_WORD *)(v1 + 4 * ((v2 & 1) + ((v2 >> 1) & 1) + ((v2 >> 2) & 1) + ((v2 >> 3) & 1)) + 6);
  return (unsigned __int8)v4;
}
