/* sub_60409DE4
 * address: 0x60409DE4   size: 780   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60409DE4(int a1)
{
  int result; // r0
  _BYTE *v3; // r5
  unsigned int v4; // r0
  _DWORD *v5; // r2
  char v6; // r3
  bool v7; // zf
  unsigned int v8; // r0
  int v9; // r1
  int v10; // r6
  _BYTE *v11; // r4
  int v12; // t1
  _DWORD *v13; // r2

  v3 = (_BYTE *)(a1 + 6559);
  result = FIELD_U8(a1, 6559);
  if ( result == 1 )
  {
    result = a1 + 6541;
    if ( FIELD_U8(a1, 6541) )
    {
      *(_BYTE *)result = 0;
      return result;
    }
    result = FIELD_U8(a1, 6476);
    if ( !FIELD_U8(a1, 6554) )
    {
      switch ( FIELD_U8(a1, 6476) )
      {
        case 0:
          result = FIELD_U8(a1, 6478);
          if ( result == 12 )
            goto LABEL_50;
          return result;
        case 1:
          if ( FIELD_U8(a1, 6535) )
          {
            v4 = FIELD_U32(dword_60C99DD4, 724);
            goto LABEL_15;
          }
          result = a1 + 6478;
          v9 = FIELD_U8(a1, 6478);
          switch ( v9 )
          {
            case 6:
              break;
            case 5:
              if ( !FIELD_U8(a1, 6543) )
              {
                result = FIELD_U8(a1, 6544);
                if ( !FIELD_U8(a1, 6544) )
                  return result;
              }
              break;
            case 1:
              v10 = FIELD_U8(a1, 6479);
              if ( v10 < sub_60006500(dword_60C7B3F8, 504) )
                goto LABEL_50;
              break;
            default:
              return result;
          }
          v8 = FIELD_U32(dword_60C99DD4, 724);
          goto LABEL_46;
        case 3:
          if ( FIELD_U8(a1, 6478) == 5 )
            goto LABEL_50;
          result = FIELD_S8(a1, 6479);
          v7 = result == 1;
          if ( result != 1 )
            v7 = result == -1;
          if ( !v7 || !FIELD_U8(a1, 6480) || result >= 0 && result != 1 )
            return result;
          v8 = FIELD_U8(a1, 6481);
LABEL_46:
          FIELD_U32(a1, 6504) = v8;
          v13 = *(_DWORD **)(a1 + 6472);
          if ( !v13 )
            goto LABEL_50;
          v6 = 2;
          if ( v13[23] > v8 )
          {
            v6 = 1;
            if ( v13[22] > v8 )
            {
              v6 = 0;
              if ( v13[21] > v8 )
                goto LABEL_50;
            }
          }
          *v3 = 2;
          goto LABEL_20;
        case 5:
          if ( FIELD_U8(a1, 6534) )
          {
            if ( (unsigned int)FIELD_U8(a1, 6480) < FIELD_U32(a1, 6496) )
              goto LABEL_50;
            *v3 = 2;
            FIELD_U8(a1, 6560) = 2;
            FIELD_U32(a1, 6504) = 0;
            return 6504;
          }
          else
          {
            result = FIELD_U8(a1, 6478);
            if ( result == 2 )
              goto LABEL_50;
            if ( result == 1 )
            {
              v12 = FIELD_U8(a1, 6545);
              v11 = (_BYTE *)(a1 + 6545);
              if ( !v12 )
                goto LABEL_50;
              *v11 = 0;
              return 0;
            }
          }
          return result;
        default:
          return result;
      }
    }
    if ( result == 3 )
    {
      result = FIELD_S8(a1, 6479);
      if ( result < 0 || result == 1 )
      {
        v4 = FIELD_U8(a1, 6481);
LABEL_15:
        FIELD_U32(a1, 6504) = v4;
        v5 = *(_DWORD **)(a1 + 6472);
        if ( v5 && ((v6 = 2, v5[23] <= v4) || (v6 = 1, v5[22] <= v4) || (v6 = 0, v5[21] <= v4)) )
        {
          *v3 = 2;
LABEL_20:
          FIELD_U8(a1, 6560) = v6;
          return 6560;
        }
        else
        {
LABEL_50:
          *v3 = 3;
          return 3;
        }
      }
    }
  }
  return result;
}
