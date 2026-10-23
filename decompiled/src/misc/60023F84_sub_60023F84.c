/* sub_60023F84
 * address: 0x60023F84   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60023F84(int a1)
{
  bool v1; // zf
  int v2; // r2
  char v3; // r3
  unsigned int v4; // r1
  int v5; // r2
  int v6; // r2
  int result; // r0

  result = dword_60C7F558;
  if ( dword_60C7F558 )
  {
    v1 = dword_60C9A230 == 0;
    if ( dword_60C9A230 )
      v1 = FIELD_U8(dword_60C9A230, 2084) == 0;
    if ( !v1 )
    {
      FIELD_U8(dword_60C7F558, 19) = 1;
      return result;
    }
    v2 = FIELD_U8(a1, 22);
    v3 = 1;
    if ( *(_DWORD *)dword_60C7F558 != v2 )
    {
      v3 = 0;
      *(_DWORD *)dword_60C7F558 = v2;
    }
    FIELD_U8(result, 19) = v3;
    v4 = FIELD_U8(a1, 23);
    if ( (v4 & 0xF) == 2 )
    {
      v5 = dword_60C99DD4 + 272;
      if ( !dword_60C99DD4 )
        v5 = dword_60C99DEC + 16;
      v6 = FIELD_U8(v5, 576) & 1;
      FIELD_U8(result, 4) = v6 ^ 1;
      if ( v6 )
        return sub_60815F14(dword_60CC6B68, v4 >> 4);
    }
    else
    {
      if ( (v4 & 0xF) == 0 )
      {
        FIELD_U8(result, 4) = 0;
        return sub_60815F14(dword_60CC6B68, v4 >> 4);
      }
      FIELD_U8(result, 4) = 1;
    }
    FIELD_U8(result, 19) = 0;
    return sub_60815F14(dword_60CC6B68, v4 >> 4);
  }
  return result;
}
