/* sub_60909348
 * address: 0x60909348   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60909348(float a1, float a2, int a3, int a4, float *a5, char a6)
{
  float v8; // s0
  int result; // r0
  unsigned int v10; // r1
  char v11; // r0
  unsigned int v12; // r0
  char v13; // r0

  v8 = sqrtf((float)(a5[1] * a5[1]) + (float)(*a5 * *a5));
  result = 0;
  if ( v8 >= a2 && (v8 >= a1 || (((1 << (a6 + 1)) | (1 << a6) | (1 << (a6 + 2)) | (1 << (a6 + 3))) & a4) != 0) )
  {
    v10 = sub_6000F7B8(a5[1], *a5);
    if ( !(v10 >> 28) )
    {
      v11 = a6 + 3;
      return 1 << v11;
    }
    v12 = v10 >> 28;
    if ( v10 >> 28 <= 2 )
    {
      v13 = a6 + 3;
      return (1 << v13) | (1 << a6);
    }
    if ( v12 <= 4 )
      return 1 << a6;
    if ( v12 <= 6 )
    {
      v13 = a6 + 2;
      return (1 << v13) | (1 << a6);
    }
    if ( v10 < 0x90000000 )
    {
      v11 = a6 + 2;
      return 1 << v11;
    }
    if ( v10 >= 0xB0000000 )
    {
      if ( v10 < 0xD0000000 )
      {
        v11 = a6 + 1;
        return 1 << v11;
      }
      result = 1 << (a6 + 3);
      if ( v10 < 0xF0000000 )
        return result | (1 << (a6 + 1));
    }
    else
    {
      return (1 << (a6 + 2)) | (1 << (a6 + 1));
    }
  }
  return result;
}
