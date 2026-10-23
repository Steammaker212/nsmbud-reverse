/* sub_60234DE0
 * address: 0x60234DE0   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60234DE0(int a1)
{
  unsigned int result; // r0
  int v3; // r1
  int v4; // r0
  bool v5; // cc
  _DWORD *v6; // r0
  int v7; // r1
  unsigned int v8; // r2
  unsigned int v9; // r0

  result = FIELD_U32(a1, 44) + 1;
  FIELD_U32(a1, 44) = result;
  if ( !FIELD_U8(a1, 10) )
  {
    v3 = FIELD_U32(a1, 52);
    if ( v3 == -1 )
    {
      FIELD_U32(a1, 56) = 0;
      switch ( FIELD_U32(a1, 40) )
      {
        case 0:
          if ( (FIELD_U8(dword_60C9CF0C, 1361) & 1) != 0 || result >= FIELD_U32(a1, 48) )
            break;
          return result;
        case 1:
          if ( (FIELD_U8(dword_60C9CF0C, 1361) & 1) != 0 || result >= FIELD_U32(a1, 48) )
            break;
          return result;
        case 2:
        case 3:
          if ( result >= FIELD_U32(a1, 48) )
            goto LABEL_23;
          return result;
        case 4:
          if ( (FIELD_U8(dword_60C9CF0C, 1361) & 1) != 0 )
            break;
          v6 = *(_DWORD **)(a1 + 4);
          v7 = v6[3];
          v8 = v6[2];
          v9 = v6[17];
          if ( v8 > v9 )
            v7 += 4 * v9;
          result = *(unsigned __int8 *)(*(_DWORD *)v7 + 28);
          if ( (result & 0x20) == 0 )
            return result;
LABEL_23:
          sead__Random__getU32((void *)sead__GlobalRandom__sInstance);
          break;
        default:
          return result;
      }
    }
    else
    {
      v4 = FIELD_U32(a1, 56);
      v5 = v4 <= 1;
      result = v4 - 1;
      FIELD_U32(a1, 56) = result;
      if ( !v5 )
        return result;
      if ( (v3 & 0xFFFFFFFE) != 2 )
      {
        FIELD_U32(a1, 52) = -1;
        return -1;
      }
    }
    JUMPOUT(0x60234958);
  }
  return result;
}
