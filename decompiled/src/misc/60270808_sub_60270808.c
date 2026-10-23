/* sub_60270808
 * address: 0x60270808   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60270808(int result)
{
  _DWORD *v1; // r1
  int v2; // r2
  int v3; // r2
  float v4; // s0
  float v5; // s0

  v1 = (_DWORD *)(result + 7484);
  v2 = FIELD_U32(result, 7484);
  if ( !v2 || (v3 = v2 - 1, (*v1 = v3) == 0) )
  {
    v4 = FIELD_F32(result, 108);
    if ( (float)(FIELD_F32(dword_60CC6484, 112) + 16.0) <= (float)(v4 + 16.0)
      && (float)(FIELD_F32(dword_60CC6484, 120) + -16.0) >= (float)(v4 + -16.0) )
    {
      v5 = FIELD_F32(result, 112);
      if ( FIELD_F32(dword_60CC6484, 132) <= v5 && FIELD_F32(dword_60CC6484, 124) >= v5 )
      {
        if ( FIELD_U32(result, 7488) )
        {
          *v1 = FIELD_U32(result, 7500);
          if ( FIELD_S32(EnemyCounterMaybe_instance, 224) <= 7 )
            return sub_602717D4();
        }
        else
        {
          *v1 = 180;
          return sub_60271648();
        }
      }
    }
  }
  return result;
}
