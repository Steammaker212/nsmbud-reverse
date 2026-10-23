/* sub_60201744
 * address: 0x60201744   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60201744(int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r4
  int v5; // r0
  bool v6; // zf
  int v7; // r1

  result = FIELD_U32(a1, 344);
  switch ( result )
  {
    case 0:
      result = FIELD_U32(a1, 352) - 1;
      FIELD_U32(a1, 352) = result;
      if ( !result )
      {
        v3 = FIELD_U32(a1, 180) / -10;
        FIELD_U32(a1, 352) = 10;
        FIELD_U32(a1, 356) = v3;
        FIELD_U32(a1, 344) = 1;
        result = 1;
      }
      break;
    case 1:
      FIELD_U32(a1, 180) += FIELD_U32(a1, 356);
      result = FIELD_U32(a1, 352) - 1;
      FIELD_U32(a1, 352) = result;
      if ( !result )
      {
        FIELD_U32(a1, 352) = 1;
        FIELD_U32(a1, 344) = 2;
        result = 2;
      }
      break;
    case 2:
      result = FIELD_U32(a1, 352) - 1;
      FIELD_U32(a1, 352) = result;
      if ( !result )
      {
        FIELD_U32(a1, 340) = 1;
        FIELD_U32(a1, 352) = 60;
        FIELD_U32(a1, 320) = 1086324736;
        v4 = a1 + 320;
        FIELD_U32(v4, 4) = 131082;
        *(_DWORD *)(*(_DWORD *)(v4 - 4) + 16) = v4;
        sub_601DFF20(*(_DWORD *)(v4 - 4), 0, 0, -1);
        FIELD_U32(v4, 24) = 3;
        result = sub_601E4C88((_DWORD *)dword_60C8B13C, 186, (_DWORD *)(v4 - 240));
      }
      break;
    case 3:
      sub_601DFE2C(FIELD_U32(a1, 316));
      result = FIELD_U32(a1, 352) - 1;
      FIELD_U32(a1, 352) = result;
      if ( !result )
      {
        FIELD_U32(a1, 344) = 4;
        result = 4;
      }
      break;
    case 4:
      FIELD_U32(a1, 340) = 0;
      FIELD_U32(a1, 368) = -715827883;
      v5 = (unsigned __int64)(1717986919LL * (sub_608FBB48(0.0) - 0x40000000)) >> 32;
      FIELD_U32(a1, 352) = 20;
      FIELD_U32(a1, 356) = (v5 >> 3) + ((unsigned int)v5 >> 31);
      FIELD_U32(a1, 344) = 5;
      result = 5;
      break;
    case 5:
      result = FIELD_U32(a1, 356) + FIELD_U32(a1, 180);
      FIELD_U32(a1, 180) = result;
      v6 = (FIELD_U32(a1, 352))-- == 1;
      v7 = FIELD_U32(a1, 368);
      if ( v6 || result <= v7 )
      {
        FIELD_U32(a1, 180) = v7;
        FIELD_U32(a1, 352) = 1;
        FIELD_U32(a1, 344) = 6;
        result = 6;
      }
      break;
    case 6:
      result = FIELD_U32(a1, 352) - 1;
      FIELD_U32(a1, 352) = result;
      if ( !result )
      {
        StateMgr__changeState((StateMgr *)(a1 + 300), (StateBase *)&dword_60C8C338);
        FIELD_U8(a1, 372) = 1;
        result = 1;
      }
      break;
    default:
      return result;
  }
  return result;
}
