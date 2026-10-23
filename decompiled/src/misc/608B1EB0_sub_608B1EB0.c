/* sub_608B1EB0
 * address: 0x608B1EB0   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B1EB0(int a1)
{
  int v1; // r0
  int v2; // r12
  int v3; // t1
  int v4; // r1
  int v5; // r2
  unsigned __int8 v6; // r3
  int v7; // r1

  v3 = FIELD_U32(a1, 20);
  v1 = a1 + 20;
  v2 = v3;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  do
  {
    if ( (v2 & (1 << v4)) != 0 )
    {
      ++v5;
      v6 |= v4 == 17;
    }
    ++v4;
  }
  while ( v4 != 18 );
  v7 = 0;
  if ( v5 && ((v6 ^ 1) & 1) == 0 )
    return *(_BYTE *)(v1 + 4 * v5) & 1;
  return v7;
}
