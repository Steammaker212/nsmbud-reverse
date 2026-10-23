/* sub_6036DA18
 * address: 0x6036DA18   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6036DA18(int a1)
{
  float v2; // s4
  int result; // r0
  float v4; // s4
  int *v5; // r1

  v2 = FIELD_F32(a1, 108);
  result = dword_60CC6484;
  if ( (float)(FIELD_F32(dword_60CC6484, 112) + 4.0) < v2 && v2 < (float)(FIELD_F32(dword_60CC6484, 120) + -4.0) )
  {
    v4 = FIELD_F32(a1, 112);
    if ( (float)(FIELD_F32(dword_60CC6484, 132) + 4.0) < v4 && v4 < (float)(FIELD_F32(dword_60CC6484, 124) + -4.0) )
    {
      if ( sub_60370004(a1) == 1 )
      {
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C95F20);
      }
      else
      {
        result = sub_6036FD84(a1);
        if ( result == 1 )
        {
          if ( FIELD_U16(a1, 6362) )
            v5 = &dword_60C95F00;
          else
            v5 = &dword_60C95F20;
          return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v5);
        }
      }
    }
  }
  return result;
}
