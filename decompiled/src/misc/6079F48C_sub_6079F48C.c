/* sub_6079F48C
 * address: 0x6079F48C   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079F48C(int a1)
{
  int v2; // r2
  int v3; // r0
  int result; // r0

  v2 = FIELD_U32(a1, 1320);
  v3 = *(_DWORD *)(FIELD_U32(a1, 11360) + 196);
  if ( (v3 & 1) != 0 )
  {
    result = 6;
    if ( !v2 )
      result = 5;
    if ( v2 == 3 )
      return 4;
  }
  else if ( (v3 & 0x10) != 0 )
  {
    result = dword_60B0C6E0[v2];
    if ( v2 != 3 )
    {
      if ( v2 )
        return 8;
      else
        return 7;
    }
  }
  else
  {
    result = 11;
    if ( (FIELD_U8(a1, 1216) & 0x10) == 0 )
    {
      result = 12;
      if ( (FIELD_U8(a1, 1211) & 0x40) == 0 )
      {
        if ( (FIELD_U8(a1, 1214) & 0x20) != 0 )
        {
          result = dword_60B0C6E0[v2];
          if ( v2 != 3 )
          {
            if ( v2 )
              return 10;
            else
              return 9;
          }
        }
        else
        {
          return dword_60B0C6E0[v2];
        }
      }
    }
  }
  return result;
}
