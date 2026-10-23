/* sub_605023E8
 * address: 0x605023E8   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605023E8(int a1)
{
  int result; // r0
  float v3; // s2
  int v4; // r2
  unsigned int v5; // r0

  if ( FIELD_U8(a1, 1043) || !FIELD_U8(dword_60CC6D78, 20) && FIELD_S32(a1, 1036) <= 22 && !FIELD_U8(a1, 1054) )
    return sub_6047E518(a1 + 40, 0, 0, (int)&dword_60B3B944);
  if ( FIELD_U8(a1, 1047) )
    return sub_6047E518(a1 + 40, FIELD_U8(a1, 1050), FIELD_U8(a1, 1049), a1 + 1020);
  v3 = FIELD_F32(a1, 376) + -360.0;
  FIELD_F32(a1, 1020) = FIELD_F32(a1, 372) + -640.0;
  FIELD_F32(a1, 1024) = -v3;
  v4 = (FIELD_U32(a1, 100) >> 12) & 1;
  FIELD_U8(a1, 1049) = (FIELD_U32(a1, 100) & 0x1000) != 0;
  v5 = FIELD_U32(a1, 368);
  FIELD_U8(a1, 1050) = (v5 & 0x1000) != 0;
  if ( (v5 & 0x1000) != 0 && !FIELD_U8(a1, 1051) )
  {
    v4 = 1;
    FIELD_U8(a1, 1051) = 1;
    FIELD_U8(a1, 1049) = 1;
  }
  sub_6047E518(a1 + 40, (v5 >> 12) & 1, v4, a1 + 1020);
  result = FIELD_U8(a1, 93);
  if ( !FIELD_U8(a1, 93) )
  {
    result = FIELD_U32(a1, 68);
    if ( result )
    {
      result = FIELD_U8(a1, 1046);
      if ( !FIELD_U8(a1, 1046) )
      {
        result = FIELD_U8(a1, 1049);
        if ( FIELD_U8(a1, 1049) )
        {
          FIELD_U8(a1, 1046) = 1;
          return (int)StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA76DC);
        }
      }
    }
  }
  return result;
}
