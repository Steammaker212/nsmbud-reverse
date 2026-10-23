/* sub_606F2E40
 * address: 0x606F2E40   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606F2E40(int a1)
{
  int v1; // r12
  int v2; // r2
  Vec3 v4; // [sp+4h] [bp-14h] BYREF

  v4.x = FIELD_F32(dword_60CC6484, 116);
  v4.y = FIELD_F32(dword_60CC6484, 128);
  v4.z = 9000.0;
  v1 = FIELD_U32(a1, 20);
  v2 = v1 & 3;
  FIELD_U32(a1, 6168) = v2;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  if ( FIELD_U8(dword_60CC6D8C, 17) && (v1 & 0xF0) == 0x10 )
  {
    FIELD_U32(a1, 144) = 1067030938;
    FIELD_U32(a1, 148) = 1067030938;
    FIELD_U32(a1, 152) = 1067030938;
  }
  if ( v2 == 2 )
  {
    EffectWrapper_update((EffectWrapper *)(a1 + 6064), 752, &v4, 0, (Vec3 *)(a1 + 144));
  }
  else if ( v2 == 1 )
  {
    EffectWrapper_update((EffectWrapper *)(a1 + 6064), 751, &v4, 0, (Vec3 *)(a1 + 144));
  }
  else if ( (v1 & 3) != 0 )
  {
    v4.y = FIELD_F32(TileMgr_instance, 24);
    EffectWrapper_update((EffectWrapper *)(a1 + 6064), 753, &v4, 0, (Vec3 *)(a1 + 144));
  }
  else
  {
    EffectWrapper_update((EffectWrapper *)(a1 + 6064), 411, &v4, 0, (Vec3 *)(a1 + 144));
  }
  return 1;
}
