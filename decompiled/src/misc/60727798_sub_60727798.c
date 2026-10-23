/* sub_60727798
 * address: 0x60727798   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60727798(int a1, _BYTE *a2, float *a3, float a4)
{
  unsigned int v4; // r12
  float v5; // s2
  float v6; // s4
  float v7; // s6
  int v8; // r2
  _BYTE *i; // r0
  unsigned int v10; // lr
  float v11; // s12
  float v12; // s8

  v4 = FIELD_U32(a1, 160);
  if ( !v4 )
    return 0;
  v5 = a4 + a4;
  v6 = *a3;
  v7 = a3[1];
  v8 = 0;
  for ( i = (_BYTE *)(FIELD_U32(a1, 40) + 12); ; i += 28 )
  {
    v10 = *((unsigned __int16 *)i - 3);
    v11 = (float)*((unsigned __int16 *)i - 6) - a4;
    if ( v11 <= v6 && v6 <= (float)(v11 + (float)(v5 + (float)*((unsigned __int16 *)i - 4))) )
    {
      v12 = (float)(int)(v10 + *((unsigned __int16 *)i - 5)) + a4;
      if ( v7 >= (float)-v12 && v7 <= (float)((float)(v5 + (float)v10) - v12) )
        break;
    }
    if ( ++v8 >= v4 )
      return 0;
  }
  *a2 = *i;
  return 1;
}
