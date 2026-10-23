/* sub_607276B8
 * address: 0x607276B8   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_607276B8(int a1, _BYTE *a2, float *a3, float a4)
{
  unsigned int v4; // r12
  float v5; // s2
  float v6; // s4
  float v7; // s6
  float v8; // s8
  float v9; // s10
  int v10; // r2
  _BYTE *i; // r0
  unsigned int v12; // lr
  float v13; // s1
  float v14; // s12

  v4 = FIELD_U32(a1, 160);
  if ( !v4 )
    return 0;
  v5 = a4 + a4;
  v6 = *a3;
  v7 = a3[1];
  v8 = a3[2];
  v9 = a3[3];
  v10 = 0;
  for ( i = (_BYTE *)(FIELD_U32(a1, 40) + 12); ; i += 28 )
  {
    v12 = *((unsigned __int16 *)i - 3);
    v13 = (float)*((unsigned __int16 *)i - 6) - a4;
    if ( v13 <= v8 && v6 <= (float)(v13 + (float)(v5 + (float)*((unsigned __int16 *)i - 4))) )
    {
      v14 = (float)(int)(v12 + *((unsigned __int16 *)i - 5)) + a4;
      if ( v7 <= (float)((float)(v5 + (float)v12) - v14) && v9 >= (float)-v14 )
        break;
    }
    if ( ++v10 >= v4 )
      return 0;
  }
  *a2 = *i;
  return 1;
}
