/* sub_602FA0D4
 * address: 0x602FA0D4   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602FA0D4(int result, int a2)
{
  _DWORD *v2; // r4
  int v3; // r5
  int *v4; // r6
  int v5; // r0
  _DWORD *v6; // r6
  int v7; // r1
  int v8; // r0

  v2 = (_DWORD *)result;
  if ( a2 == 1 )
  {
    result = 6448;
    v3 = v2[1612];
    switch ( v3 )
    {
      case 0:
      case 3:
      case 4:
        goto LABEL_3;
      case 1:
        v4 = v2 + 1621;
        result = ((int (__fastcall *)(_DWORD *, _DWORD))loc_602FABD8)(v2, v2[1621]);
        if ( result != 1 )
          return result;
        result = *v4;
        if ( (unsigned int)*v4 < 4 )
          return result;
        goto LABEL_3;
      case 2:
        v6 = v2 + 1614;
        v5 = v2[1614];
        v7 = **(_DWORD **)(v2[1576] + 20);
        if ( v5 && (v8 = v5 - 1, (*v6 = v8) != 0) )
        {
          FIELD_U32(v7, 24) = 0;
          sub_6041838C((ModelAnimation *)(v7 + 4));
        }
        else
        {
          FIELD_U32(v7, 24) = 1065353216;
          result = FIELD_U8(v7, 28);
          if ( (result & 0x24) == 0 )
            return result;
          FIELD_U32(v7, 24) = 0;
          *v6 = (150 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32;
        }
LABEL_3:
        result = 6452;
        if ( v3 != v2[1613] )
          result = sub_602FA5DC(v2);
        break;
      default:
        return result;
    }
  }
  return result;
}
