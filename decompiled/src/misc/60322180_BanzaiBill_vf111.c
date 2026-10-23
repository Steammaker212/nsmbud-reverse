/* BanzaiBill_vf111
 * address: 0x60322180   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BanzaiBill_vf111(Enemy *a1)
{
  int y; // r5
  int v3; // r0

  y = FIELD_U32(a1, 0xA0);
  (*(void (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0) + 72))(a1);
  Enemy__beginState_DieFumi(a1);
  if ( a1[1]._._._._.profile == (Profile *)1 && a1[1]._._._._.id == 1 )
  {
    v3 = **(_DWORD **)((*(int (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0) + 636))(a1) + 20);
    FIELD_U32(v3, 20) = 0;
    FIELD_U32(v3, 28) |= 2u;
  }
  FIELD_U32(a1, 0xA0) = y;
  LOBYTE(a1[2]._._._.aCollider.field_E4) = 1;
  return 13016;
}
