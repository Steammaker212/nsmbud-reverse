/* sub_602C22A8
 * address: 0x602C22A8   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C22A8(int a1, float a2)
{
  __int16 v2; // lr
  float v3; // s2
  float v4; // s2
  int v5; // r12
  bool v6; // zf
  int v7; // r1
  bool v8; // zf
  int v9; // r1
  bool v10; // zf
  int v11; // r3
  int v12; // r1
  bool v13; // zf
  bool v14; // zf
  float v15; // s0
  int v16; // r1
  bool v17; // zf
  int v18; // r1
  bool v19; // zf
  int v21; // r2
  bool v22; // zf

  if ( FIELD_U8(a1, 6475) )
    v3 = FIELD_F32(a1, 6352);
  else
    v3 = 96.0;
  v4 = v3 + a2;
  v5 = FIELD_U32(PlayerMgr_instance, 32);
  v6 = v5 == 0;
  if ( v5 )
  {
    v2 = FIELD_U16(PlayerMgr_instance, 66);
    v6 = (v2 & 1) == 0;
  }
  if ( !v6 && fabsf(FIELD_F32(v5, 108) - FIELD_F32(a1, 108)) < v4 )
    goto LABEL_42;
  v7 = FIELD_U32(PlayerMgr_instance, 36);
  v8 = v7 == 0;
  if ( v7 )
  {
    v2 = FIELD_U16(PlayerMgr_instance, 66);
    v8 = (v2 & 2) == 0;
  }
  if ( !v8 && fabsf(FIELD_F32(v7, 108) - FIELD_F32(a1, 108)) < v4 )
    goto LABEL_42;
  v9 = FIELD_U32(PlayerMgr_instance, 40);
  v10 = v9 == 0;
  if ( v9 )
  {
    v2 = FIELD_U16(PlayerMgr_instance, 66);
    v10 = (v2 & 4) == 0;
  }
  if ( !v10 && fabsf(FIELD_F32(v9, 108) - FIELD_F32(a1, 108)) < v4 )
    goto LABEL_42;
  v11 = FIELD_U32(PlayerMgr_instance, 44);
  v12 = 0;
  v13 = v11 == 0;
  if ( v11 )
  {
    v2 = FIELD_U16(PlayerMgr_instance, 66);
    v13 = (v2 & 8) == 0;
  }
  if ( !v13 && fabsf(FIELD_F32(v11, 108) - FIELD_F32(a1, 108)) < v4 )
  {
LABEL_42:
    v12 = 1;
    if ( FIELD_U8(a1, 6476) )
    {
      v14 = v5 == 0;
      if ( v5 )
        v14 = (v2 & 1) == 0;
      v15 = FIELD_F32(a1, 6356) + a2;
      if ( !v14 && fabsf(FIELD_F32(v5, 112) - FIELD_F32(a1, 112)) < v15 )
        return 1;
      v16 = FIELD_U32(PlayerMgr_instance, 36);
      v17 = v16 == 0;
      if ( v16 )
        v17 = (v2 & 2) == 0;
      if ( !v17 && fabsf(FIELD_F32(v16, 112) - FIELD_F32(a1, 112)) < v15 )
        return 1;
      v18 = FIELD_U32(PlayerMgr_instance, 40);
      v19 = v18 == 0;
      if ( v18 )
        v19 = (v2 & 4) == 0;
      if ( !v19 && fabsf(FIELD_F32(v18, 112) - FIELD_F32(a1, 112)) < v15 )
        return 1;
      v21 = FIELD_U32(PlayerMgr_instance, 44);
      v12 = 0;
      v22 = v21 == 0;
      if ( v21 )
        v22 = (v2 & 8) == 0;
      if ( !v22 && fabsf(FIELD_F32(v21, 112) - FIELD_F32(a1, 112)) < v15 )
        return 1;
    }
  }
  return v12;
}
