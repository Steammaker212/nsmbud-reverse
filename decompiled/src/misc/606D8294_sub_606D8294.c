/* sub_606D8294
 * address: 0x606D8294   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D8294(int a1)
{
  int *v2; // r5
  int v3; // r0
  unsigned int v4; // r1
  int *v5; // r2
  int v6; // r1
  int v7; // r1

  v2 = (int *)(a1 + 6104);
  MovementHandler__execute((MovementHandler *)(a1 + 6104));
  if ( FIELD_U32(a1, 6152) == 1 && FIELD_U32(a1, 6172) != 1 )
  {
    v3 = *v2;
    FIELD_U32(a1, 108) = *v2;
    FIELD_U32(a1, 112) = FIELD_U32(a1, 6108);
    v5 = (int *)(a1 + 12756);
    v4 = FIELD_U32(a1, 12756);
    if ( v4 >= 0x320 )
      v4 = 0;
    v6 = a1 + 8 * v4;
    FIELD_U32(v6, 6352) = v3;
    FIELD_U32(v6, 6356) = FIELD_U32(a1, 112);
    v7 = -1;
    if ( *v5 < 1 )
      v7 = 799;
    *v5 += v7;
  }
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
