/* sub_6019A120
 * address: 0x6019A120   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6019A120(int a1)
{
  int v2; // r1
  int result; // r0
  int v4; // r1
  int v5; // r1
  int v6; // r1
  int v7; // r1
  int v8; // r1
  int v9; // r1
  int v10; // r1

  if ( a1 < 0 )
    return 10;
  v2 = sub_6040E2A4((unsigned __int8)a1);
  result = 0;
  if ( !v2 )
  {
    v4 = sub_6040E300((unsigned __int8)a1);
    result = 1;
    if ( !v4 )
    {
      v5 = sub_6040E328((unsigned __int8)a1);
      result = 2;
      if ( !v5 )
      {
        v6 = sub_6040E33C((unsigned __int8)a1, 0);
        result = 3;
        if ( !v6 )
        {
          v7 = sub_6040E350((unsigned __int8)a1);
          result = 7;
          if ( !v7 )
          {
            v8 = sub_6040E368((unsigned __int8)a1);
            result = 4;
            if ( !v8 )
            {
              v9 = sub_6040E2CC((unsigned __int8)a1);
              result = 8;
              if ( !v9 )
              {
                v10 = sub_6040E460((unsigned __int8)a1);
                result = 9;
                if ( !v10 )
                {
                  result = 10;
                  if ( a1 == 36 )
                    result = 5;
                  if ( a1 == 37 )
                    return 6;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
