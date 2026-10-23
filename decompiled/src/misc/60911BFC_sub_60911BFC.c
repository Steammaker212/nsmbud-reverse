/* sub_60911BFC
 * address: 0x60911BFC   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60911BFC(int a1, int a2)
{
  int result; // r0
  void *v5; // r0
  float v6; // s0
  int v7; // r1
  int v8; // r2
  void *v9; // r0
  float32x2_t v10; // d0
  float v11; // s2
  float v12; // s3
  float32x2_t v13; // d2

  result = FIELD_U32(a1, 12);
  if ( !result )
  {
    result = FIELD_U32(a1, 8);
    if ( !result )
    {
      v5 = sub_608065A0();
      v6 = *((float *)v5 + 36);
      v7 = *((_DWORD *)v5 + 37);
      v8 = *((_DWORD *)v5 + 38);
      if ( v8 < v7 )
        v6 = *((float *)v5 + 35) + (float)((float)((float)v8 * (float)(v6 - *((float *)v5 + 35))) / (float)v7);
      FIELD_F32(a1, 16) = v6;
      v9 = sub_608065A0();
      v10.n64_u32[0] = 0;
      sub_608B6A64((int)v9, a2, v10, v11, v12, v13);
      sub_60912F50(a1, a2);
      FIELD_U32(a1, 8) = 1;
      return 1;
    }
  }
  return result;
}
