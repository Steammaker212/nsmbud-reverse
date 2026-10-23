/* sub_60789778
 * address: 0x60789778   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60789778(int a1)
{
  int result; // r0
  int v3; // r5
  int v4; // r5
  int v5; // r5
  int v6; // r5

  result = FIELD_U32(AreaRumbleMgr_instance, 56);
  if ( (result & 0x38) == 0 )
  {
    FIELD_U8(a1, 177) = 0;
    return result;
  }
  if ( FIELD_U8(a1, 177) )
    goto LABEL_36;
  v3 = FIELD_U32(a1, 32);
  if ( v3 )
  {
    if ( (result & 0x20) != 0 )
    {
      result = FIELD_U32(v3, 1220) | 0x4000000;
      goto LABEL_11;
    }
    if ( (result & 8) != 0 || (result & 0x10) != 0 && (result = sub_607AF388(FIELD_U32(a1, 32)), result == 1) )
    {
      result = FIELD_U32(v3, 1220) | 0x8000000;
LABEL_11:
      FIELD_U32(v3, 1220) = result;
    }
  }
  v4 = FIELD_U32(a1, 36);
  if ( !v4 )
    goto LABEL_20;
  result = FIELD_U32(AreaRumbleMgr_instance, 56);
  if ( (result & 0x20) != 0 )
  {
    result = FIELD_U32(v4, 1220) | 0x4000000;
    goto LABEL_19;
  }
  if ( (result & 8) != 0 || (result & 0x10) != 0 && (result = sub_607AF388(FIELD_U32(a1, 36)), result == 1) )
  {
    result = FIELD_U32(v4, 1220) | 0x8000000;
LABEL_19:
    FIELD_U32(v4, 1220) = result;
  }
LABEL_20:
  v5 = FIELD_U32(a1, 40);
  if ( !v5 )
    goto LABEL_28;
  result = FIELD_U32(AreaRumbleMgr_instance, 56);
  if ( (result & 0x20) != 0 )
  {
    result = FIELD_U32(v5, 1220) | 0x4000000;
    goto LABEL_27;
  }
  if ( (result & 8) != 0 || (result & 0x10) != 0 && (result = sub_607AF388(FIELD_U32(a1, 40)), result == 1) )
  {
    result = FIELD_U32(v5, 1220) | 0x8000000;
LABEL_27:
    FIELD_U32(v5, 1220) = result;
  }
LABEL_28:
  v6 = FIELD_U32(a1, 44);
  if ( v6 )
  {
    result = FIELD_U32(AreaRumbleMgr_instance, 56);
    if ( (result & 0x20) != 0 )
    {
      result = FIELD_U32(v6, 1220) | 0x4000000;
    }
    else
    {
      if ( (result & 8) == 0 )
      {
        if ( (result & 0x10) == 0 )
          goto LABEL_36;
        result = sub_607AF388(FIELD_U32(a1, 44));
        if ( result != 1 )
          goto LABEL_36;
      }
      result = FIELD_U32(v6, 1220) | 0x8000000;
    }
    FIELD_U32(v6, 1220) = result;
  }
LABEL_36:
  FIELD_U8(a1, 177) = 1;
  return result;
}
