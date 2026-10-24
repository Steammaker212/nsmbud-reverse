/* sub_601F2ADC
 * address: 0x601F2ADC   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601F2ADC(Actor *a1)
{
  int v2; // r5
  int ProfileId; // r0
  int v4; // r1
  int result; // r0

  v2 = dword_60C8B13C;
  if ( FIELD_U8(dword_60CC6D78, 28) )
  {
    ProfileId = Actor__getProfileId(a1);
    v4 = 38;
    if ( ProfileId != 871 )
    {
      v4 = 39;
      if ( ProfileId != 872 )
      {
        v4 = 40;
        if ( ProfileId != 873 )
        {
          v4 = 41;
          if ( ProfileId != 874 )
          {
            v4 = 42;
            if ( ProfileId != 875 )
            {
              v4 = 43;
              if ( ProfileId != 876 )
              {
                v4 = 45;
                if ( ProfileId == 877 )
                  v4 = 44;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    v4 = 37;
  }
  result = sub_601E4EA4(v2, v4, 0, (int)&a1[1], 1);
  FIELD_U32(a1 + (8) * 80, 0x4C) = result;
  return result;
}
