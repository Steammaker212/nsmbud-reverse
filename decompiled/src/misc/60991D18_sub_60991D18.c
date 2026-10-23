/* sub_60991D18
 * address: 0x60991D18   size: 1184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60991D18(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r1
  int v5; // r0
  int v6; // r1
  int result; // r0
  int v8; // r1
  int v9; // r1
  int v10; // r1
  int v11; // r1
  int v12; // r1

  if ( FIELD_U32(a1, 36) )
  {
    switch ( FIELD_U8(a1, 32) )
    {
      case 0:
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 52))(a1) == 1 )
          goto LABEL_9;
        break;
      case 1:
        v2 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 56))(a1);
        goto LABEL_8;
      case 2:
        v2 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 60))(a1);
        goto LABEL_8;
      case 3:
        v2 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 64))(a1);
LABEL_8:
        if ( v2 )
        {
LABEL_9:
          v3 = FIELD_U32(a1, 36);
          if ( v3 >= 1 )
          {
            if ( v3 == 1 )
            {
              v4 = 0;
            }
            else
            {
              v5 = 0;
              do
              {
                v6 = a1 + v5++;
                FIELD_U8(v6, 32) = FIELD_U8(v6, 33);
                v4 = FIELD_U32(a1, 36) - 1;
              }
              while ( v5 < v4 );
            }
            FIELD_U32(a1, 36) = v4;
          }
        }
        break;
      default:
        break;
    }
  }
  result = FIELD_U8(a1, 28) - 1;
  switch ( FIELD_U8(a1, 28) )
  {
    case 1:
      result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
      if ( result == 1 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 100))(a1);
        result = FIELD_U32(a1, 36);
        if ( result )
        {
          result = FIELD_U8(a1, 32);
          switch ( FIELD_U8(a1, 32) )
          {
            case 0:
              result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 52))(a1);
              if ( result == 1 )
                goto LABEL_40;
              return result;
            case 1:
              result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 56))(a1);
              goto LABEL_39;
            case 2:
              result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 60))(a1);
              goto LABEL_39;
            case 3:
              result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 64))(a1);
LABEL_39:
              if ( !result )
                return result;
LABEL_40:
              result = FIELD_U32(a1, 36);
              if ( result < 1 )
                return result;
              if ( result == 1 )
                goto LABEL_70;
              result = 0;
              do
              {
                v8 = a1 + result++;
                FIELD_U8(v8, 32) = FIELD_U8(v8, 33);
                v9 = FIELD_U32(a1, 36) - 1;
              }
              while ( result < v9 );
              break;
            default:
              return result;
          }
          goto LABEL_72;
        }
      }
      break;
    case 2:
      result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      if ( result == 1 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 104))(a1);
        result = FIELD_U32(a1, 36);
        if ( result )
        {
          result = FIELD_U8(a1, 32);
          switch ( FIELD_U8(a1, 32) )
          {
            case 0:
              result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 52))(a1);
              if ( result == 1 )
                goto LABEL_49;
              return result;
            case 1:
              result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 56))(a1);
              goto LABEL_48;
            case 2:
              result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 60))(a1);
              goto LABEL_48;
            case 3:
              result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 64))(a1);
LABEL_48:
              if ( !result )
                return result;
LABEL_49:
              result = FIELD_U32(a1, 36);
              if ( result < 1 )
                return result;
              if ( result == 1 )
                goto LABEL_70;
              result = 0;
              do
              {
                v10 = a1 + result++;
                FIELD_U8(v10, 32) = FIELD_U8(v10, 33);
                v9 = FIELD_U32(a1, 36) - 1;
              }
              while ( result < v9 );
              break;
            default:
              return result;
          }
          goto LABEL_72;
        }
      }
      break;
    case 4:
      result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 76))(a1);
      if ( result == 1 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 108))(a1);
        result = FIELD_U32(a1, 36);
        if ( result )
        {
          result = FIELD_U8(a1, 32);
          switch ( FIELD_U8(a1, 32) )
          {
            case 0:
              result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 52))(a1);
              if ( result == 1 )
                goto LABEL_58;
              return result;
            case 1:
              result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 56))(a1);
              goto LABEL_57;
            case 2:
              result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 60))(a1);
              goto LABEL_57;
            case 3:
              result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 64))(a1);
LABEL_57:
              if ( !result )
                return result;
LABEL_58:
              result = FIELD_U32(a1, 36);
              if ( result < 1 )
                return result;
              if ( result == 1 )
                goto LABEL_70;
              result = 0;
              do
              {
                v11 = a1 + result++;
                FIELD_U8(v11, 32) = FIELD_U8(v11, 33);
                v9 = FIELD_U32(a1, 36) - 1;
              }
              while ( result < v9 );
              break;
            default:
              return result;
          }
          goto LABEL_72;
        }
      }
      break;
    case 6:
      result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 80))(a1);
      if ( result == 1 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 112))(a1);
        result = FIELD_U32(a1, 36);
        if ( result )
        {
          result = FIELD_U8(a1, 32);
          switch ( FIELD_U8(a1, 32) )
          {
            case 0:
              result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 52))(a1);
              if ( result == 1 )
                goto LABEL_67;
              return result;
            case 1:
              result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 56))(a1);
              goto LABEL_66;
            case 2:
              result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 60))(a1);
              goto LABEL_66;
            case 3:
              result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 64))(a1);
LABEL_66:
              if ( !result )
                return result;
LABEL_67:
              result = FIELD_U32(a1, 36);
              if ( result < 1 )
                return result;
              if ( result == 1 )
              {
LABEL_70:
                v9 = result - 1;
              }
              else
              {
                result = 0;
                do
                {
                  v12 = a1 + result++;
                  FIELD_U8(v12, 32) = FIELD_U8(v12, 33);
                  v9 = FIELD_U32(a1, 36) - 1;
                }
                while ( result < v9 );
              }
              break;
            default:
              return result;
          }
LABEL_72:
          FIELD_U32(a1, 36) = v9;
        }
      }
      break;
    default:
      return result;
  }
  return result;
}
