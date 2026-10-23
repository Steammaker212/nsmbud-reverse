/* sub_60916A58
 * address: 0x60916A58   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60916A58(int a1, int a2)
{
  unsigned int v2; // r2
  unsigned int *v3; // r1
  unsigned int v4; // r0

  v2 = a2 - FIELD_U16(a1, 220);
  v3 = *(unsigned int **)(a1 + 216);
  if ( FIELD_U32(a1, 212) > v2 )
    v3 += 3 * v2;
  do
    v4 = __ldrex(v3);
  while ( __strex(v4 + 1, v3) );
  return v4 != 0;
}
