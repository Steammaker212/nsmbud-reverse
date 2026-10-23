/* sub_605D828C
 * address: 0x605D828C   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605D828C(int a1)
{
  int v2; // r0
  _DWORD *v3; // r5
  int v4; // r0
  float v5; // s0
  float v6; // s16

  sub_605E66FC();
  sub_605E084C(a1);
  sub_605E3980(a1);
  if ( (FIELD_U8(a1, 6265) & 0x20) == 0 )
  {
    v3 = (_DWORD *)(a1 + 8004);
    v2 = FIELD_U32(a1, 8004);
    if ( v2 )
      *v3 = v2 - 1;
    v4 = FIELD_U32(a1, 6804);
    if ( (v4 & 5) != 5 )
      goto LABEL_11;
    v5 = FIELD_F32(a1, 120);
    v6 = -2.0;
    if ( v5 >= -2.0 )
    {
      v6 = FIELD_F32(a1, 120);
      if ( v5 > 2.0 )
        v6 = 2.0;
    }
    if ( (v4 & 1) != 0 && !sub_605DBD64(a1) && (FIELD_U16(a1, 6260) & 0x802) == 0 )
    {
      FIELD_F32(a1, 120) = v6;
      FIELD_U32(a1, 124) = 1085276160;
      FIELD_U32(a1, 128) = 0;
      FIELD_U32(a1, 8000) = 1;
      *v3 = 0;
      FIELD_U32(a1, 8008) = 0;
      StateMgr__changeState((StateMgr *)(a1 + 6292), &stru_60CB16FC);
    }
    else
    {
LABEL_11:
      sub_605E5644(a1);
    }
  }
  return StateMgr__execute((StateMgr *)(a1 + 6292));
}
