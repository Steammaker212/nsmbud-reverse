/* sub_603C8CA4
 * address: 0x603C8CA4   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603C8CA4(int a1)
{
  int v2; // r5

  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 104) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = 0;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 11884) = 3;
  FIELD_U32(a1, 11868) = -1;
  FIELD_U32(a1, 11872) = -1;
  FIELD_U32(a1, 11876) = 0;
  if ( FIELD_U32(a1, 6300) == 1 )
  {
    FIELD_U32(a1, 11864) = -1;
  }
  else
  {
    v2 = **(_DWORD **)(FIELD_U32(a1, 6308) + 20);
    FIELD_U32(a1, 11864) = 0;
    TexAnim_play(v2, FIELD_U32(a1, 6304), &dword_60C98AF0);
    AnimationCtrl_setRepeat((ModelAnimation *)(v2 + 4), dword_60C98AF8);
    if ( (float)(FIELD_F32(v2, 24) * 0.0) < 0.0 )
      sub_6041838C((ModelAnimation *)(v2 + 4));
    FIELD_U32(v2, 24) = 0;
    FIELD_U32(v2, 20) = 0;
    FIELD_U32(v2, 28) |= 2u;
  }
  FIELD_U8(a1, 6056) = 1;
  FIELD_U32(a1, 11912) = 6;
  return 11912;
}
