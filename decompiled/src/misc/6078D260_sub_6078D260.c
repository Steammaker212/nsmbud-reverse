/* sub_6078D260
 * address: 0x6078D260   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078D260(_DWORD *a1, float a2)
{
  int result; // r0
  int v4; // r0
  int v5; // r1
  unsigned int v6; // r2
  int *v7; // r1
  int v8; // r1

  result = a1[43];
  if ( result == 1 || result == 39 && (result = a1[118], result != 9) )
  {
    v4 = a1[44];
    if ( v4 )
    {
      result = v4 - 1;
      a1[44] = result;
    }
    else
    {
      result = 0;
    }
    v5 = a1[73];
    if ( v5 || a1[118] == 9 && (v5 = a1[6]) != 0 )
    {
      v6 = FIELD_U32(v5, 16);
      v7 = *(int **)(v5 + 20);
      if ( v6 > 1 )
        ++v7;
      v8 = *v7;
      if ( v8 )
      {
        if ( result )
        {
          FIELD_U32(v8, 24) = 0;
          return (int)sub_6041838C((ModelAnimation *)(v8 + 4));
        }
        else
        {
          FIELD_U32(v8, 24) = 1065353216;
          result = FIELD_U8(v8, 28);
          if ( (result & 0x24) != 0 )
          {
            result = sub_60792ADC(a1, 60, a2) + 30;
            a1[44] = result;
          }
        }
      }
    }
  }
  return result;
}
