/* sub_6076F8CC
 * address: 0x6076F8CC   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076F8CC(int a1)
{
  int v3; // r1

  if ( !sub_60786744(a1 + 688) && (FIELD_U8(a1, 6900) & 1) == 0 )
    return Player_changeState(a1, (StateBase *)&dword_60CBF864, 1);
  FIELD_U32(a1, 9944) = 20;
  FIELD_U32(a1, 9940) = 4;
  PlayerBase_dispatchVirtual3(FIELD_U32(a1, 648), 18);
  v3 = FIELD_U32(a1, 1224);
  FIELD_U32(a1, 1208) = FIELD_U32(a1, 1208) & 0xFFFAFFFF | 0x40000;
  FIELD_U32(a1, 1224) = v3 | 0x420;
  FIELD_U32(a1, 100) = *(_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1100))(a1);
  FIELD_U32(a1, 96) = -1061158912;
  FIELD_U32(a1, 124) = 0;
  return 0;
}
