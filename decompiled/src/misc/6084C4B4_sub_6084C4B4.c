/* sub_6084C4B4
 * address: 0x6084C4B4   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6084C4B4(int a1, int a2, int *a3)
{
  int v4; // r4
  int v5; // r4
  int v6; // r5
  float v7; // s16
  float v8; // s0
  int v9; // r6
  int v10; // r7
  float v11; // s0

  if ( a2 == 9 )
  {
    v9 = *a3;
    v4 = 1;
    v10 = *(_DWORD *)(*a3 + 68);
    if ( v10 >= 1 )
    {
      if ( FIELD_U8(v9, 48) )
        v11 = FIELD_F32(v9, 32);
      else
        v11 = sub_60849C18(*a3);
      FIELD_F32(v9, 20) = *((float *)a3 + 3)
                          + (float)((float)((float)v10 * v11)
                                  * (float)((int)(float)((float)(FIELD_F32(v9, 20) - *((float *)a3 + 3))
                                                       / (float)((float)v10 * v11))
                                          + 1));
    }
  }
  else
  {
    v4 = 0;
    if ( a2 == 10 )
    {
      v5 = *a3;
      v6 = a3[3];
      v7 = *(float *)(*a3 + 24);
      v8 = sub_6084CAA8(*a3);
      FIELD_U32(v5, 20) = v6;
      FIELD_F32(v5, 24) = v7 + v8;
      return 3;
    }
  }
  return v4;
}
