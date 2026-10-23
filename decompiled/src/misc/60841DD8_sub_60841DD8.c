/* sub_60841DD8
 * address: 0x60841DD8   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60841DD8(int result, unsigned int a2, unsigned int a3, float a4)
{
  int v4; // r6
  int v5; // r5
  int v6; // lr
  int v7; // r9
  char v8; // r10
  int v9; // r6
  int v10; // r12
  int v11; // r3
  char v12; // r3
  char v13; // r1

  *(float *)result = a4;
  v4 = (int)(a2 << 8) >> 24;
  v5 = (int)(a3 << 8) >> 24;
  v6 = 0;
  v7 = (char)a3 * (__int16)v4 - v5 * (char)a2;
  v8 = v5 * BYTE1(a2) - BYTE1(a3) * v4;
  v9 = 0;
  v10 = ((__int16)a3 >> 8) * (char)a2 - (char)a3 * ((__int16)a2 >> 8);
  if ( (v8 & 1) == 0 )
  {
    v9 = 1;
    if ( ((v7 << 8) & 0x100) == 0 )
      v9 = (2 * v10) & 2;
  }
  FIELD_U32(result, 4) = v9;
  if ( (a2 & 1) == 0 )
  {
    v6 = 1;
    if ( (a2 & 0x100) == 0 )
      v6 = (a2 >> 15) & 2;
  }
  v11 = 0;
  FIELD_U32(result, 8) = v6;
  if ( (a3 & 1) == 0 )
  {
    v11 = 1;
    if ( (a3 & 0x100) == 0 )
      v11 = (a3 >> 15) & 2;
  }
  FIELD_U32(result, 12) = v11;
  v12 = v8 & 0x10;
  if ( (v7 << 8) & 0x1000 | v8 & 0x10 | (v10 << 16) & 0x100000 )
    v12 = 1;
  FIELD_U8(result, 16) = v12;
  FIELD_U8(result, 17) = (a2 & 0x101010) != 0;
  v13 = a3 & 0x10;
  if ( (a3 & 0x101010) != 0 )
    v13 = 1;
  FIELD_U8(result, 18) = v13;
  return result;
}
