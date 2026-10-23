/* sub_605FB9DC
 * address: 0x605FB9DC   size: 596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605FB9DC(int a1)
{
  _DWORD *v2; // r7
  float v3; // s16
  float v4; // s24
  int v5; // r9
  unsigned int U32; // r0
  float v7; // s16
  float v8; // s24
  int v9; // r5
  unsigned int v10; // r0
  int v11; // r2

  FIELD_U32(a1, 6064) = sub_607180AC(TileMgr_instance);
  v2 = (_DWORD *)(a1 + 6064);
  sub_6023349C(dword_60C8D904, a1 + 108);
  sub_60718110(
    TileMgr_instance,
    0,
    FIELD_U8(a1, 6064),
    -24,
    (float)(FIELD_F32(a1, 108) + -8.0) + -16.0,
    FIELD_F32(a1, 112),
    300.0);
  sub_60718110(
    TileMgr_instance,
    1,
    FIELD_U8(a1, 6064),
    -8,
    FIELD_F32(a1, 108) + -8.0,
    FIELD_F32(a1, 112),
    300.0);
  sub_60718110(
    TileMgr_instance,
    2,
    FIELD_U8(a1, 6064),
    8,
    FIELD_F32(a1, 108) + 8.0,
    FIELD_F32(a1, 112),
    300.0);
  sub_60718110(
    TileMgr_instance,
    4,
    FIELD_U8(a1, 6064),
    24,
    (float)(FIELD_F32(a1, 108) + 8.0) + 16.0,
    FIELD_F32(a1, 112),
    300.0);
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_F32(a1, 108);
  v5 = TileMgr_instance;
  U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
  sub_60718198(
    v5,
    (unsigned __int8)(int)(float)((float)(COERCE_FLOAT((U32 >> 9) | 0x3F800000) + -1.0) * 2.99),
    FIELD_U8(a1, 6064),
    -8,
    v4 + -8.0,
    v3,
    400.0);
  v7 = FIELD_F32(a1, 112);
  v8 = FIELD_F32(a1, 108);
  v9 = TileMgr_instance;
  v10 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
  sub_60718198(
    v9,
    (unsigned __int8)(int)(float)((float)(COERCE_FLOAT((v10 >> 9) | 0x3F800000) + -1.0) * 2.99),
    FIELD_U8(a1, 6064),
    8,
    v8 + 8.0,
    v7,
    400.0);
  if ( (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 7) == 0 )
    sub_60716978(
      TileMgr_instance,
      0,
      *(unsigned __int8 *)v2,
      -8,
      FIELD_F32(a1, 108) + -8.0,
      FIELD_F32(a1, 112) + 40.0,
      400.0);
  FIELD_U32(a1, 116) = -987594752;
  if ( FIELD_F32(a1, 112) < -500.0 )
    v11 = 3;
  else
    v11 = 2;
  sub_60718420(TileMgr_instance, (unsigned __int8)*v2, v11, FIELD_F32(a1, 108));
  return 1;
}
