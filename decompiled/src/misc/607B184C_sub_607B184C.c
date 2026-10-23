/* sub_607B184C
 * address: 0x607B184C   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B184C(int a1)
{
  int v2; // r5
  int v3; // r1
  int v4; // r0
  int v5; // r2
  int v6; // r2

  v2 = 0;
  if ( !FIELD_U8(dword_60C9A1F0, 6536)
    && !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1064))(a1)
    && (FIELD_U8(a1, 6900) & 1) == 0
    && FIELD_F32(a1, 124) < 0.0
    && (FIELD_U8(a1, 6919) & 3) == 0
    && (FIELD_U8(a1, 6907) & 3) != 0 )
  {
    v3 = FIELD_U32(a1, 108);
    v4 = FIELD_U32(a1, 6968);
    FIELD_U32(a1, 112) = v4;
    v5 = FIELD_U32(a1, 116);
    FIELD_U32(a1, 584) = v3;
    FIELD_U32(a1, 588) = v4;
    FIELD_U32(a1, 592) = v5;
    FIELD_U32(a1, 608) = v3;
    FIELD_U32(a1, 612) = v4;
    FIELD_U32(a1, 616) = v5;
    if ( sub_6075EDF8(a1) )
      v6 = 6;
    else
      v6 = 5;
    Player_changeState(a1, (StateBase *)&dword_60CC508C, v6);
    return 1;
  }
  return v2;
}
