/* sub_608AF208
 * address: 0x608AF208   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AF208(int a1, int a2)
{
  float v4; // s0
  float v5; // s2
  int v6; // r0
  int v7; // r1
  int v8; // r0

  if ( a2 < 1 || FIELD_U8(a1, 205) == 2 || !FIELD_U8(a1, 184) && !FIELD_U8(a1, 185) )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 16))(a1);
  v4 = (float)a2;
  v5 = FIELD_F32(a1, 140);
  v6 = FIELD_U32(a1, 144);
  v7 = FIELD_U32(a1, 148);
  if ( v7 < v6 )
    v5 = FIELD_F32(a1, 136) + (float)((float)((float)v7 * (float)(v5 - FIELD_F32(a1, 136))) / (float)v6);
  FIELD_F32(a1, 136) = v5;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 144) = (int)(float)(v4 * v5);
  FIELD_U32(a1, 148) = 0;
  FIELD_U8(a1, 196) = 0;
  v8 = FIELD_U32(a1, 16);
  if ( v8 )
    sub_608ACB18(v8, a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
  FIELD_U8(a1, 186) = 0;
  FIELD_U8(a1, 205) = 0;
  FIELD_U8(a1, 189) = 0;
  FIELD_U32(a1, 192) = 0;
  FIELD_U8(a1, 187) = 1;
  FIELD_U8(a1, 206) = 0;
  return 1;
}
