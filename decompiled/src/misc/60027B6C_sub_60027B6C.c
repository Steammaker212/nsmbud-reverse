/* sub_60027B6C
 * address: 0x60027B6C   size: 652   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60027B6C(int a1)
{
  signed int result; // r0
  signed int *v3; // r6
  int v4; // r5
  int v5; // r0
  int v6; // r0
  signed int *v7; // r4
  int v8; // t1
  bool v9; // cc

  v3 = (signed int *)(a1 + 6108);
  result = FIELD_U32(a1, 6108);
  v4 = dword_60CBFA90;
  switch ( result )
  {
    case 0:
      result = sub_608FBB8C(FIELD_U16(PlayerMgr_instance, 66));
      if ( result >= 1 )
      {
        sub_6077A268(dword_60CBFA90);
        if ( FIELD_U32(dword_60C99DD4, 764) == 1 )
        {
          v5 = dword_60C99D88;
          FIELD_U32(dword_60C99D88, 32) = 1;
          FIELD_U8(v5, 31) = 0;
        }
        result = 1;
        goto LABEL_28;
      }
      break;
    case 1:
      result = sub_6077A918(dword_60CBFA90, 1);
      if ( result == 1 )
      {
        result = 2;
        goto LABEL_28;
      }
      break;
    case 2:
      result = FIELD_U8(a1, 6103);
      if ( FIELD_U8(a1, 6103) )
      {
        result = 3;
        goto LABEL_28;
      }
      break;
    case 3:
      if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 0)
        || PlayerMgr_hasPlayer(PlayerMgr_instance, 1u)
        || PlayerMgr_hasPlayer(PlayerMgr_instance, 2u)
        || (result = PlayerMgr_hasPlayer(PlayerMgr_instance, 3u), result == 1) )
      {
        result = sub_6077A918(v4, 3);
        if ( result == 1 )
        {
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 268))(a1);
          FIELD_U32(a1, 6116) = 260;
          result = 4;
          goto LABEL_28;
        }
      }
      break;
    case 4:
      v8 = FIELD_U32(a1, 6116);
      v7 = (signed int *)(a1 + 6116);
      v6 = v8;
      if ( !v8 || (v9 = v6 <= 1, result = v6 - 1, *v7 = result, v9) )
      {
        result = sub_607798D0(v4);
        if ( !result )
        {
          sub_6000A60C();
          sub_603FBC00(dword_60C99DD4);
          result = 5;
          goto LABEL_28;
        }
      }
      break;
    case 5:
      if ( FIELD_U32(dword_60C99DD4, 764) > 1u || (result = sub_603FBC08(dword_60C99DD4), result == 1) )
      {
        result = 6;
        goto LABEL_28;
      }
      break;
    case 6:
      if ( (FIELD_U8(dword_60CC6D78, 44) & 1) != 0
        && !sub_6019B154(FIELD_U8(LevelInfo_instance, 16), FIELD_U8(LevelInfo_instance, 17)) )
      {
        sub_603F472C(AreaTask_intance);
      }
      result = 7;
LABEL_28:
      *v3 = result;
      break;
    case 7:
      sub_60027500();
      result = sub_603F48B0(AreaTask_intance);
      break;
    default:
      return result;
  }
  return result;
}
