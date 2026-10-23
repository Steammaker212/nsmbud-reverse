/* sub_60455EF4
 * address: 0x60455EF4   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60455EF4(_DWORD *a1)
{
  int result; // r0
  int v3; // r2
  int v4; // r2
  int v5; // r1
  int v6; // r1

  sub_60905318(a1[3]);
  sub_604559C0(a1[3], (int)(a1 + 4));
  result = sub_60455378(a1 + 4, 0);
  if ( result )
  {
    if ( a1[58] >= 5u )
    {
      result = sub_6083360C(a1[2]);
      if ( !result )
      {
        result = a1[1];
        if ( result >= 1 )
        {
          if ( (result & 3) != 0 )
          {
            v3 = 0;
            do
              *(_BYTE *)(a1[2] + v3++) = 0;
            while ( (result & 3) != v3 );
          }
          else
          {
            v3 = 0;
          }
          if ( (unsigned int)(result - 1) >= 3 )
          {
            v6 = v3 + 3;
            result = -result;
            do
            {
              *(_BYTE *)(a1[2] + v6 - 3) = 0;
              *(_BYTE *)(a1[2] + v6 - 2) = 0;
              *(_BYTE *)(a1[2] + v6 - 1) = 0;
              *(_BYTE *)(a1[2] + v6) = 0;
              v6 += 4;
            }
            while ( result + v6 != 3 );
          }
        }
      }
    }
  }
  else
  {
    result = a1[1];
    if ( result >= 1 )
    {
      if ( (result & 3) != 0 )
      {
        v4 = 0;
        do
          *(_BYTE *)(a1[2] + v4++) = 0;
        while ( (result & 3) != v4 );
      }
      else
      {
        v4 = 0;
      }
      if ( (unsigned int)(result - 1) >= 3 )
      {
        v5 = v4 + 3;
        result = -result;
        do
        {
          *(_BYTE *)(a1[2] + v5 - 3) = 0;
          *(_BYTE *)(a1[2] + v5 - 2) = 0;
          *(_BYTE *)(a1[2] + v5 - 1) = 0;
          *(_BYTE *)(a1[2] + v5) = 0;
          v5 += 4;
        }
        while ( result + v5 != 3 );
      }
    }
  }
  return result;
}
