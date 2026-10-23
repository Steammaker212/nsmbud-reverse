/* sub_60136948
 * address: 0x60136948   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60136948(int a1)
{
  int v1; // r5
  int result; // r0
  bool v4; // zf
  int v5; // r6
  int v6; // r1
  float v7; // s2
  float v8; // s0

  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 )
  {
    result = sub_6014B69C(a1 + 648);
    v4 = result == 0;
    if ( result )
    {
      v1 = FIELD_U32(result, 144);
      v4 = v1 == 0;
    }
    if ( !v4 )
    {
      v5 = FIELD_U8(dword_60CC6D8C, 17);
      result = Actor__getProfileId((Actor *)v1);
      v6 = 184;
      if ( v5 )
      {
        if ( result == 184 || (result = Actor__getProfileId((Actor *)v1), result == 185) )
        {
LABEL_10:
          v7 = FIELD_F32(v1, 120);
          v8 = FIELD_F32(a1, 120);
          if ( v7 > 0.0 && v8 >= 0.0 || v7 < 0.0 && v8 <= 0.0 )
            FIELD_F32(a1, 120) = v7 + v8;
          return result;
        }
        result = Actor__getProfileId((Actor *)v1);
        v6 = 186;
      }
      if ( result != v6 )
        return result;
      goto LABEL_10;
    }
  }
  return result;
}
