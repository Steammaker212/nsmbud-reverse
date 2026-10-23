/* Actor_CSW5Boo_build
 * address: 0x6020E36C   size: 232   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_CSW5Boo_build(unsigned __int8 *a1)
{
  int v2; // r4

  v2 = operator_new(0x1D8u);
  sub_6018668C(v2, a1);
  *(_DWORD *)v2 = off_60BD8DA8;
  FIELD_U32(v2, 380) = 0;
  FIELD_U32(v2, 384) = 0;
  FIELD_U32(v2, 388) = 0;
  FIELD_U32(v2, 392) = 0;
  FIELD_U32(v2, 396) = 0;
  FIELD_U32(v2, 400) = 0;
  FIELD_U32(v2, 412) = 0;
  FIELD_U32(v2, 408) = 0;
  FIELD_U32(v2, 404) = 0;
  FIELD_U32(v2, 416) = 0;
  FIELD_U32(v2, 420) = 17;
  FIELD_U8(v2, 424) = 0;
  FIELD_U32(v2, 456) = 0;
  FIELD_U32(v2, 452) = 0;
  FIELD_U32(v2, 448) = 0;
  FIELD_U32(v2, 444) = 0;
  FIELD_U32(v2, 440) = 0;
  FIELD_U32(v2, 436) = 0;
  FIELD_U32(v2, 432) = 0;
  FIELD_U32(v2, 428) = 0;
  FIELD_U32(v2, 460) = 2;
  FIELD_U32(v2, 464) = 0;
  FIELD_U8(v2, 468) = 0;
  FIELD_U8(v2, 469) = 0;
  FIELD_U32(v2, 128) = 1077936128;
  FIELD_U32(v2, 132) = 1077936128;
  FIELD_U32(v2, 136) = 1077936128;
  FIELD_U32(v2, 432) = (10000 * (unsigned __int64)sead__Random__getU32((void *)sead__GlobalRandom__sInstance)) >> 32;
  FIELD_U32(v2, 204) = 0;
  FIELD_U32(v2, 208) = 0;
  return v2;
}
