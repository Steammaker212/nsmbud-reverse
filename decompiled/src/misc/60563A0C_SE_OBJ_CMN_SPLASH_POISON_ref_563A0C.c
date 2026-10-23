/* SE_OBJ_CMN_SPLASH_POISON_ref_563A0C
 * address: 0x60563A0C   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_SPLASH_POISON_ref_563A0C(int a1)
{
  char v2; // r5
  float v3; // r0
  int v4; // r7
  int result; // r0
  char *v6; // r6
  bool v7; // zf
  int v8; // [sp+4h] [bp-3Ch] BYREF
  float v9[4]; // [sp+8h] [bp-38h] BYREF
  Vec2 a2; // [sp+18h] [bp-28h] BYREF
  int v11; // [sp+20h] [bp-20h]

  v2 = 0;
  v3 = FIELD_F32(a1, 108);
  a2.y = FIELD_F32(a1, 112);
  a2.x = v3;
  v11 = 1166843904;
  v9[0] = v3;
  v9[1] = a2.y;
  v9[2] = 4500.0;
  ((void (__fastcall *)(int *, _DWORD, _DWORD, float *, _DWORD))physics_21893E8)(
    &v8,
    0,
    0,
    v9,
    FIELD_U8(a1, 86));
  v4 = v8;
  result = 7385;
  v6 = (char *)(a1 + 7385);
  v7 = v8 == 5;
  if ( v8 == 5 )
  {
    result = (unsigned __int8)*v6;
    v7 = result == 0;
  }
  if ( v7 )
    result = StageActor__createWaterSplash((StageActor *)a1, &a2, 621, 23, "SE_OBJ_CMN_SPLASH_POISON");
  if ( v4 == 5 )
    v2 = 1;
  *v6 = v2;
  return result;
}
