/* sub_60916A94
 * address: 0x60916A94   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60916A94(int a1, int a2)
{
  unsigned int *v2; // lr
  unsigned int v3; // r2
  unsigned int v4; // r2
  int v5; // r1
  unsigned int *v6; // r0
  unsigned int v7; // r1

  v2 = *(unsigned int **)(a1 + 216);
  v3 = a2 - FIELD_U16(a1, 220);
  if ( FIELD_U32(a1, 212) > v3 )
    v2 += 3 * v3;
  do
    v4 = __ldrex(v2);
  while ( __strex(v4 - 1, v2) );
  v5 = 0;
  if ( v4 == 1 )
  {
    v6 = (unsigned int *)(a1 + 232);
    do
      v7 = __ldrex(v6);
    while ( __strex(v7 - 1, v6) );
    return 1;
  }
  return v5;
}
