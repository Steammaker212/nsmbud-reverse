/* sub_6010C95C
 * address: 0x6010C95C   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6010C95C(_DWORD *a1)
{
  int v2; // r0

  sub_60421AE4(a1[1774], a1[1780] + 8, 0);
  (*(void (__fastcall **)(_DWORD *))(*a1 + 1316))(a1);
  if ( FIELD_U8(dword_60C9A1F0, 6559) == 1 )
  {
    v2 = FIELD_U32(EnemyCounterMaybe_instance, 24);
    if ( v2 )
      FIELD_U8(v2, 6136) = 1;
    SE_BOSS_ROY_LIFT_APPEAR_ref((int)a1);
    sub_6010C51C();
  }
}
