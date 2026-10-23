/* SE_OBJ_CMN_SPLASH_POISON_ref_6C0384
 * address: 0x606C0384   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_SPLASH_POISON_ref_6C0384(int a1)
{
  int v2; // r0
  bool v3; // zf
  float v4; // r1
  int v5; // r5
  bool *v6; // r7
  bool v7; // zf
  float v8; // s2
  int v9; // r6
  bool *v10; // r5
  bool v11; // zf
  int v13; // [sp+4h] [bp-3Ch] BYREF
  float x; // [sp+8h] [bp-38h] BYREF
  float v15; // [sp+Ch] [bp-34h]
  int v16; // [sp+10h] [bp-30h]
  Vec2 a2; // [sp+18h] [bp-28h] BYREF
  int v18; // [sp+20h] [bp-20h]

  v2 = FIELD_U32(a1, 6348);
  v3 = v2 == 0;
  if ( v2 )
    v3 = FIELD_U32(a1, 6352) == 0;
  if ( !v3 )
  {
    MovementHandler__execute((MovementHandler *)(a1 + 6100));
    if ( FIELD_U32(a1, 6148) == 1 && FIELD_U32(a1, 6168) != 1 )
    {
      FIELD_U32(a1, 108) = FIELD_U32(a1, 6100);
      FIELD_U32(a1, 112) = FIELD_U32(a1, 6104);
      FIELD_U32(a1, 164) = FIELD_U32(a1, 6180);
    }
    v4 = FIELD_F32(a1, 112);
    a2.x = FIELD_F32(a1, 108);
    a2.y = v4;
    v18 = 1166843904;
    x = a2.x;
    v15 = v4;
    v16 = 1166843904;
    ((void (__fastcall *)(int *, _DWORD, _DWORD, float *, _DWORD))physics_21893E8)(
      &v13,
      0,
      0,
      &x,
      FIELD_U8(a1, 86));
    v5 = v13;
    v6 = (bool *)(a1 + 6356);
    v7 = v13 == 5;
    if ( v13 == 5 )
      v7 = !*v6;
    if ( v7 && !StageActor__isOffScreen((StageActor *)a1) )
      StageActor__createWaterSplash((StageActor *)a1, &a2, 621, 23, "SE_OBJ_CMN_SPLASH_POISON");
    *v6 = v5 == 5;
    v8 = FIELD_F32(a1, 112);
    a2.x = FIELD_F32(a1, 108);
    a2.y = v8 + 64.0;
    v18 = 1166843904;
    x = a2.x;
    v15 = v8 + 64.0;
    v16 = 1166843904;
    ((void (__fastcall *)(int *, _DWORD, _DWORD, float *, _DWORD))physics_21893E8)(
      &v13,
      0,
      0,
      &x,
      FIELD_U8(a1, 86));
    v9 = v13;
    v10 = (bool *)(a1 + 6357);
    v11 = v13 == 5;
    if ( v13 != 5 )
      v11 = !*v10;
    if ( !v11 && !StageActor__isOffScreen((StageActor *)a1) )
      StageActor__createWaterSplash((StageActor *)a1, &a2, 621, 23, "SE_OBJ_CMN_SPLASH_POISON");
    *v10 = v9 == 5;
  }
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
