/* sub_608729E4
 * address: 0x608729E4   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608729E4(int a1, int a2)
{
  int v2; // lr
  int v3; // r2
  int v4; // r12
  unsigned __int16 *v5; // r3
  int v6; // r2
  int result; // r0
  int v8; // t1

  v2 = FIELD_U16(a1, 76);
  v3 = FIELD_U32(a1, 24) + 96 * a2;
  v4 = FIELD_U16(v3, 42);
  v5 = (unsigned __int16 *)(v3 + 138);
  v6 = a2 + 1;
  if ( !a2 )
    v4 = -1;
  do
  {
    result = v6;
    if ( v6 >= v2 )
      break;
    v8 = *v5;
    v5 += 48;
    ++v6;
  }
  while ( v8 > v4 );
  return result;
}
