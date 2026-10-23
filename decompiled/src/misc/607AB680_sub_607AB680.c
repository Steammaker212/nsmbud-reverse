/* sub_607AB680
 * address: 0x607AB680   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607AB680(int a1)
{
  _BOOL4 v2; // r1
  int result; // r0
  bool v4; // zf
  int v5; // r7
  int v6; // r5

  v2 = sub_6075EE0C(a1);
  result = 0;
  v4 = v2;
  if ( v2 )
    v4 = FIELD_U32(a1, 1320) == 9;
  if ( v4 )
  {
    FIELD_U8(a1, 15076) = 0;
    sub_607B9488(a1);
    v5 = FIELD_U32(a1, 156);
    FIELD_U8(a1, 15077) = 1;
    Player_changeState(a1, (StateBase *)&dword_60CC50CC, 0);
    v6 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 9928) + 8))(FIELD_U32(a1, 9928));
    if ( v6 == (*(int (**)(void))(dword_60CC50EC + 8))() )
      FIELD_U32(a1, 156) = v5;
    FIELD_U32(a1, 1236) |= 0x10u;
    ((void (__fastcall *)(int, int, _DWORD))loc_60814A1C)(a1 + 840, 79, 0);
    return 1;
  }
  return result;
}
