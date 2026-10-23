/* sub_6067F45C
 * address: 0x6067F45C   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067F45C(int a1, float *a2, int a3)
{
  int *v3; // r7
  int v6; // r8
  unsigned int v7; // r4
  float v9; // [sp+4h] [bp-34h] BYREF
  float v10; // [sp+8h] [bp-30h]
  float v11; // [sp+Ch] [bp-2Ch]
  float v12; // [sp+10h] [bp-28h]

  v3 = (int *)a1;
  v6 = 1;
  v7 = FIELD_U8(a1, 3049);
  if ( v7 >= 8 )
    v7 = 8;
  if ( v7 )
  {
    while ( 1 )
    {
      v9 = 3.4028e38;
      v10 = 3.4028e38;
      v11 = -3.4028e38;
      v12 = -3.4028e38;
      sub_6067D628(*v3, &v9, a3);
      if ( v9 <= a2[2] && *a2 <= v11 && v10 <= a2[3] && a2[1] <= v12 )
        break;
      ++v3;
      if ( !--v7 )
        return v6;
    }
    return 0;
  }
  return v6;
}
