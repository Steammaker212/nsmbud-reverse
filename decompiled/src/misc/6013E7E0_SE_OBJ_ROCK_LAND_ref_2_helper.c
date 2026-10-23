/* SE_OBJ_ROCK_LAND_ref_2_helper
 * address: 0x6013E7E0   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_ROCK_LAND_ref_2_helper(int a1)
{
  float v1; // s0
  int v2; // r0
  _BOOL4 v3; // r1
  _BOOL4 v4; // r2
  int v5; // r0
  int v6; // r0
  Vec3 v8; // [sp+4h] [bp-14h] BYREF

  v1 = FIELD_F32(a1, 112);
  v8.x = FIELD_F32(a1, 108);
  v8.y = v1 + -14.0;
  v8.z = 4500.0;
  v2 = FIELD_U32(a1, 5956);
  v3 = (unsigned int)(unsigned __int8)__ROR4__(v2, 8) - 3 < 2;
  v4 = BYTE1(v2) == 4;
  if ( FIELD_U8(dword_60CC6D8C, 17) )
    v4 = v3;
  if ( v4 )
  {
    v5 = 670;
  }
  else
  {
    v6 = BYTE1(v2);
    switch ( v6 )
    {
      case 1:
        v5 = 672;
        break;
      case 11:
        v5 = 673;
        break;
      case 2:
        v5 = 671;
        break;
      default:
        v5 = 669;
        break;
    }
  }
  return EffectData_create(v5, &v8, 0, 0);
}
