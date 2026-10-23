/* sub_607A4AA8
 * address: 0x607A4AA8   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A4AA8(int a1)
{
  int result; // r0
  int *v3; // r6
  int v4; // r5

  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 104) = 0;
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 124) = 0;
  v3 = (int *)(a1 + 9704);
  result = FIELD_U32(a1, 9704);
  switch ( result )
  {
    case 0:
      result = dword_60CBFA90;
      if ( FIELD_U8(dword_60CBFA90, 448) )
      {
        result = sub_607782F4((_DWORD *)dword_60CBFA90);
        if ( result == FIELD_S8(a1, 84) )
        {
          v4 = sub_6077832C(dword_60CBFA90);
          if ( v4 != sub_608FBB8C(FIELD_U16(PlayerMgr_instance, 66)) )
            FIELD_U32(a1, 9712) = 25;
          result = 1;
          goto LABEL_9;
        }
      }
      break;
    case 1:
      result = FIELD_U32(a1, 9712);
      if ( !result )
      {
        result = 2;
LABEL_9:
        *v3 = result;
      }
      break;
    case 2:
      FIELD_U32(a1, 1236) |= 0x8000u;
      result = FIELD_U8(a1, 1211);
      if ( (result & 4) != 0 )
        goto LABEL_16;
      break;
    case 3:
      sub_607612CC(a1, 0);
      result = dword_60C9CF0C;
      if ( FIELD_S8(dword_60C9CF0C, 1404) >= 0 )
      {
        result = FIELD_U8(dword_60C9CF0C, 1406);
        if ( !FIELD_U8(dword_60C9CF0C, 1406) )
        {
          result = FIELD_U32(a1, 9712);
          if ( !result )
          {
LABEL_16:
            sub_60778334((_DWORD *)dword_60CBFA90);
            result = (int)sub_60766314(a1, &stru_60CBF37C, 0);
          }
        }
      }
      break;
    default:
      return result;
  }
  return result;
}
