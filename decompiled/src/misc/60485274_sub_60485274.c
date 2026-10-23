/* sub_60485274
 * address: 0x60485274   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60485274(int a1)
{
  int v2; // r4
  _DWORD *v3; // r0

  v2 = dword_60C9F2CC;
  if ( !dword_60C9F2CC )
  {
    v2 = operator_new_8DE2C8(0x264u, a1, 4);
    v3 = sead__IDisposer__ctor((_DWORD *)(v2 + 496), a1, 3u);
    FIELD_U32(v2, 496) = off_60BFD6E0;
    dword_60C9F2C8 = (int)v3;
    sub_604DE8F8(v2);
    *(_DWORD *)v2 = off_60BFD6F0;
    FIELD_U32(v2, 512) = &off_60BFD744;
    FIELD_U32(v2, 516) = &off_60BFD754;
    FIELD_U32(v2, 520) = &off_60BFD778;
    FIELD_U32(v2, 524) = v2;
    FIELD_U32(v2, 528) = 0;
    StateMgr_ctor((StateMgr *)(v2 + 532), (StateExecuter *)(v2 + 516), (StateBase *)&dword_60C9F300);
    FIELD_U32(v2, 512) = &off_60BFD734;
    FIELD_U8(v2, 596) = 1;
    FIELD_U8(v2, 597) = 0;
    FIELD_U8(v2, 598) = 0;
    FIELD_U32(v2, 600) = 0;
    dword_60C9F2CC = v2;
  }
  return v2;
}
