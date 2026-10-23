/* sub_6019B574
 * address: 0x6019B574   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6019B574(unsigned __int8 a1, unsigned __int8 a2)
{
  int v4; // r6
  int result; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r1
  int v9; // r7
  int v10; // r0
  bool v11; // zf
  int v12; // r0

  v4 = dword_60CC6D78;
  result = FIELD_U32(dword_60CC6D78, 32);
  if ( result == 2 )
  {
    v6 = dword_60CC6D78;
    if ( FIELD_U32(dword_60CC6D78, 448) != 2 )
    {
      v7 = sub_603F6B0C(dword_60CC6D78 + 796, a1, a2);
      v8 = 3;
      if ( v7 > 2 )
        v8 = 5;
      FIELD_U32(v4, 448) = v8;
      v6 = dword_60CC6D78;
    }
    if ( (FIELD_U8(v6, 44) & 2) != 0 )
    {
      return sub_603F7338(v4 + 796, a1, a2);
    }
    else
    {
      v9 = dword_60C99DEC;
      v10 = sub_603FD0B4(dword_60C99DEC + 16);
      v11 = v10 == 1;
      if ( v10 == 1 )
        v11 = FIELD_U32(v9, 48) == 5;
      v12 = v4 + 796;
      if ( v11 )
        return sub_603F73CC(v12, a1, a2);
      else
        return sub_603F7464(v12, a1, a2);
    }
  }
  return result;
}
