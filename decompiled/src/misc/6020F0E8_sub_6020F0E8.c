/* sub_6020F0E8
 * address: 0x6020F0E8   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6020F0E8(int a1)
{
  int v2; // r5
  int v3; // r0
  __int64 v4; // r0
  float v5; // s0
  int *v6; // r0
  int v7; // r0
  unsigned int U32; // r0

  v2 = 0;
  FIELD_U8(a1, 216) &= ~2u;
  FIELD_U32(a1, 436) = FIELD_U32(a1, 440);
  sub_60210A38(a1, 0);
  v3 = sub_608332B0(a1 + 80, a1 + 404);
  FIELD_U32(a1, 192) = v3;
  FIELD_U32(a1, 180) = v3;
  if ( FIELD_U8(a1, 468) )
  {
    LODWORD(v4) = 1077936128;
    v5 = 3.0;
    v2 = 3;
    FIELD_U32(a1, 200) = 1077936128;
  }
  else
  {
    v6 = (int *)sub_601DFFE4(a1 + 300);
    v7 = sub_601693DC(903, v6[21], v6[22], v6[24]);
    sub_60204DB8(v7, 15, 0, 1.0, 1.0);
    FIELD_U32(a1, 200) = 0;
    U32 = sead__Random__getU32((void *)sead__GlobalRandom__sInstance);
    v5 = 0.0;
    v4 = 5LL * U32;
    FIELD_U32(a1, 416) = HIDWORD(v4);
  }
  FIELD_U32(a1, 420) = v2;
  FIELD_F32(a1, 128) = v5;
  FIELD_F32(a1, 132) = v5;
  FIELD_F32(a1, 136) = v5;
  return v4;
}
