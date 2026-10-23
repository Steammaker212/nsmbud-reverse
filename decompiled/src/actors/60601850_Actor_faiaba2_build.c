/* Actor_faiaba2_build
 * address: 0x60601850   size: 220   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_faiaba2_build(int a1)
{
  int v2; // r4
  int v3; // r5
  int v4; // r6

  v2 = operator_new(0x8560u);
  sub_60602934(v2, a1);
  *(_DWORD *)v2 = off_60C0EAC8;
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 27192));
  FIELD_U32(v2, 27192) = off_60BC6E38;
  v3 = 0;
  FIELD_U32(v2, 27208) = 0;
  FIELD_U32(v2, 27212) = 0;
  FIELD_U32(v2, 27224) = 0;
  FIELD_U32(v2, 27216) = 0;
  FIELD_U32(v2, 27220) = 0;
  v4 = v2 + 27484;
  do
  {
    EffectWrapper_ctor((EffectWrapper *)(v4 + v3));
    *(_DWORD *)(v4 + v3) = off_60BC1450;
    v3 += 104;
  }
  while ( v3 != 6656 );
  memset((void *)(v2 + 27228), 0, 256);
  FIELD_U32(v2, 6152) = 1008981770;
  return v2;
}
