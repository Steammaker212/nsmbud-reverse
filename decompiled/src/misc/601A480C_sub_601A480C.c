/* sub_601A480C
 * address: 0x601A480C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_601A480C(int a1, unsigned int a2, char a3, float a4, float a5, float a6)
{
  int v6; // r3
  float *v7; // r0
  float *v8; // r1
  float *result; // r0

  LOWORD(v6) = -28496;
  if ( a2 >= 9 )
    a2 = 0;
  HIWORD(v6) = 4;
  *(_BYTE *)(a1 + a2 + v6) = a3;
  v7 = (float *)(a1 + 12 * a2);
  v7[74769] = a4;
  v8 = v7 + 74770;
  result = v7 + 74771;
  *v8 = a5;
  *result = a6;
  return result;
}
