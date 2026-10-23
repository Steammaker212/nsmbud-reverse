/* sub_602A1F74
 * address: 0x602A1F74   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602A1F74(int a1, float a2, float a3)
{
  int v3; // r1
  bool v4; // zf
  float v5; // s4
  int v6; // r1
  int v7; // r1
  bool v8; // zf
  float v9; // s4
  int v10; // r1
  bool v11; // zf
  float v12; // s4
  int v13; // r1
  bool v14; // zf

  v3 = FIELD_U32(PlayerMgr_instance, 32);
  v4 = v3 == 0;
  if ( v3 )
    v4 = (FIELD_U8(PlayerMgr_instance, 66) & 1) == 0;
  if ( v4
    || fabsf(FIELD_F32(v3, 108) - FIELD_F32(a1, 108)) >= a2
    || (v5 = FIELD_F32(v3, 112), v6 = 1, fabsf(v5 - FIELD_F32(a1, 112)) >= a3) )
  {
    v7 = FIELD_U32(PlayerMgr_instance, 36);
    v8 = v7 == 0;
    if ( v7 )
      v8 = (FIELD_U8(PlayerMgr_instance, 66) & 2) == 0;
    if ( v8
      || fabsf(FIELD_F32(v7, 108) - FIELD_F32(a1, 108)) >= a2
      || (v9 = FIELD_F32(v7, 112), v6 = 1, fabsf(v9 - FIELD_F32(a1, 112)) >= a3) )
    {
      v10 = FIELD_U32(PlayerMgr_instance, 40);
      v11 = v10 == 0;
      if ( v10 )
        v11 = (FIELD_U8(PlayerMgr_instance, 66) & 4) == 0;
      if ( v11
        || fabsf(FIELD_F32(v10, 108) - FIELD_F32(a1, 108)) >= a2
        || (v12 = FIELD_F32(v10, 112), v6 = 1, fabsf(v12 - FIELD_F32(a1, 112)) >= a3) )
      {
        v13 = FIELD_U32(PlayerMgr_instance, 44);
        v14 = v13 == 0;
        if ( v13 )
          v14 = (FIELD_U8(PlayerMgr_instance, 66) & 8) == 0;
        if ( !v14 && fabsf(FIELD_F32(v13, 108) - FIELD_F32(a1, 108)) < a2 )
          return fabsf(FIELD_F32(v13, 112) - FIELD_F32(a1, 112)) < a3;
        return 0;
      }
    }
  }
  return v6;
}
