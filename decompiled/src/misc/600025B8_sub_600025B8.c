/* sub_600025B8
 * address: 0x600025B8   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_600025B8(int a1)
{
  int v1; // r1
  unsigned int v2; // r2
  int v3; // r1
  int v4; // r0

  v1 = FIELD_U32(a1, 620);
  if ( !v1 || (v2 = FIELD_U32(v1, 12) - 1, v3 = 1, v2 >= 2) )
  {
    v4 = FIELD_U32(a1, 624);
    if ( v4 )
      return (unsigned int)(FIELD_U32(v4, 24) - 1) < 2;
    return 0;
  }
  return v3;
}
