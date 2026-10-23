/* sub_60751BF0
 * address: 0x60751BF0   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60751BF0(int a1)
{
  int v2; // r0

  face_1_ref_78D328();
  if ( FIELD_U32(a1, 472) != 9 )
    Player_setupModelNodes_78E270(a1);
  v2 = FIELD_U32(a1, 908);
  if ( v2 )
    FIELD_U32(a1, 908) = v2 - 1;
  if ( (FIELD_U8(a1, 208) & 0x20) == 0 )
    FIELD_U8(a1, 904) = 0;
  return sub_60751C3C(a1);
}
