/* sub_602BAA18
 * address: 0x602BAA18   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602BAA18(int a1)
{
  char *v2; // r5
  char v3; // r6
  int v5; // [sp+0h] [bp-20h] BYREF
  Vec3 v6[2]; // [sp+4h] [bp-1Ch] BYREF

  StateMgr__execute((StateMgr *)(a1 + 6084));
  ActorScaler_execute((ActorScaler *)(a1 + 6628));
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 624))(a1);
  sub_602A33AC((_BYTE *)a1);
  if ( sub_60235E50(a1 + 6564) == 1 )
    EffectData_update((EffectData *)(a1 + 6564), (Vec3 *)(a1 + 6312), 0, 0);
  if ( sub_60235E50(a1 + 6436) == 1 )
  {
    v6[0].x = 0.5;
    v6[0].y = 0.5;
    v6[0].z = 0.5;
    EffectData_update((EffectData *)(a1 + 6436), (Vec3 *)(a1 + 6324), 0, v6);
  }
  if ( sub_60235E50(a1 + 6500) == 1 )
  {
    v6[0].x = 0.5;
    v6[0].y = 0.5;
    v6[0].z = 0.5;
    EffectData_update((EffectData *)(a1 + 6500), (Vec3 *)(a1 + 6336), 0, v6);
  }
  ((void (__fastcall *)(int *, Vec3 *, int, _DWORD))checkLiquidCollisions)(
    &v5,
    v6,
    a1 + 108,
    FIELD_U8(a1, 86));
  v2 = (char *)(a1 + 6361);
  if ( v5 )
  {
    v3 = 1;
    if ( !*v2 )
      sub_602BAB5C(a1, v6[0].x);
  }
  else
  {
    v3 = 0;
  }
  *v2 = v3;
  return 1;
}
