/* sub_607A40F8
 * address: 0x607A40F8   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A40F8(int a1)
{
  _BYTE *v2; // r5
  float v3; // s16
  int v4; // r6
  int v5; // r5
  int v6; // r0
  float v7; // r1
  float v8; // s0

  FIELD_U32(a1, 1204) |= 0x2000u;
  FIELD_U32(a1, 1224) &= ~0x100000u;
  FIELD_U32(a1, 9716) = 30;
  FIELD_U32(a1, 80) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 96) = 0;
  v2 = (_BYTE *)(a1 + 9764);
  if ( FIELD_U8(a1, 9764)
    && (sub_6078A030((_DWORD *)PlayerMgr_instance) != 4
     || FIELD_U32(a1, 1320) == 3
     || (float)(COERCE_FLOAT((sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 9) | 0x3F800000) + -1.0) < 0.5) )
  {
    *v2 = 0;
  }
  v3 = FIELD_F32(a1, 108);
  v4 = FIELD_U32(a1, 112);
  v5 = sub_6078A030((_DWORD *)PlayerMgr_instance);
  FIELD_F32(a1, 12036) = (float)(v3 + (float)((float)(v5 - 1) * 12.0))
                         + (float)((float)sub_60778454((_DWORD *)dword_60CBFA90, FIELD_S8(a1, 84)) * -24.0);
  FIELD_U32(a1, 12040) = v4;
  v6 = FIELD_U32(a1, 116);
  v7 = FIELD_F32(a1, 112) + 192.0;
  v8 = FIELD_F32(a1, 108) + -48.0;
  if ( (unsigned __int8)(FIELD_U8(LevelInfo_instance, 16) - 5) <= 1u && FIELD_U8(LevelInfo_instance, 17) == 22 )
    v7 = (float)(FIELD_F32(a1, 112) + 192.0) + 16.0;
  FIELD_F32(a1, 108) = v8;
  FIELD_F32(a1, 112) = v7;
  FIELD_F32(a1, 584) = v8;
  FIELD_F32(a1, 588) = v7;
  FIELD_U32(a1, 592) = v6;
  FIELD_F32(a1, 608) = v8;
  FIELD_F32(a1, 612) = v7;
  FIELD_U32(a1, 616) = v6;
  sub_607780C4(dword_60CBFA90, 1);
  return sub_60777C68(dword_60CBFA90);
}
