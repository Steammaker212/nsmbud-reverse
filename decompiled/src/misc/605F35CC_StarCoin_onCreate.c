/* StarCoin_onCreate
 * address: 0x605F35CC   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall StarCoin_onCreate(StarCoin *a1)
{
  signed int v2; // r1
  signed int result; // r0
  float y; // s0
  unsigned int settings1; // r2
  float v6; // s0
  bool v7; // zf
  int v8; // r0
  int v9; // r1
  float v10; // s0
  unsigned int v11; // r0
  int v12; // [sp+0h] [bp-18h] BYREF
  float v13; // [sp+4h] [bp-14h] BYREF

  v2 = sub_605F43EC((int)a1, (FIELD_U32(a1, 0x0)._._._._.settings1 & 0x10000000) != 0 || (FIELD_U32(a1, 0x0)._._._._.settings1 & 0x20000000) != 0);
  result = 2;
  if ( v2 == 1 )
  {
    y = FIELD_U32(a1, 0x0)._._._.position.y;
    FIELD_U32(a1, 0x0).field_1804 = 1;
    settings1 = FIELD_U32(a1, 0x0)._._._._.settings1;
    v6 = y + 3.0;
    v7 = (settings1 & 0x20000000) == 0;
    FIELD_U32(a1, 0x0).field_1808 = (settings1 >> 18) & 3;
    v8 = (settings1 >> 17) & 1;
    v9 = 6156;
    if ( (settings1 & 0x20000000) != 0 )
      settings1 = 0;
    FIELD_U32(a1, 0x0).field_180C = v8;
    if ( !v7 )
      v9 = (int)&FIELD_U32(a1, 0x0).field_180C;
    v10 = v6 + -16.0;
    v11 = ((unsigned int)FIELD_U32(a1, 0x0)._._._._.settigns2 >> 28) & 1;
    FIELD_U32(a1, 0x1834) = v11;
    FIELD_U32(a1, 0x0)._._._.position.x = FIELD_U32(a1, 0x0)._._._.position.x + 16.0;
    FIELD_U32(a1, 0x0)._._._.position.y = v10;
    *(float *)&FIELD_U32(a1, 0x182C) = v10;
    if ( !v7 )
      *(_DWORD *)v9 = settings1;
    if ( v11 )
    {
      FIELD_U32(a1, 0x1830) = FIELD_U32(EnemyCounterMaybe_instance, 944);
      v13 = 0.0;
      ((void (__fastcall *)(int *, float *, Vec3 *, _DWORD))checkLiquidCollisions)(
        &v12,
        &v13,
        &FIELD_U32(a1, 0x0)._._._.position,
        (unsigned __int8)FIELD_U32(a1, 0x0)._._._.field_56);
      FIELD_U32(a1, 0x0)._._._.position.y = *(float *)&FIELD_U32(a1, 0x182C) + (float)(v13 - *(float *)&FIELD_U32(a1, 0x1830));
    }
    (*(void (__fastcall **)(StarCoin *, int *))(FIELD_U32(a1, 0x0)._._._._.vtable + 192))(a1, &dword_60CB21E0);
    StarCoinBase_updateModel((ModelWrapper **)a1);
    return 1;
  }
  return result;
}
