/* sub_6040A81C
 * address: 0x6040A81C   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6040A81C(int a1)
{
  unsigned int result; // r0
  _BYTE *v3; // r5
  int v4; // r0
  int v5; // r0
  unsigned int v6; // r0
  _DWORD *v7; // r2
  char v8; // r3

  v3 = (_BYTE *)(a1 + 6559);
  result = FIELD_U8(a1, 6559);
  if ( result == 1 )
  {
    if ( FIELD_U8(a1, 6552) )
    {
      v4 = 3;
      *v3 = 3;
    }
    else
    {
      v4 = 1;
    }
    if ( FIELD_U8(a1, 6554) )
    {
      if ( FIELD_U8(a1, 6555) )
      {
        FIELD_U8(a1, 6555) = 0;
      }
      else
      {
        if ( v4 == 1 && FIELD_U8(a1, 6476) == 3 )
        {
          v5 = FIELD_S8(a1, 6479);
          if ( v5 < 0 || v5 == 1 )
          {
            v6 = FIELD_U8(a1, 6481);
            FIELD_U32(a1, 6504) = v6;
            v7 = *(_DWORD **)(a1 + 6472);
            if ( v7 && ((v8 = 2, v7[23] <= v6) || (v8 = 1, v7[22] <= v6) || (v8 = 0, v7[21] <= v6)) )
            {
              *v3 = 2;
              FIELD_U8(a1, 6560) = v8;
            }
            else
            {
              *v3 = 3;
            }
          }
        }
        FIELD_U8(a1, 6556) = 1;
      }
    }
    result = FIELD_U8(a1, 6476);
    if ( result == 4 )
    {
      sub_6040B5F4(a1 + 6478);
      result = FIELD_U8(a1, 6479);
      if ( FIELD_U8(a1, 6478) > result )
      {
        *v3 = 3;
        return 3;
      }
    }
  }
  return result;
}
