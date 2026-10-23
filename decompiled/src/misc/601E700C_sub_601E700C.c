/* sub_601E700C
 * address: 0x601E700C   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601E700C()
{
  unsigned __int8 *v0; // r4
  int result; // r0
  int v2; // r6
  int v3; // r5

  v0 = (unsigned __int8 *)dword_60CC6D78;
  if ( (FIELD_U8(dword_60CC6D78, 2092) & 0x10) != 0 )
    return sub_603F7548(dword_60CC6D78 + 796);
  result = FIELD_U32(dword_60CC6D78, 440);
  if ( result != -1 )
  {
    if ( (FIELD_U8(dword_60CC6D78, 521) & 1) == 0 || (FIELD_U8(dword_60CC6D78, 2093) & 1) != 0 )
    {
      v2 = FIELD_U32(dword_60CC6D78, 32);
      v3 = (unsigned __int8)FIELD_U32(dword_60CC6D78, 424);
      result = sub_6040E368(v3);
      if ( !result )
      {
        result = sub_6040E460(v3);
        if ( !result )
        {
          result = sub_6040E404(v3);
          if ( v2 != 1 && !result )
          {
            result = v0[509];
            if ( v0[509] )
            {
              result = v0[44];
              if ( (result & 8) == 0 )
              {
                result = v0[109032];
                if ( !v0[109032] )
                {
                  sub_6081F17C(v0);
                  if ( !v0[523] )
                  {
                    sub_603F75FC(v0 + 796);
                    sub_6081F164(v0);
                  }
                  result = v0[524];
                  if ( !v0[524] )
                  {
                    sub_603F74A8(v0 + 796, 8);
                    return sub_6081F170(v0);
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      return sub_603F75FC(dword_60CC6D78 + 796);
    }
  }
  return result;
}
