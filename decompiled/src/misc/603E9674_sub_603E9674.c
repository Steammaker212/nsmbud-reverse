/* sub_603E9674
 * address: 0x603E9674   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E9674(int a1)
{
  int result; // r0
  unsigned int v3; // r0
  int *v4; // r1
  int v5; // r4

  result = FIELD_U32(a1, 32);
  if ( result < 0 )
  {
    result = sub_603FBB80(dword_60C99DD4);
    if ( result == 1 )
    {
      result = 240;
      FIELD_U32(a1, 32) = 240;
    }
  }
  else if ( result )
  {
    FIELD_U32(a1, 32) = result - 1;
    switch ( result )
    {
      case 187:
        result = FIELD_U32(a1, 40);
        if ( result >= 4 )
        {
          v3 = FIELD_U32(a1, 56);
          if ( v3 >= 4 )
            v3 = 0;
          goto LABEL_27;
        }
        break;
      case 188:
      case 189:
      case 190:
      case 191:
      case 192:
      case 193:
      case 194:
      case 196:
      case 197:
      case 198:
      case 199:
      case 200:
      case 201:
      case 202:
      case 204:
      case 205:
      case 206:
      case 207:
      case 208:
      case 209:
      case 210:
        return result;
      case 195:
        result = FIELD_U32(a1, 40);
        if ( result >= 3 )
        {
          v3 = FIELD_U32(a1, 52);
          if ( v3 >= 4 )
            v3 = 0;
          goto LABEL_27;
        }
        break;
      case 203:
        result = FIELD_U32(a1, 40);
        if ( result >= 2 )
        {
          v3 = FIELD_U32(a1, 48);
          if ( v3 >= 4 )
            v3 = 0;
          goto LABEL_27;
        }
        break;
      case 211:
        result = FIELD_U32(a1, 40);
        if ( result >= 1 )
        {
          v3 = FIELD_U32(a1, 44);
          if ( v3 >= 4 )
            v3 = 0;
LABEL_27:
          v5 = *(_DWORD *)(PlayerMgr_instance + 4 * v3 + 32);
          sub_60768F28(v5, 191, 0);
          FIELD_U32(v5, 1208) |= 0x2000000u;
          result = sub_60773630(v5, 54, 0);
        }
        break;
      default:
        if ( result == 1 )
          goto LABEL_12;
        break;
    }
  }
  else
  {
LABEL_12:
    if ( FIELD_U32(a1, 36) > 3u )
      v4 = &dword_60C99940;
    else
      v4 = &dword_60C999A0;
    return (int)StateMgr__changeState((StateMgr *)(a1 + 108), (StateBase *)v4);
  }
  return result;
}
