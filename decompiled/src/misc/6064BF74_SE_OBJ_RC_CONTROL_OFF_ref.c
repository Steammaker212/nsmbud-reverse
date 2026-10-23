/* SE_OBJ_RC_CONTROL_OFF_ref
 * address: 0x6064BF74   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_RC_CONTROL_OFF_ref(int a1, int a2)
{
  bool v4; // nf
  int v5; // r1
  _WORD *v6; // r6
  int result; // r0
  float v8; // r1
  int v9; // r5
  Vec2 v10; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v4 = a2 < 0;
  v6 = (_WORD *)(a1 + 7344);
  v5 = FIELD_U16(a1, 7344);
  if ( !v4 && FIELD_U16(a1, 7344) )
  {
    if ( sub_6064D288(a1, (unsigned __int8)a2) == 1 )
    {
      *v6 = 0;
LABEL_8:
      FIELD_U32(a1, 7352) = 0;
      sub_603F01A0(dword_60C99D6C, a2, 12, 20);
      FIELD_U32(a1, 7408) = 0;
      v8 = FIELD_F32(a1, 112);
      v9 = Global_BasicSoundActor2;
      position.x = FIELD_F32(a1, 108);
      position.y = v8;
      mapPositionToScreen(&v10, &position);
      BasicSoundActor2_play(v9, "SE_OBJ_RC_CONTROL_OFF", &v10.x, 0);
      return 1;
    }
    v5 = (unsigned __int16)*v6;
  }
  result = 0;
  if ( v5 )
    return result;
  if ( a2 != -1 )
    goto LABEL_8;
  return 1;
}
