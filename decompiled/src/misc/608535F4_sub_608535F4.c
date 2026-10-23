/* sub_608535F4
 * address: 0x608535F4   size: 1184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608535F4(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r1
  int v5; // r0
  _DWORD *v6; // r1
  int result; // r0
  _DWORD *v8; // r1
  int v9; // r1
  _DWORD *v10; // r1
  _DWORD *v11; // r1
  _DWORD *v12; // r1

  if ( a1[7] )
  {
    switch ( a1[3] )
    {
      case 0:
        if ( (*(int (__fastcall **)(_DWORD *))(*a1 + 44))(a1) == 1 )
          goto LABEL_9;
        break;
      case 1:
        v2 = (*(int (__fastcall **)(_DWORD *))(*a1 + 48))(a1);
        goto LABEL_8;
      case 2:
        v2 = (*(int (__fastcall **)(_DWORD *))(*a1 + 52))(a1);
        goto LABEL_8;
      case 3:
        v2 = (*(int (__fastcall **)(_DWORD *))(*a1 + 56))(a1);
LABEL_8:
        if ( v2 )
        {
LABEL_9:
          v3 = a1[7];
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
                v6 = &a1[v5++];
                v6[3] = v6[4];
                v4 = a1[7] - 1;
              }
              while ( v5 < v4 );
            }
            a1[7] = v4;
          }
        }
        break;
      default:
        break;
    }
  }
  result = a1[1] - 1;
  switch ( a1[1] )
  {
    case 1:
      result = (*(int (__fastcall **)(_DWORD *))(*a1 + 60))(a1);
      if ( result == 1 )
      {
        (*(void (__fastcall **)(_DWORD *))(*a1 + 92))(a1);
        result = a1[7];
        if ( result )
        {
          result = a1[3];
          switch ( result )
          {
            case 0:
              result = (*(int (__fastcall **)(_DWORD *))(*a1 + 44))(a1);
              if ( result == 1 )
                goto LABEL_40;
              return result;
            case 1:
              result = (*(int (__fastcall **)(_DWORD *))(*a1 + 48))(a1);
              goto LABEL_39;
            case 2:
              result = (*(int (__fastcall **)(_DWORD *))(*a1 + 52))(a1);
              goto LABEL_39;
            case 3:
              result = (*(int (__fastcall **)(_DWORD *))(*a1 + 56))(a1);
LABEL_39:
              if ( !result )
                return result;
LABEL_40:
              result = a1[7];
              if ( result < 1 )
                return result;
              if ( result == 1 )
                goto LABEL_70;
              result = 0;
              do
              {
                v8 = &a1[result++];
                v8[3] = v8[4];
                v9 = a1[7] - 1;
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
      result = (*(int (__fastcall **)(_DWORD *))(*a1 + 64))(a1);
      if ( result == 1 )
      {
        (*(void (__fastcall **)(_DWORD *))(*a1 + 96))(a1);
        result = a1[7];
        if ( result )
        {
          result = a1[3];
          switch ( result )
          {
            case 0:
              result = (*(int (__fastcall **)(_DWORD *))(*a1 + 44))(a1);
              if ( result == 1 )
                goto LABEL_49;
              return result;
            case 1:
              result = (*(int (__fastcall **)(_DWORD *))(*a1 + 48))(a1);
              goto LABEL_48;
            case 2:
              result = (*(int (__fastcall **)(_DWORD *))(*a1 + 52))(a1);
              goto LABEL_48;
            case 3:
              result = (*(int (__fastcall **)(_DWORD *))(*a1 + 56))(a1);
LABEL_48:
              if ( !result )
                return result;
LABEL_49:
              result = a1[7];
              if ( result < 1 )
                return result;
              if ( result == 1 )
                goto LABEL_70;
              result = 0;
              do
              {
                v10 = &a1[result++];
                v10[3] = v10[4];
                v9 = a1[7] - 1;
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
      result = (*(int (__fastcall **)(_DWORD *))(*a1 + 68))(a1);
      if ( result == 1 )
      {
        (*(void (__fastcall **)(_DWORD *))(*a1 + 100))(a1);
        result = a1[7];
        if ( result )
        {
          result = a1[3];
          switch ( result )
          {
            case 0:
              result = (*(int (__fastcall **)(_DWORD *))(*a1 + 44))(a1);
              if ( result == 1 )
                goto LABEL_58;
              return result;
            case 1:
              result = (*(int (__fastcall **)(_DWORD *))(*a1 + 48))(a1);
              goto LABEL_57;
            case 2:
              result = (*(int (__fastcall **)(_DWORD *))(*a1 + 52))(a1);
              goto LABEL_57;
            case 3:
              result = (*(int (__fastcall **)(_DWORD *))(*a1 + 56))(a1);
LABEL_57:
              if ( !result )
                return result;
LABEL_58:
              result = a1[7];
              if ( result < 1 )
                return result;
              if ( result == 1 )
                goto LABEL_70;
              result = 0;
              do
              {
                v11 = &a1[result++];
                v11[3] = v11[4];
                v9 = a1[7] - 1;
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
      result = (*(int (__fastcall **)(_DWORD *))(*a1 + 72))(a1);
      if ( result == 1 )
      {
        (*(void (__fastcall **)(_DWORD *))(*a1 + 104))(a1);
        result = a1[7];
        if ( result )
        {
          result = a1[3];
          switch ( result )
          {
            case 0:
              result = (*(int (__fastcall **)(_DWORD *))(*a1 + 44))(a1);
              if ( result == 1 )
                goto LABEL_67;
              return result;
            case 1:
              result = (*(int (__fastcall **)(_DWORD *))(*a1 + 48))(a1);
              goto LABEL_66;
            case 2:
              result = (*(int (__fastcall **)(_DWORD *))(*a1 + 52))(a1);
              goto LABEL_66;
            case 3:
              result = (*(int (__fastcall **)(_DWORD *))(*a1 + 56))(a1);
LABEL_66:
              if ( !result )
                return result;
LABEL_67:
              result = a1[7];
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
                  v12 = &a1[result++];
                  v12[3] = v12[4];
                  v9 = a1[7] - 1;
                }
                while ( result < v9 );
              }
              break;
            default:
              return result;
          }
LABEL_72:
          a1[7] = v9;
        }
      }
      break;
    default:
      return result;
  }
  return result;
}
