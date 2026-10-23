/* sub_60466C54
 * address: 0x60466C54   size: 616   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60466C54(int a1)
{
  int v2; // r6
  char v3; // r5
  int result; // r0

  sub_60461A1C(a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  sub_604615BC(a1);
  sub_6046313C(a1);
  sub_60463584(a1);
  if ( FIELD_U8(a1, 6255) && FIELD_F32(a1, 124) < 0.0 )
    FIELD_U32(a1, 124) = 1082130432;
  v2 = 0;
  if ( FIELD_U8(a1, 6197) )
    goto LABEL_22;
  FIELD_U8(a1, 6059) = FIELD_U32(a1, 2872) & 1;
  v3 = CollisionActor__sub_600034C8((CollisionActor *)a1);
  sub_60003840(a1);
  nullsub_21();
  v2 = 0;
  if ( (v3 & 1) != 0 )
  {
    if ( sub_6046287C(a1) == 1 )
    {
      sub_60462A58(a1);
      v2 = 0;
      FIELD_U32(a1, 124) = 1082130432;
      if ( FIELD_U32(a1, 6172) == 1 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 340))(a1);
        v2 = 0;
        FIELD_U32(a1, 6172) = 2;
      }
    }
    else
    {
      if ( FIELD_U32(a1, 6180) == 8 )
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 340))(a1);
      if ( FIELD_U32(a1, 6172) == 1 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 340))(a1);
        FIELD_U32(a1, 6172) = 2;
      }
      if ( FIELD_U8(a1, 6196) || (v2 = 1, !FIELD_U32(a1, 6192)) )
      {
        sub_60462A58(a1);
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 208))(a1);
        v2 = 1;
      }
    }
  }
  FIELD_U8(a1, 6196) = 0;
  if ( (v3 & 4) != 0 )
  {
    FIELD_U32(a1, 80) = FIELD_U8(a1, 80) ^ 1;
    FIELD_F32(a1, 120) = -FIELD_F32(a1, 120);
    if ( FIELD_U32(a1, 6168) == 8 )
      ((void (__fastcall *)(int))loc_60463C60)(a1);
  }
  if ( (v3 & 2) != 0 )
    FIELD_U32(a1, 124) = -1082130432;
  result = sub_60462BB8((StageActor *)a1);
  if ( !result )
  {
LABEL_22:
    FIELD_F32(a1, 116) = sub_60462B7C(a1);
    SE_OBJ_CMN_SPLASH_ref_462370(a1);
    if ( FIELD_U32(a1, 6180) == 13 && FIELD_F32(a1, 124) <= 0.0 )
    {
      sub_60463178(a1);
      FIELD_U32(a1, 6180) = 1;
    }
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 224))(a1);
    result = ((int (__fastcall *)(int))loc_60463884)(a1);
    FIELD_U32(a1, 6192) = v2;
  }
  return result;
}
