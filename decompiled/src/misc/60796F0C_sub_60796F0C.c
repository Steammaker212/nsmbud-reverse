/* sub_60796F0C
 * address: 0x60796F0C   size: 684   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60796F0C(int a1)
{
  int v2; // r6
  int result; // r0
  int v4; // r5
  int v5; // r0
  int v6; // r1
  bool v7; // zf
  int v8; // r1
  int v9; // r1
  int v10; // r1
  int v11; // r0

  v2 = a1 + 11360;
  *(_DWORD *)(FIELD_U32(a1, 11360) + 208) &= 0xFFFF9FFF;
  *(_DWORD *)(FIELD_U32(a1, 11360) + 208) &= ~0x8000u;
  *(_DWORD *)(FIELD_U32(a1, 11360) + 208) &= ~0x10000u;
  result = FIELD_S8(a1, 84);
  if ( (FIELD_U32(PlayerMgr_instance, 140) & (1 << result)) == 0 )
  {
    v4 = sub_607B7028(a1);
    if ( v4 )
    {
      v5 = *(_DWORD *)v2;
      v6 = *(_DWORD *)(*(_DWORD *)v2 + 28);
      if ( (unsigned int)(v6 - 20) >= 2 )
      {
        v7 = v6 == 143;
        if ( v6 != 143 )
        {
          v6 = FIELD_U32(v4, 648);
          v7 = v6 == 0;
        }
        if ( !v7 )
        {
          switch ( *(_DWORD *)(FIELD_U32(v6, 4) + 28) )
          {
            case 0x73:
              v8 = FIELD_U32(v5, 208);
              if ( FIELD_U32(v4, 80) )
                goto LABEL_14;
              v9 = v8 | 0x2000;
              goto LABEL_15;
            case 0x8D:
            case 0x9E:
              goto LABEL_12;
            case 0x8E:
            case 0x9F:
              goto LABEL_13;
            default:
              break;
          }
        }
      }
    }
    else if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1064))(a1) )
    {
      v5 = *(_DWORD *)v2;
      v10 = *(_DWORD *)(*(_DWORD *)v2 + 28);
      switch ( v10 )
      {
        case 141:
        case 158:
LABEL_12:
          v9 = FIELD_U32(v5, 208) | 0x2000;
          goto LABEL_15;
        case 142:
        case 159:
LABEL_13:
          v8 = FIELD_U32(v5, 208);
LABEL_14:
          v9 = v8 | 0x4000;
          goto LABEL_15;
        case 143:
        case 144:
        case 145:
        case 146:
        case 147:
        case 148:
        case 149:
        case 150:
        case 151:
        case 152:
        case 153:
        case 154:
        case 155:
        case 156:
        case 157:
          break;
        default:
          if ( v10 || (FIELD_U8(a1, 1219) & 1) == 0 )
            break;
          FIELD_U32(v5, 208) |= ((FIELD_U32(a1, 160) >> 18) & 0x2000) + 0x2000;
          v5 = *(_DWORD *)v2;
          v9 = *(_DWORD *)(*(_DWORD *)v2 + 208) | 0x8000;
LABEL_15:
          FIELD_U32(v5, 208) = v9;
          break;
      }
    }
    result = *(unsigned __int8 *)(*(_DWORD *)v2 + 209);
    if ( (result & 0x60) != 0 )
    {
      if ( v4 )
        v11 = v4;
      else
        v11 = a1;
      result = sub_60764308(v11);
      if ( result == 1 )
      {
        result = *(_DWORD *)v2;
        *(_DWORD *)(*(_DWORD *)v2 + 208) |= 0x10000u;
      }
    }
  }
  return result;
}
