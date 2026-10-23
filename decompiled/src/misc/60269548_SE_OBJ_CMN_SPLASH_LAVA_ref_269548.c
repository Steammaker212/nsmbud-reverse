/* SE_OBJ_CMN_SPLASH_LAVA_ref_269548
 * address: 0x60269548   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_SPLASH_LAVA_ref_269548(int a1)
{
  float v2; // s4
  float v3; // s2
  int v4; // r0
  _BYTE *v5; // r5
  _BYTE *v6; // r6
  float v7; // r1
  float v8; // s2
  int v9; // r2
  int v10; // r3
  StageActor *v11; // r0
  int result; // r0
  float v13; // r1
  float v14; // s2
  int v15; // [sp+8h] [bp-20h] BYREF
  Vec2 a2; // [sp+Ch] [bp-1Ch] BYREF
  int v17; // [sp+14h] [bp-14h]

  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_U32(a1, 116);
  a2.x = v2 + 0.0;
  a2.y = v3 + 0.0;
  v17 = v4;
  ((void (__fastcall *)(int *, _DWORD, _DWORD, Vec2 *, _DWORD))physics_21893E8)(
    &v15,
    0,
    0,
    &a2,
    FIELD_U8(a1, 86));
  v5 = (_BYTE *)(a1 + 6971);
  if ( (unsigned int)(v15 - 3) <= 1 )
  {
    *v5 = 1;
    v6 = (_BYTE *)(a1 + 6972);
    if ( FIELD_U8(a1, 6972) == 1 )
      goto LABEL_14;
    v7 = FIELD_F32(a1, 108);
    a2.x = v7;
    a2.y = FIELD_F32(a1, 6936);
    v17 = 1170939904;
    v8 = FIELD_F32(dword_60CC6484, 112);
    if ( v7 < (float)(v8 + -128.0) || v7 > (float)((float)(v8 + FIELD_F32(dword_60CC6484, 104)) + 128.0) )
      goto LABEL_14;
    v9 = 826;
    v10 = 16;
    v11 = (StageActor *)a1;
    if ( !FIELD_U32(a1, 6948) )
      v9 = 658;
    goto LABEL_13;
  }
  *v5 = 0;
  v6 = (_BYTE *)(a1 + 6972);
  result = FIELD_U8(a1, 6972);
  if ( !FIELD_U8(a1, 6972) )
    return result;
  v13 = FIELD_F32(a1, 108);
  a2.x = v13;
  a2.y = FIELD_F32(a1, 6936);
  v17 = 1170939904;
  v14 = FIELD_F32(dword_60CC6484, 112);
  if ( v13 >= (float)(v14 + -128.0) && v13 <= (float)((float)(v14 + FIELD_F32(dword_60CC6484, 104)) + 128.0) )
  {
    v9 = 825;
    v10 = 17;
    v11 = (StageActor *)a1;
    if ( !FIELD_U32(a1, 6948) )
      v9 = 657;
LABEL_13:
    StageActor__createWaterSplash(v11, &a2, v9, v10, "SE_OBJ_CMN_SPLASH_LAVA");
  }
LABEL_14:
  result = (unsigned __int8)*v5;
  *v6 = result;
  return result;
}
