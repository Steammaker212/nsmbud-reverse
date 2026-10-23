/* PlayerBase_vf11
 * address: 0x6075ED80   size: 48   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall PlayerBase_vf11(int a1)
{
  int v1; // r2
  int v2; // r1

  v1 = FIELD_U32(a1, 1216);
  v2 = FIELD_U32(a1, 1224);
  if ( (v1 & 0x10000000) != 0 )
  {
    v2 &= ~0x100000u;
    FIELD_U32(a1, 1224) = v2;
    FIELD_U32(a1, 1216) = v1 & 0xEFFFFFFF;
  }
  if ( (v2 & 0x100000) != 0 )
    return 0;
  else
    return StageActor__befreDraw((Actor *)a1);
}
