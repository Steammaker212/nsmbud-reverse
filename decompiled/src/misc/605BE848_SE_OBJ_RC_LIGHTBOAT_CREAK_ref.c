/* SE_OBJ_RC_LIGHTBOAT_CREAK_ref
 * address: 0x605BE848   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_RC_LIGHTBOAT_CREAK_ref(unsigned __int8 *a1, char a2, float *a3)
{
  unsigned __int8 *v6; // r7
  int v7; // r5
  float v8; // r1
  Vec2 v10; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v6 = a1;
  if ( !sub_605BE6BC(a1) )
    goto LABEL_17;
  v6 = a1 + 3;
  if ( !sub_605BE6BC(a1 + 3) )
    goto LABEL_17;
  v6 = a1 + 6;
  if ( !sub_605BE6BC(a1 + 6) )
    goto LABEL_17;
  v6 = a1 + 9;
  if ( !sub_605BE6BC(a1 + 9) )
    goto LABEL_17;
  v6 = a1 + 12;
  if ( !sub_605BE6BC(a1 + 12) )
    goto LABEL_17;
  v6 = a1 + 15;
  if ( !sub_605BE6BC(a1 + 15) )
    goto LABEL_17;
  v6 = a1 + 18;
  if ( !sub_605BE6BC(a1 + 18) )
    goto LABEL_17;
  v6 = a1 + 21;
  if ( !sub_605BE6BC(a1 + 21) )
    goto LABEL_17;
  v6 = a1 + 24;
  if ( !sub_605BE6BC(a1 + 24)
    || (v6 = a1 + 27, !sub_605BE6BC(a1 + 27))
    || (v6 = a1 + 30, !sub_605BE6BC(a1 + 30))
    || (v6 = a1 + 33, !sub_605BE6BC(a1 + 33))
    || (v6 = a1 + 36, !sub_605BE6BC(a1 + 36))
    || (v6 = a1 + 39, !sub_605BE6BC(a1 + 39))
    || (v6 = a1 + 42, !sub_605BE6BC(a1 + 42))
    || (v6 = a1 + 45, !sub_605BE6BC(a1 + 45)) )
  {
LABEL_17:
    sub_605BE6E4(v6, a2);
  }
  v7 = Global_BasicSoundActor2;
  v8 = a3[1];
  position.x = *a3;
  position.y = v8;
  mapPositionToScreen(&v10, &position);
  return BasicSoundActor2_play(v7, "SE_OBJ_RC_LIGHTBOAT_CREAK", &v10.x, 0);
}
