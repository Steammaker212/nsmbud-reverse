/* IceBro_vf80
 * address: 0x602F1D08   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall IceBro_vf80(Enemy *a1, int a2, int a3)
{
  Actor *v6; // r5
  char v7; // r12
  int v8; // r7

  v6 = *(Actor **)(a3 + 64);
  if ( Actor__getProfileId(v6) != 765 )
    return Enemy__collisionIceball(a1, a2, a3);
  if ( ((unsigned int)&dword_60C87EBC & ~(1613700424 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C87EBC) )
  {
    dword_60C87EB8 = (int)&off_60BC7C30;
    _cxa_guard_release(&dword_60C87EBC);
  }
  v8 = (int)&v6[84].field_10;
  if ( !(*(int (__fastcall **)(Actor *, int *))FIELD_U32(v6, 0x0))(v6, &dword_60C87EB8) )
    v8 = 6736;
  if ( FIELD_U32(a1, 0x8) == *(_DWORD *)v8 )
    return 1;
  else
    return Enemy__collisionIceball(a1, a2, a3);
}
