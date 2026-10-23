/* RollingHill_onExecute
 * address: 0x60609FA4   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall RollingHill_onExecute(int a1)
{
  int v2; // r0
  int v3; // r0
  _BOOL4 v4; // r1
  int v5; // r5

  v2 = FIELD_U32(a1, 1068);
  if ( v2 )
  {
    v3 = v2 - 1;
    v4 = v3 == 0;
    FIELD_U32(a1, 1068) = v3;
  }
  else
  {
    v4 = 1;
  }
  v5 = (int)(float)((float)FIELD_S32(a1, 1056)
                  + (float)(FIELD_F32(a1, 1072) * (float)(FIELD_U32(a1, 1076) - FIELD_U32(a1, 1056))));
  if ( v4 )
    ((void (__fastcall *)(float, float, float, float))loc_60832560)(0.0, 0.01, 0.01, 0.0001);
  if ( FIELD_U32(a1, 80) )
    v5 = -v5;
  FIELD_U32(a1, 164) += v5;
  StageActor__cullCheck((StageActor *)a1, 16);
  if ( !FIELD_U8(a1, 1048) )
  {
    ((void (__fastcall *)(int))loc_6060A088)(a1);
    FIELD_U32(a1, 0x37C) = FIELD_U32(a1, 0xA4);
    CircularCollider_execute(a1 + 0x288);
    SE_OBJ_CMN_TOUCH_MOVE_LV_ref(a1);
    RollingHill_updateModel((RollingHill *)a1);
  }
  return 1;
}
