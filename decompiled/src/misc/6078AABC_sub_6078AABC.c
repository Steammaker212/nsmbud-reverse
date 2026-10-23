/* sub_6078AABC
 * address: 0x6078AABC   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078AABC(int result)
{
  __int16 v1; // r1
  int v2; // r2
  bool v3; // zf
  int v4; // r2
  bool v5; // zf
  int v6; // r2
  bool v7; // zf
  int v8; // r2
  bool v9; // zf

  v1 = FIELD_U16(result, 164);
  if ( (v1 & 2) != 0 )
  {
    v2 = FIELD_U32(result, 32);
    v3 = v2 == 0;
    if ( v2 )
      v3 = (FIELD_U8(v2, 1218) & 8) == 0;
    if ( v3 )
    {
      v4 = FIELD_U32(result, 36);
      v5 = v4 == 0;
      if ( v4 )
        v5 = (FIELD_U8(v4, 1218) & 8) == 0;
      if ( v5 )
      {
        v6 = FIELD_U32(result, 40);
        v7 = v6 == 0;
        if ( v6 )
          v7 = (FIELD_U8(v6, 1218) & 8) == 0;
        if ( v7 )
        {
          v8 = FIELD_U32(result, 44);
          v9 = v8 == 0;
          if ( v8 )
            v9 = (FIELD_U8(v8, 1218) & 8) == 0;
          if ( v9 )
          {
            FIELD_U16(result, 164) = v1 & 0xFFFD;
            return sub_60816F60(dword_60CC6B68, 512);
          }
        }
      }
    }
  }
  return result;
}
