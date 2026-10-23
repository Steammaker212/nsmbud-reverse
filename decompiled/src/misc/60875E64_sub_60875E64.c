/* sub_60875E64
 * address: 0x60875E64   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60875E64(int a1, int a2, int32x4_t *a3, int a4)
{
  int v6; // r5
  int v7; // r0
  int v8; // r0
  char v9; // r1
  int32x4x2_t v10; // 0:q8.16,16:q9.16
  int32x4x2_t v11; // 0:q11.16,16:q10.16

  if ( FIELD_U8(a1, 10) )
  {
    v6 = 0;
    if ( (FIELD_U8(a1, 4) & 1) != 0 )
    {
      v7 = FIELD_U32(a1, 20);
      if ( FIELD_U8(a1, 9) )
      {
        v6 = 0;
        if ( v7 )
          v6 = v7 + 72 * (a4 + FIELD_U8(a1, 11) * a2);
      }
      else
      {
        if ( v7 )
          v7 += 72 * a4;
        v6 = v7;
      }
    }
    v8 = sub_608354C4(v6);
    v10 = vzipq_s32(*a3, a3[2]);
    v11 = vzipq_s32(a3[1], a3[3]);
    v9 = *(_BYTE *)(*(_DWORD *)a1 + 102);
    *(int32x4x2_t *)v8 = vzipq_s32(v10.val[0], v11.val[0]);
    *(int32x4_t *)(v8 + 32) = (int32x4_t)vzipq_s32(v10.val[1], v11.val[1]).val;
    FIELD_U8(v8, 49) = 0;
    FIELD_U8(v8, 48) = v9;
    FIELD_U8(v8, 51) = 0;
    FIELD_U8(v8, 50) = 0;
    qmemcpy((void *)(v8 + 64), *(const void **)(a1 + 40), FIELD_U32(a1, 44) & 0xFFFFFFFC);
    sub_608354E0(v6);
    nullsub_66();
  }
}
