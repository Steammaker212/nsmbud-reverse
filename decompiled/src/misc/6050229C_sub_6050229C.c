/* sub_6050229C
 * address: 0x6050229C   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6050229C(int a1)
{
  unsigned int v2; // r0
  int result; // r0
  float v4; // s2
  int v5; // r1
  int v6; // r2

  if ( FIELD_U8(a1, 1040) )
  {
    if ( !FIELD_U8(a1, 1047) )
      StateMgr__execute((StateMgr *)(a1 + 24));
    sub_605023E8(a1);
    if ( FIELD_U8(a1, 1052) )
      goto LABEL_18;
    v2 = FIELD_U32(a1, 1028);
    if ( v2 == 256 )
      goto LABEL_9;
    if ( v2 >= 0x100 )
      v2 = 0;
    if ( (*(_DWORD *)(a1 + 4 * v2 + 1056) | 2) == 2 )
    {
LABEL_9:
      if ( FIELD_U32(a1, 48) != 3 )
      {
LABEL_18:
        result = FIELD_U8(a1, 1053);
        if ( !FIELD_U8(a1, 1053) )
        {
          FIELD_U8(a1, 1053) = 1;
          return 1;
        }
        return result;
      }
    }
    else if ( sub_6047F230(a1 + 40) != 1 )
    {
      goto LABEL_18;
    }
    FIELD_U8(a1, 1052) = 1;
    goto LABEL_18;
  }
  result = FIELD_U8(a1, 1041);
  if ( FIELD_U8(a1, 1041) )
  {
    if ( FIELD_U8(dword_60CC6D78, 20) && !FIELD_U8(a1, 1043) )
    {
      v4 = FIELD_F32(a1, 376) + -360.0;
      FIELD_F32(a1, 1020) = FIELD_F32(a1, 372) + -640.0;
      FIELD_F32(a1, 1024) = -v4;
      v5 = (FIELD_U32(a1, 100) >> 12) & 1;
      FIELD_U8(a1, 1049) = (FIELD_U32(a1, 100) & 0x1000) != 0;
      v6 = (FIELD_U32(a1, 368) >> 12) & 1;
      FIELD_U8(a1, 1050) = (FIELD_U32(a1, 368) & 0x1000) != 0;
      FIELD_U8(a1, 1046) = v6;
      return sub_6047E518(a1 + 40, v5, v6, a1 + 1020);
    }
    else
    {
      return sub_6047E518(a1 + 40, 0, 0, (int)&dword_60B3B944);
    }
  }
  return result;
}
