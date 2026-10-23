/* sub_608C57D0
 * address: 0x608C57D0   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_608C57D0(int a1, int a2, float result)
{
  int v3; // r1
  float v4; // s2
  int v5; // r2
  float v6; // s2

  switch ( *(_DWORD *)a1 )
  {
    case 0:
      result = -0.03125;
      v3 = a2 + 1;
      while ( --v3 >= 1 )
      {
        v4 = FIELD_F32(a1, 16) * FIELD_F32(a1, 4);
        FIELD_F32(a1, 4) = v4;
        if ( v4 > -0.03125 )
        {
          *(_DWORD *)a1 = 1;
          FIELD_U32(a1, 4) = 0;
          FIELD_U16(a1, 22) = FIELD_U16(a1, 20);
          return result;
        }
      }
      break;
    case 1:
      v5 = FIELD_U16(a1, 22);
      if ( v5 <= a2 )
      {
        a2 -= v5;
        FIELD_U16(a1, 22) = 0;
        *(_DWORD *)a1 = 2;
        goto LABEL_9;
      }
      FIELD_U16(a1, 22) = v5 - a2;
      break;
    case 2:
LABEL_9:
      v6 = FIELD_F32(a1, 4) - (float)((float)a2 * FIELD_F32(a1, 8));
      result = (float)word_60B341F4[FIELD_U8(a1, 24)];
      FIELD_F32(a1, 4) = v6;
      if ( v6 < result )
      {
        FIELD_F32(a1, 4) = result;
        *(_DWORD *)a1 = 3;
      }
      break;
    case 4:
      result = FIELD_F32(a1, 4) - (float)((float)a2 * FIELD_F32(a1, 12));
      FIELD_F32(a1, 4) = result;
      break;
    default:
      return result;
  }
  return result;
}
