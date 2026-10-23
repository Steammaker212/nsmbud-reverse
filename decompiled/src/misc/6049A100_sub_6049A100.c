/* sub_6049A100
 * address: 0x6049A100   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6049A100(int a1, int a2)
{
  char v3; // r5
  char v4; // r0
  char v5; // r5
  char v6; // r0
  char v7; // r5
  char v8; // r0
  int result; // r0

  v3 = 0;
  v4 = 0;
  if ( *(_BYTE *)a2 )
  {
    v4 = 0;
    if ( FIELD_U32(a2, 20) == 6 )
      v4 = sub_6081F258(dword_60CC6D78, FIELD_U32(a2, 12));
  }
  FIELD_U8(a2, 1) = v4;
  if ( FIELD_U8(a2, 24) && FIELD_U32(a2, 44) == 6 )
    v3 = sub_6081F258(dword_60CC6D78, FIELD_U32(a2, 36));
  FIELD_U8(a2, 25) = v3;
  v5 = 0;
  v6 = 0;
  if ( FIELD_U8(a2, 48) )
  {
    v6 = 0;
    if ( FIELD_U32(a2, 68) == 6 )
      v6 = sub_6081F258(dword_60CC6D78, FIELD_U32(a2, 60));
  }
  FIELD_U8(a2, 49) = v6;
  if ( FIELD_U8(a2, 72) && FIELD_U32(a2, 92) == 6 )
    v5 = sub_6081F258(dword_60CC6D78, FIELD_U32(a2, 84));
  FIELD_U8(a2, 73) = v5;
  v7 = 0;
  v8 = 0;
  if ( FIELD_U8(a2, 96) )
  {
    v8 = 0;
    if ( FIELD_U32(a2, 116) == 6 )
      v8 = sub_6081F258(dword_60CC6D78, FIELD_U32(a2, 108));
  }
  FIELD_U8(a2, 97) = v8;
  result = FIELD_U8(a2, 120);
  if ( FIELD_U8(a2, 120) )
  {
    result = FIELD_U32(a2, 140);
    if ( result == 6 )
    {
      result = sub_6081F258(dword_60CC6D78, FIELD_U32(a2, 132));
      v7 = result;
    }
  }
  FIELD_U8(a2, 121) = v7;
  return result;
}
