/* sub_607D8938
 * address: 0x607D8938   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D8938(int a1, _DWORD *a2, int a3, char a4, float a5, char a6, unsigned int a7, __int16 a8)
{
  StateMgr *v13; // r8
  int v14; // r4
  _DWORD *Area; // r5
  unsigned __int8 *v16; // r0
  bool v17; // zf
  int v18; // r0
  int v19; // r0
  bool v20; // cc

  v13 = (StateMgr *)(a1 + 20);
  StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&dword_60CC56B4);
  v14 = 0;
  FIELD_U32(a1, 36) = 0;
  FIELD_U32(a1, 40) = 0;
  FIELD_U32(a1, 44) = 1008981770;
  FIELD_U32(a1, 48) = 0;
  FIELD_U32(a1, 52) = 0;
  FIELD_U32(a1, 56) = *a2;
  FIELD_U32(a1, 60) = a2[1];
  FIELD_U32(a1, 80) = 0;
  FIELD_U32(a1, 76) = 0;
  FIELD_U32(a1, 72) = 0;
  FIELD_U32(a1, 68) = 0;
  FIELD_U32(a1, 64) = 0;
  FIELD_F32(a1, 84) = a5;
  FIELD_U16(a1, 88) = 0;
  FIELD_U32(a1, 90) = (unsigned __int16)a7;
  FIELD_U16(a1, 94) = a8;
  FIELD_U16(a1, 96) = a7;
  FIELD_U8(a1, 98) = a4;
  FIELD_U8(a1, 99) = 1;
  FIELD_U8(a1, 100) = 0;
  FIELD_U8(a1, 101) = a6;
  Area = (_DWORD *)Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
  v16 = sub_60727908((int)Area, a3);
  v17 = v16 == 0;
  if ( v16 )
  {
    v18 = *((unsigned __int16 *)v16 + 2);
    FIELD_U16(a1, 88) = v18;
    v17 = v18 == 0;
  }
  if ( !v17 )
  {
    v19 = sub_60727950(Area, a3);
    v20 = v19 != 0;
    if ( v19 )
    {
      FIELD_U32(a1, 36) = v19;
      v20 = FIELD_U16(a1, 88) > a7;
    }
    if ( v20 )
    {
      FIELD_U32(a1, 40) = v19 + 20 * a7;
      StateMgr__changeState(v13, (StateBase *)&dword_60CC56D4);
      return 1;
    }
  }
  return v14;
}
