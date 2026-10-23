/* sub_602A8B10
 * address: 0x602A8B10   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A8B10(int *a1, _DWORD *a2)
{
  int v3; // r4
  int result; // r0
  int v5; // r3
  bool v6; // zf
  int v7; // r1

  v3 = *(_DWORD *)(a2[1] + 64);
  result = 0;
  v5 = FIELD_U8(v3, 533);
  if ( v5 == 2 )
  {
    return FIELD_U32(v3, 11360) && sub_602A8904(a1, a2) != 0;
  }
  else
  {
    v6 = v5 == 1;
    if ( v5 == 1 )
      v6 = (FIELD_U8(v3, 1217) & 0x10) == 0;
    if ( v6 )
    {
      if ( FIELD_U32(v3, 1320) == 3 )
      {
        result = 1;
        if ( (FIELD_U8(v3, 1210) & 1) == 0 )
        {
          v6 = sub_602A8904(a1, a2) == 1;
          result = 0;
          if ( v6 )
          {
            v7 = sub_6075F914(v3);
            result = 1;
            if ( v7 )
              return 2;
          }
        }
      }
      else
      {
        v6 = sub_602A8904(a1, a2) == 1;
        result = 0;
        if ( v6 )
          return (FIELD_U32(v3, 1212) >> 5) & 2 | 1;
      }
    }
  }
  return result;
}
