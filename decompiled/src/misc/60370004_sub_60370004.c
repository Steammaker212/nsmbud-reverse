/* sub_60370004
 * address: 0x60370004   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60370004(int a1)
{
  int v1; // r1
  __int16 v2; // r3
  bool v3; // zf
  float v4; // s2
  float v5; // s4
  bool v6; // zf
  float v7; // s2
  float v8; // s4
  bool v9; // zf
  float v10; // s2
  float v11; // s4
  bool v12; // zf

  v1 = (int)&PlayerMgr_instance;
  v2 = FIELD_U16(PlayerMgr_instance, 66);
  v3 = (v2 & 1) == 0;
  if ( (v2 & 1) != 0 )
  {
    v1 = FIELD_U32(PlayerMgr_instance, 32);
    v3 = v1 == 0;
  }
  if ( v3
    || FIELD_U8(v1, 86) != FIELD_U8(a1, 86)
    || fabsf((float)(FIELD_F32(v1, 108) + FIELD_F32(v1, 572)) - FIELD_F32(a1, 108)) > 48.0
    || (v4 = FIELD_F32(v1, 112),
        v5 = FIELD_F32(v1, 576),
        v1 = 1,
        fabsf((float)(v4 + v5) - FIELD_F32(a1, 112)) > 48.0) )
  {
    v6 = (v2 & 2) == 0;
    if ( (v2 & 2) != 0 )
    {
      v1 = FIELD_U32(PlayerMgr_instance, 36);
      v6 = v1 == 0;
    }
    if ( v6
      || FIELD_U8(v1, 86) != FIELD_U8(a1, 86)
      || fabsf((float)(FIELD_F32(v1, 108) + FIELD_F32(v1, 572)) - FIELD_F32(a1, 108)) > 48.0
      || (v7 = FIELD_F32(v1, 112),
          v8 = FIELD_F32(v1, 576),
          v1 = 1,
          fabsf((float)(v7 + v8) - FIELD_F32(a1, 112)) > 48.0) )
    {
      v9 = (v2 & 4) == 0;
      if ( (v2 & 4) != 0 )
      {
        v1 = FIELD_U32(PlayerMgr_instance, 40);
        v9 = v1 == 0;
      }
      if ( v9
        || FIELD_U8(v1, 86) != FIELD_U8(a1, 86)
        || fabsf((float)(FIELD_F32(v1, 108) + FIELD_F32(v1, 572)) - FIELD_F32(a1, 108)) > 48.0
        || (v10 = FIELD_F32(v1, 112),
            v11 = FIELD_F32(v1, 576),
            v1 = 1,
            fabsf((float)(v10 + v11) - FIELD_F32(a1, 112)) > 48.0) )
      {
        v12 = (v2 & 8) == 0;
        if ( (v2 & 8) != 0 )
        {
          v1 = FIELD_U32(PlayerMgr_instance, 44);
          v12 = v1 == 0;
        }
        if ( !v12
          && FIELD_U8(v1, 86) == FIELD_U8(a1, 86)
          && fabsf((float)(FIELD_F32(v1, 108) + FIELD_F32(v1, 572)) - FIELD_F32(a1, 108)) <= 48.0 )
        {
          return fabsf((float)(FIELD_F32(v1, 112) + FIELD_F32(v1, 576)) - FIELD_F32(a1, 112)) <= 48.0;
        }
        return 0;
      }
    }
  }
  return v1;
}
