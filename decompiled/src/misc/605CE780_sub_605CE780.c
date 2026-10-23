/* sub_605CE780
 * address: 0x605CE780   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_605CE780(int a1, _DWORD *a2, int a3, int a4, char a5, int a6, int a7, char a8, int a9, int a10)
{
  float v10; // s0
  int v11; // r4
  int v12; // r2
  unsigned int v13; // r3
  float result; // s0

  v10 = (float)(unsigned int)(a3 << 27);
  v11 = (a9 << 28) - 0x40000000;
  *(float *)a1 = v10;
  FIELD_U8(a1, 19) = a8;
  FIELD_U8(a1, 21) = 16 * a5;
  v12 = -2097152 * a4;
  FIELD_U16(a1, 22) = (unsigned __int8)a6;
  FIELD_U32(a1, 12) = v11;
  if ( !a6 )
    v12 = a4 << 21;
  FIELD_U32(a1, 8) = v12;
  v13 = -268435456 * a10;
  if ( !a6 )
    v13 = a10 << 28;
  FIELD_U32(a1, 4) = v13;
  FIELD_U8(a1, 18) = v13 >> 30;
  FIELD_U8(a1, 24) = 0;
  LODWORD(result) = (int)(float)(v10
                               * (float)(*(float *)((char *)sinLutTable + (v13 >> 20))
                                       + (float)((float)(*(float *)((char *)&sinLutTable[1] + (v13 >> 20)) * 0.0)
                                               * 0.000000059605)));
  *a2 = LODWORD(result) + v11;
  FIELD_U16(a1, 16) = 0;
  return result;
}
