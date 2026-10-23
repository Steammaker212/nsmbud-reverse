/* sub_60718198
 * address: 0x60718198   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60718198(int a1, int a2, int a3, unsigned __int8 a4, float a5, float a6, float a7)
{
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r12
  float v11; // s0
  int v12; // r2
  int *result; // r0
  bool v14; // cc
  float *v15; // r1

  v7 = a2 | (a3 << 8);
  v8 = a4;
  v9 = 1;
  v10 = v7 | (v8 << 16);
  v11 = a5 + 8.0;
  v12 = FIELD_U32(a1, 14556);
  result = (int *)(v12 + 28);
  while ( *((unsigned __int8 *)result - 16) < 0xFEu )
  {
    if ( *(unsigned __int8 *)result > 0xFDu )
      goto LABEL_8;
    result += 8;
    v14 = v9 + 1 < 256;
    v9 += 2;
    if ( !v14 )
      return result;
  }
  result -= 4;
  --v9;
LABEL_8:
  v15 = (float *)(v12 + 16 * v9);
  *v15 = v11;
  v15[1] = -(float)(16.0 - a6);
  v15[2] = a7;
  *result = v10;
  return result;
}
