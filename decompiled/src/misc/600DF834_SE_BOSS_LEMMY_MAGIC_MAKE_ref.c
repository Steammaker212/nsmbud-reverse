/* SE_BOSS_LEMMY_MAGIC_MAKE_ref
 * address: 0x600DF834   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_LEMMY_MAGIC_MAKE_ref(int a1)
{
  int result; // r0

  KoopalingBase__vf5B0(a1);
  sub_6081356C(a1 + 6332, "SE_BOSS_LEMMY_MAGIC_MAKE", FIELD_S16(a1, 6640), 0);
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 && FIELD_F32(a1, 124) < 0.0 )
  {
    FIELD_U32(a1, 124) = 0;
    return 0;
  }
  return result;
}
