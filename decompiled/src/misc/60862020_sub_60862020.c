/* sub_60862020
 * address: 0x60862020   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60862020(int a1, int a2)
{
  float v4; // s2
  unsigned int v5; // r0
  int result; // r0
  unsigned __int64 v7; // [sp+8h] [bp-28h] BYREF
  float v8; // [sp+10h] [bp-20h] BYREF
  float v9; // [sp+14h] [bp-1Ch]
  int v10; // [sp+18h] [bp-18h]
  int v11; // [sp+1Ch] [bp-14h]

  v9 = (float)FIELD_U16(a1, 180);
  v4 = FIELD_F32(a1, 56);
  v8 = v4 - v9;
  v10 = 0;
  v11 = 0;
  v5 = FIELD_U16(a1, 182);
  FIELD_F32(a1, 56) = v4;
  FIELD_F32(a1, 60) = (float)v5;
  FIELD_U8(a1, 64) |= 0x10u;
  v7 = sub_60858B20(a1).n64_u64[0];
  result = FIELD_S8(a1, 213);
  if ( result == 2 )
    return ((int (__fastcall *)(int, int, unsigned __int64 *, _DWORD, float *, _DWORD))sub_608643FC)(
             a1,
             a2,
             &v7,
             FIELD_U32(a1, 216),
             &v8,
             FIELD_U8(a1, 66));
  if ( result == 1 )
    return ((int (__fastcall *)(int, int, unsigned __int64 *, _DWORD, float *, _DWORD))sub_60863FA0)(
             a1,
             a2,
             &v7,
             FIELD_U32(a1, 216),
             &v8,
             FIELD_U8(a1, 66));
  return result;
}
