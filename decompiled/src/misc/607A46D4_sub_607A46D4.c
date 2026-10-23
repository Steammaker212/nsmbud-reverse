/* sub_607A46D4
 * address: 0x607A46D4   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A46D4(int a1)
{
  float v2; // s16
  int v3; // r6
  int v4; // r5
  float v5; // s2
  float v6; // s0
  float v7; // s2
  float v8; // r0
  float v10[13]; // [sp+4h] [bp-34h] BYREF

  FIELD_U32(a1, 1224) &= ~0x100000u;
  FIELD_U32(a1, 9716) = 30;
  FIELD_U32(a1, 80) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 96) = 0;
  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_U32(a1, 112);
  v4 = sub_6078A030((_DWORD *)PlayerMgr_instance);
  FIELD_F32(a1, 12036) = (float)((float)(v2 + 128.0) + (float)((float)(v4 - 1) * 12.0))
                         + (float)((float)sub_60778454((_DWORD *)dword_60CBFA90, FIELD_S8(a1, 84)) * -24.0);
  FIELD_U32(a1, 12040) = v3;
  sub_607780C4(dword_60CBFA90, 1);
  v5 = FIELD_F32(a1, 108);
  v6 = FIELD_F32(dword_60CC6484, 112);
  if ( v5 >= v6 )
  {
    v6 = FIELD_F32(a1, 108);
    if ( v5 > FIELD_F32(dword_60CC6484, 120) )
      v6 = FIELD_F32(dword_60CC6484, 120);
  }
  v7 = FIELD_F32(a1, 112);
  v8 = FIELD_F32(a1, 116);
  v10[0] = v6;
  v10[1] = v7 + 8.0;
  v10[2] = v8;
  return sub_60766B08((_DWORD *)a1, (int)v10);
}
