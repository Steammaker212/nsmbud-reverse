/* sub_602EBD78
 * address: 0x602EBD78   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_602EBD78(int a1)
{
  int v2; // r1
  unsigned int v3; // r0
  _DWORD *v4; // r0
  int v5; // r2

  v2 = 0;
  v3 = FIELD_U8(a1, 84);
  if ( v3 < 4 )
    v2 = (char)v3;
  v4 = *(_DWORD **)(PlayerMgr_instance + 4 * v2 + 32);
  if ( v4 )
    Player_ReleaseCarryableEnemy(v4, a1);
  FIELD_U8(a1, 538) &= 0xFCu;
  sub_6015907C((ActiveCollider *)(a1 + 188), 32);
  if ( FIELD_U8(a1, 6780) )
    FIELD_U32(a1, 6240) &= ~0x800u;
  ((void (__fastcall *)(int))loc_602EF368)(a1);
  FIELD_U32(a1, 3192) &= 0xBBFFF99F;
  FIELD_U32(a1, 3200) &= 0xBBFFFDFF;
  v5 = FIELD_U32(a1, 3184);
  FIELD_U32(a1, 3176) &= 0xBBFFFDFF;
  FIELD_U32(a1, 3184) = v5 & 0xBBFFFDFF;
  return v5 & 0xBBFFFDFF;
}
