/* sub_607214B0
 * address: 0x607214B0   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607214B0(int a1)
{
  int v3; // [sp+0h] [bp-38h] BYREF
  int v4; // [sp+4h] [bp-34h]

  FIELD_U32(a1, 16) = off_60C21D84;
  agl_TextureData_ref(a1 + 24);
  agl_TextureData_ref(a1 + 296);
  agl_TextureData_ref(a1 + 568);
  agl_TextureData_ref(a1 + 840);
  FIELD_U32(a1, 1112) = 0;
  agl_TextureData_ref(a1 + 1120);
  agl_TextureData_ref(a1 + 1392);
  agl_TextureData_ref(a1 + 1664);
  agl_TextureData_ref(a1 + 1936);
  sub_6091ABEC(a1 + 2208);
  FIELD_U32(a1, 2552) = 0;
  sub_6091AC40(a1 + 2560);
  v3 = 1157627904;
  v4 = 1140850688;
  ((void (__fastcall *)(int, int *, float, float, float, float))loc_60919ED8)(a1 + 2904, &v3, 0.0, 0.0, 2048.0, 512.0);
  sub_6091ABEC(a1 + 2968);
  v3 = 1157627904;
  v4 = 1140850688;
  ((void (__fastcall *)(int, int *, float, float, float, float))loc_60919ED8)(a1 + 3312, &v3, 0.0, 0.0, 2048.0, 512.0);
  sub_6090C6DC(a1 + 3376);
  sub_6090A654((_DWORD *)(a1 + 3548));
  agl_TextureData_ref(a1 + 3640);
  agl_TextureData_ref(a1 + 3912);
  agl_TextureData_ref(a1 + 4184);
  agl_TextureData_ref(a1 + 4456);
  agl_TextureData_ref(a1 + 4728);
  agl_TextureData_ref(a1 + 5000);
  FIELD_U32(a1, 5284) = 0;
  FIELD_U32(a1, 5304) = 0;
  FIELD_U32(a1, 5324) = 0;
  FIELD_U32(a1, 5344) = 0;
  FIELD_U32(a1, 5364) = 0;
  FIELD_U32(a1, 5384) = 0;
  FIELD_U32(a1, 5404) = 0;
  FIELD_U32(a1, 5424) = 0;
  FIELD_U32(a1, 5444) = 0;
  sub_609394E8(a1 + 5456);
  FIELD_U8(a1, 5944) = 0;
  return a1;
}
