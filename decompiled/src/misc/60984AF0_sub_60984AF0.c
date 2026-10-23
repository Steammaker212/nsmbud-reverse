/* sub_60984AF0
 * address: 0x60984AF0   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60984AF0(float32x4_t *a1, int a2, int a3, int a4, float32x2_t a5)
{
  unsigned __int32 v9; // r3
  unsigned __int32 v10; // r1
  unsigned int v11; // r0
  unsigned int v12; // r2

  v9 = a1[17].n128_u32[1];
  v10 = a1[17].n128_u32[0];
  if ( v9 )
  {
    v11 = FIELD_U32(v10, 44);
    v12 = a1[17].n128_u32[2];
    if ( v9 == 1 )
    {
      if ( v12 >= v11 )
        goto LABEL_8;
      if ( v12 + 1 >= v11 )
      {
        a1[17].n128_u32[1] = 2;
        a1[17].n128_u32[2] = FIELD_U32(v10, 44);
        a1[13].n128_u16[4] |= 4u;
        goto LABEL_8;
      }
    }
    else if ( v12 >= v11 )
    {
      goto LABEL_8;
    }
  }
  sub_60984B90(a1, v10);
LABEL_8:
  if ( a1[17].n128_u32[1] != 2 )
    FIELD_U8(a3, 28) = 1;
  return sub_6085DB04(a1, a2, a3, a4, a5);
}
