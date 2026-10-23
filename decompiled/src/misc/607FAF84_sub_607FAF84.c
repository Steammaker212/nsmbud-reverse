/* sub_607FAF84
 * address: 0x607FAF84   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FAF84(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  float v6; // s0
  int result; // r0

  v2 = FIELD_U32(a1, 16);
  if ( v2 >= 1 )
  {
    v3 = v2 - 1;
    FIELD_U32(a1, 16) = v3;
    if ( !v3 )
    {
      FIELD_U32(a1, 24) = 0;
      if ( FIELD_S32(a1, 20) >= 1 )
      {
        FIELD_U32(a1, 20) = 0;
        if ( AreaRumbleMgr_instance )
          FIELD_U32(AreaRumbleMgr_instance, 36) = 0;
      }
    }
  }
  v4 = FIELD_U32(a1, 20);
  if ( v4 >= 1 )
  {
    if ( v4 == 1 )
    {
      FIELD_U32(a1, 20) = 0;
      if ( AreaRumbleMgr_instance )
        FIELD_U32(AreaRumbleMgr_instance, 36) = 0;
    }
    else
    {
      FIELD_U32(a1, 20) = v4 - 1;
    }
  }
  v5 = FIELD_U32(a1, 24);
  if ( v5 >= 1 )
    FIELD_U32(a1, 24) = v5 - 1;
  v6 = FIELD_F32(a1, 4);
  if ( FIELD_F32(a1, 8) >= v6 )
  {
    result = FIELD_U8(a1, 28);
    if ( FIELD_U8(a1, 28) )
    {
      FIELD_U8(a1, 28) = 0;
      FIELD_U32(a1, 16) = 300;
      FIELD_U32(a1, 24) = 0;
      result = AreaRumbleMgr_instance;
      if ( AreaRumbleMgr_instance )
        goto LABEL_19;
    }
  }
  else
  {
    FIELD_F32(a1, 8) = v6;
    WSD_BGM_SPEED_UP_ref(dword_60C99DD4, v6 == 2.4);
    result = FIELD_U8(a1, 28);
    if ( FIELD_U8(a1, 28) )
    {
      FIELD_U8(a1, 28) = 0;
      FIELD_U32(a1, 16) = 300;
      FIELD_U32(a1, 24) = 0;
      result = AreaRumbleMgr_instance;
      if ( AreaRumbleMgr_instance )
      {
LABEL_19:
        FIELD_U32(a1, 20) = 0;
        return AreaRumbleMgr_rumble(result, 3, 2, 0, 0);
      }
    }
  }
  return result;
}
