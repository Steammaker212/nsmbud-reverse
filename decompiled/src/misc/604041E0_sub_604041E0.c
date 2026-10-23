/* sub_604041E0
 * address: 0x604041E0   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604041E0(int a1)
{
  float v2; // s0
  float v3; // s4
  int result; // r0
  float v5; // s0
  float v6; // s2
  int v7; // r3
  int v8; // r1

  FIELD_F32(a1, 380) = FIELD_F32(a1, 380) + FIELD_F32(a1, 440);
  FIELD_F32(a1, 384) = FIELD_F32(a1, 384) + FIELD_F32(a1, 444);
  FIELD_F32(a1, 388) = FIELD_F32(a1, 388) + FIELD_F32(a1, 448);
  SE_SYS_PLY_FOOTNOTE_ref(a1);
  v2 = FIELD_F32(a1, 420);
  v3 = FIELD_F32(a1, 444);
  result = (int)(float)(v2 - FIELD_F32(a1, 384));
  if ( v3 < 0.0 )
  {
    if ( result < 1 )
      goto LABEL_7;
LABEL_6:
    result = 0;
    FIELD_F32(a1, 384) = v2;
    FIELD_U32(a1, 444) = 0;
    goto LABEL_7;
  }
  if ( v3 > 0.0 && result < 0 )
    goto LABEL_6;
LABEL_7:
  v5 = FIELD_F32(a1, 380);
  v6 = FIELD_F32(a1, 416);
  if ( FIELD_F32(a1, 440) >= 0.0 )
  {
    if ( v5 < v6 )
      return result;
  }
  else if ( v5 > v6 )
  {
    return result;
  }
  v7 = FIELD_U32(a1, 420);
  v8 = FIELD_U32(a1, 424);
  FIELD_U32(a1, 380) = FIELD_U32(a1, 416);
  FIELD_U32(a1, 384) = v7;
  FIELD_U32(a1, 388) = v8;
  FIELD_U8(a1, 2691) = 1;
  FIELD_U8(a1, 2690) = 0;
  (*(void (__fastcall **)(_DWORD, _DWORD, float, float, float))(**(_DWORD **)(FIELD_U32(a1, 16) + 4) + 84))(
    *(_DWORD *)(FIELD_U32(a1, 16) + 4),
    0,
    1.2,
    0.0,
    0.0);
  return (int)StateMgr__changeState((StateMgr *)(a1 + 40), (StateBase *)&dword_60C99F1C);
}
