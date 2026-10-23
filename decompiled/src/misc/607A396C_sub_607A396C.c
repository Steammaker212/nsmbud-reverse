/* sub_607A396C
 * address: 0x607A396C   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A396C(int a1)
{
  unsigned int v1; // r0
  int v2; // r5
  int v3; // r4
  int result; // r0
  int v5; // r0
  int v6; // t1
  int v7; // [sp+4h] [bp-14h]

  v1 = FIELD_U8(a1, 84);
  v2 = 0;
  if ( v1 < 6 )
    v2 = (char)v1;
  v3 = dword_60C99DD4;
  v7 = FIELD_U32(dword_60CC6D78, 32);
  result = v7;
  if ( v7 == 3 )
  {
    result = FIELD_U8(dword_60CBFA90, 340);
    if ( !FIELD_U8(dword_60CBFA90, 340) )
    {
      result = dword_60C99DD4 + 72 * v2;
      FIELD_U32(result, 300) = 0;
    }
  }
  else if ( v7 == 2 )
  {
    result = sub_6040E274(LevelInfo_instance);
    if ( result == 1 )
    {
      result = FIELD_U8(dword_60CC6D78, 109032);
      if ( !FIELD_U8(dword_60CC6D78, 109032) )
      {
        v5 = v3 + 72 * v2;
        v6 = FIELD_U32(v5, 300);
        result = v5 + 300;
        if ( v6 == 8 )
          *(_DWORD *)result = 7;
      }
    }
  }
  return result;
}
