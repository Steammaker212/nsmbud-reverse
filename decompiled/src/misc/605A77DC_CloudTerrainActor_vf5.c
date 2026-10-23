/* CloudTerrainActor_vf5
 * address: 0x605A77DC   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CloudTerrainActor_vf5(int a1)
{
  int v2; // r1
  int result; // r0
  float v4; // s0
  float v5; // s2

  FIELD_U8(a1, 6894) = 0;
  v2 = ((int (__fastcall *)(int))TerrainActor_initLocation)(a1);
  result = 2;
  if ( v2 == 1 )
  {
    if ( FIELD_U32(a1, 6836) == 1 )
    {
      v4 = FIELD_F32(a1, 6852);
      v5 = FIELD_F32(a1, 6856);
      FIELD_F32(a1, 492) = v4 * 0.5;
      FIELD_F32(a1, 496) = v5 * -0.5;
      FIELD_F32(a1, 500) = v4;
      FIELD_F32(a1, 504) = v5;
      FIELD_F32(a1, 508) = v4;
      FIELD_F32(a1, 512) = v5;
    }
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAFEC8);
    sub_605A788C(a1);
    ((void (__fastcall *)(int))loc_605A4EAC)(a1);
    return 1;
  }
  return result;
}
