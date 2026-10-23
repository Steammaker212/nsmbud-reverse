/* sub_604005D0
 * address: 0x604005D0   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604005D0(int result, char a2, int a3, char a4, int a5, int a6)
{
  int v9; // r4
  _DWORD *v10; // r0
  int v11; // r3
  int v12; // r5
  int v13; // r6
  int v14; // r7

  v9 = result;
  if ( (a4 & 2) != 0 )
    result = AreaRumbleMgr_rumbleForPlayer(result, a2, a3, a5, a6);
  if ( (a4 & 1) != 0 )
  {
    v10 = *(&off_60BF98B4 + a3);
    v11 = v10[1];
    v12 = v10[2];
    v13 = v10[3];
    v14 = v10[4];
    FIELD_U32(v9, 16) = *v10;
    FIELD_U32(v9, 20) = v11;
    FIELD_U32(v9, 24) = v12;
    FIELD_U32(v9, 28) = v13;
    FIELD_U32(v9, 32) = v14;
    FIELD_F32(v9, 20) = FIELD_F32(v9, 20) + FIELD_F32(v9, 20);
    FIELD_U8(v9, 65) = a2;
    FIELD_U32(v9, 56) |= a5;
    result = 1;
    FIELD_U8(v9, 64) = 1;
  }
  if ( (a5 & 2) != 0 )
  {
    FIELD_U32(EnemyCounterMaybe_instance, 240) = 0;
    result = 4;
    FIELD_U32(v9, 68) = 4;
  }
  if ( (a5 & 4) != 0 )
  {
    FIELD_U32(EnemyCounterMaybe_instance, 240) = 0;
    FIELD_U32(v9, 72) = 4;
    return 4;
  }
  return result;
}
