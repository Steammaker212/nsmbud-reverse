/* sub_601CE978
 * address: 0x601CE978   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601CE978(int a1, int a2, int a3)
{
  int v4; // r4
  int v5; // r5
  int v6; // r6
  int v7; // r0
  int v8; // r7

  v4 = sub_601E131C(a3);
  v5 = sub_601DFFE4(a2);
  v6 = 0;
  if ( sub_60178694(v5, 0) && v4 )
  {
    v7 = 1;
    goto LABEL_21;
  }
  if ( !sub_60178694(v5, 1u) )
  {
    v8 = 0;
    goto LABEL_8;
  }
  v7 = v4 != 1;
  v6 = v7;
  v8 = v7;
  if ( v4 == 1 )
  {
LABEL_8:
    v6 = 2;
    if ( !sub_60178694(v5, 2u) || v4 == 2 )
    {
      v6 = 3;
      if ( !sub_60178694(v5, 3u) || v4 == 3 )
      {
        v6 = 4;
        if ( !sub_60178694(v5, 4u) || v4 == 4 )
        {
          v6 = 5;
          if ( !sub_60178694(v5, 5u) || v4 == 5 )
          {
            v7 = 2;
            v6 = v8;
          }
          else
          {
            v7 = 1;
          }
        }
        else
        {
          v7 = 1;
        }
      }
      else
      {
        v7 = 1;
      }
    }
    else
    {
      v7 = 1;
    }
  }
LABEL_21:
  if ( v7 == 2 )
    return 6;
  return v6;
}
