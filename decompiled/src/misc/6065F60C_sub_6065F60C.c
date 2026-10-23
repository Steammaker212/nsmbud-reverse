/* sub_6065F60C
 * address: 0x6065F60C   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6065F60C(int a1, int a2, _DWORD *a3, int a4)
{
  int v7; // r0
  int ProfileId; // r1
  int result; // r0
  float v10; // s0
  float v11; // s2
  float v12; // s4
  int v13; // r0

  if ( (unsigned __int8)(FIELD_U8(a2, 533) - 1) > 1u )
  {
    if ( Actor__getProfileId((Actor *)a2) != 641 && Actor__getProfileId((Actor *)a2) != 644 )
    {
      ProfileId = Actor__getProfileId((Actor *)a2);
      result = 0;
      if ( ProfileId != 459 )
        return result;
    }
  }
  else
  {
    v7 = FIELD_S8(a2, 84);
    if ( v7 != -1 )
      *(_DWORD *)(a4 + 4 * v7) = 1;
  }
  v10 = FIELD_F32(a2, 108);
  v11 = FIELD_F32(a1, 108);
  v12 = fabsf(v11 - v10);
  if ( v12 <= 16.0 || v12 > 73.0 )
  {
    v13 = 0;
    if ( v12 > 73.0 )
    {
      v13 = 2;
      if ( FIELD_U8(a1, 7080) == 2 )
        v13 = 1;
    }
  }
  else
  {
    v13 = 1;
    if ( FIELD_U8(a1, 7080) == 1 )
      v13 = 2;
  }
  if ( v10 < v11 )
    v13 = -v13;
  *a3 += v13;
  return 1;
}
