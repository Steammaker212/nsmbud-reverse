/* sub_605F53A8
 * address: 0x605F53A8   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_605F53A8(int a1)
{
  unsigned int result; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1
  int v6; // r1

  v4 = FIELD_U32(a1, 6180);
  result = a1 + 6180;
  v3 = v4;
  if ( v4 == 2 )
  {
    if ( (FIELD_U8(a1, 2872) & 1) != 0 )
      return result;
LABEL_11:
    *(_DWORD *)result = 3;
    result = FIELD_U32(a1, 3200) & 0xBFFFFFFF;
    FIELD_F32(a1, 3200) = *(float *)&result;
    return result;
  }
  if ( v3 == 1 )
  {
    if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    {
      *(_DWORD *)result = 2;
      return result;
    }
    goto LABEL_11;
  }
  if ( v3 )
  {
    *(float *)&result = COERCE_FLOAT(sub_60003460(a1));
    if ( result == 1 )
    {
      FIELD_U32(a1, 124) = 0;
      result = a1 + 6124;
      v5 = FIELD_U32(a1, 6124);
      if ( v5 <= 2 )
      {
        if ( (FIELD_U8(a1, 2872) & 8) != 0 )
        {
          FIELD_U32(a1, 124) = 1082130432;
          FIELD_U32(a1, 100) = -1105618534;
          FIELD_U32(a1, 120) = 0;
          result = FIELD_U32(a1, 6152);
          if ( *(float *)&result != 0.0 )
          {
            result = dword_60B05E04[result - 1];
            FIELD_F32(a1, 120) = *(float *)&result;
          }
        }
        else
        {
          v6 = v5 + 1;
          *(_DWORD *)result = v6;
          result = dword_60AF2994[v6];
          FIELD_F32(a1, 124) = *(float *)&result;
          if ( FIELD_U8(a1, 6054) )
            FIELD_F32(a1, 124) = *(float *)&result * 0.3;
        }
      }
    }
  }
  else if ( (float)(FIELD_F32(a1, 112) + -16.0) <= FIELD_F32(dword_60CC6484, 124) )
  {
    *(_DWORD *)result = 1;
  }
  return result;
}
