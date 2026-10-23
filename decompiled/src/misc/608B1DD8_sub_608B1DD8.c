/* sub_608B1DD8
 * address: 0x608B1DD8   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B1DD8(int a1)
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
      v6 |= v4 == 31;
    }
    ++v4;
  }
  while ( v4 != 32 );
  v7 = -1;
  if ( v5 && ((v6 ^ 1) & 1) == 0 )
    return *(_DWORD *)(v1 + 4 * v5);
  return v7;
}
