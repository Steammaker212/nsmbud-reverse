/* sub_603C100C
 * address: 0x603C100C   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603C100C(int a1, float a2)
{
  int v2; // r1
  bool v3; // zf
  float v4; // s2
  float v5; // s4
  int v6; // r1
  int v7; // r1
  bool v8; // zf
  float v9; // s2
  float v10; // s4
  int v11; // r1
  bool v12; // zf
  float v13; // s2
  float v14; // s4
  int v15; // r1
  bool v16; // zf

  v2 = FIELD_U32(PlayerMgr_instance, 32);
  v3 = v2 == 0;
  if ( v2 )
    v3 = (FIELD_U8(PlayerMgr_instance, 66) & 1) == 0;
  if ( v3
    || (v4 = FIELD_F32(v2, 108),
        v5 = FIELD_F32(v2, 572),
        v6 = 1,
        fabsf((float)(v4 + v5) - FIELD_F32(a1, 108)) >= a2) )
  {
    v7 = FIELD_U32(PlayerMgr_instance, 36);
    v8 = v7 == 0;
    if ( v7 )
      v8 = (FIELD_U8(PlayerMgr_instance, 66) & 2) == 0;
    if ( v8
      || (v9 = FIELD_F32(v7, 108),
          v10 = FIELD_F32(v7, 572),
          v6 = 1,
          fabsf((float)(v9 + v10) - FIELD_F32(a1, 108)) >= a2) )
    {
      v11 = FIELD_U32(PlayerMgr_instance, 40);
      v12 = v11 == 0;
      if ( v11 )
        v12 = (FIELD_U8(PlayerMgr_instance, 66) & 4) == 0;
      if ( v12
        || (v13 = FIELD_F32(v11, 108),
            v14 = FIELD_F32(v11, 572),
            v6 = 1,
            fabsf((float)(v13 + v14) - FIELD_F32(a1, 108)) >= a2) )
      {
        v15 = FIELD_U32(PlayerMgr_instance, 44);
        v16 = v15 == 0;
        if ( v15 )
          v16 = (FIELD_U8(PlayerMgr_instance, 66) & 8) == 0;
        if ( v16 )
          return 0;
        return fabsf((float)(FIELD_F32(v15, 108) + FIELD_F32(v15, 572)) - FIELD_F32(a1, 108)) < a2;
      }
    }
  }
  return v6;
}
