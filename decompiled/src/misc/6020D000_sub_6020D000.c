/* sub_6020D000
 * address: 0x6020D000   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6020D000(int a1)
{
  float v2; // s0
  float v3; // s2
  float v4; // s4
  int v5; // lr
  int v6; // r12
  int v7; // r3
  _DWORD *v8; // r2
  signed int v10; // [sp+0h] [bp-10h] BYREF
  signed int v11; // [sp+4h] [bp-Ch] BYREF

  ((void (*)(void))loc_60168DF8)();
  v2 = FIELD_F32(a1, 84);
  if ( FIELD_F32(a1, 204) < 0.0 )
  {
    v3 = FIELD_F32(a1, 384);
    if ( v2 < v3 )
    {
      v2 = FIELD_F32(a1, 384);
      FIELD_U32(a1, 204) = 0;
      FIELD_U32(a1, 120) = 0;
      FIELD_F32(a1, 84) = v3;
    }
  }
  v4 = FIELD_F32(a1, 88) - FIELD_F32(a1, 400);
  if ( sqrtf(
         (float)((float)((float)(v2 - FIELD_F32(a1, 396)) * (float)(v2 - FIELD_F32(a1, 396)))
               + (float)((float)(FIELD_F32(a1, 80) - FIELD_F32(a1, 392))
                       * (float)(FIELD_F32(a1, 80) - FIELD_F32(a1, 392))))
       + (float)(v4 * v4)) < 50.0 )
  {
    v5 = FIELD_U32(a1, 444);
    v6 = dword_60C8A8C0;
    FIELD_U32(a1, 248) = *(_DWORD *)(*(_DWORD *)(FIELD_U32(dword_60C8A8C0, 44) + 4 * v5) + 96);
    v7 = v5 + 1;
    FIELD_U32(a1, 444) = v5 + 1;
    if ( v5 >= FIELD_U32(v6, 176) )
      v7 = 0;
    FIELD_U32(a1, 444) = v7;
    v8 = *(_DWORD **)(FIELD_U32(v6, 44) + 4 * v7);
    FIELD_U32(a1, 392) = v8[18];
    FIELD_U32(a1, 396) = v8[19];
    FIELD_U32(a1, 400) = v8[20];
  }
  FIELD_U32(a1, 428) = sub_608332B0(a1 + 80, a1 + 392);
  v11 = 59652322;
  v10 = 47721857;
  return sub_608322C0((int *)(a1 + 192), (int *)(a1 + 428), &v11, &v10);
}
