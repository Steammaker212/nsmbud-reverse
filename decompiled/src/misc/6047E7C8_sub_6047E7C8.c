/* sub_6047E7C8
 * address: 0x6047E7C8   size: 756   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047E7C8(_DWORD *a1, int a2, int a3, int a4)
{
  bool v6; // zf
  int v8; // r2
  int v9; // r0
  int result; // r0
  _DWORD *v11; // r7
  _DWORD *v12; // r8
  int v13; // r4
  int v14; // r6
  int v15; // r1
  _DWORD *v16; // r0
  int v17; // r1
  int v18; // r7
  int v19; // r1
  int v20; // r1
  void (*v21)(void); // r1

  v6 = a2 == 0;
  v8 = a1[11];
  if ( !a2 )
    v6 = a3 == 0;
  a1[11] = v8 & 0xFFFFFFFB;
  if ( v6 )
  {
    v9 = a1[12];
    if ( v9 )
    {
      a1[2] = 0;
      a1[8] = 0;
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
      a1[12] = 0;
      return result;
    }
    result = a1[7];
    if ( result )
    {
      if ( result == a1[10] )
      {
        if ( FIELD_U32(result, 164) != 4 )
        {
          a1[11] = v8 | 4;
          goto LABEL_23;
        }
        a1[2] = 0;
        if ( (FIELD_U8(result, 8) & 0x10) != 0 )
        {
          (*(void (__fastcall **)(int))(*(_DWORD *)result + 12))(result);
          result = a1[7];
        }
        FIELD_U8(result, 160) = 0;
        a1[7] = 0;
        a1[8] = 0;
      }
      else
      {
        a1[2] = 0;
        a1[8] = 0;
        return (*(int (__fastcall **)(int))(*(_DWORD *)result + 12))(result);
      }
    }
    else
    {
      a1[2] = 0;
      a1[8] = 0;
      result = a1[9];
      if ( result )
      {
        if ( FIELD_U32(result, 164) == 4 )
        {
          v19 = 0;
          a1[7] = 0;
        }
        else
        {
          v20 = *(_DWORD *)result;
          if ( FIELD_U8(result, 208) )
            v21 = *(void (**)(void))(v20 + 8);
          else
            v21 = *(void (**)(void))(v20 + 12);
          v21();
          result = a1[9];
          a1[7] = result;
          v19 = result;
        }
        a1[8] = v19;
        FIELD_U8(result, 160) = 0;
      }
    }
  }
  else
  {
    v11 = (_DWORD *)a1[4];
    v12 = a1 + 3;
    if ( v11 == a1 + 3 )
    {
LABEL_12:
      v14 = 0;
    }
    else
    {
      v13 = a1[6];
      v14 = (int)v11 - v13;
      while ( sub_604785EC(v14) != 1 || !(*(int (__fastcall **)(int, int))(*(_DWORD *)v14 + 124))(v14, a4) )
      {
        v11 = (_DWORD *)v11[1];
        v14 = (int)v11 - v13;
        if ( (char *)v11 - v13 == (char *)v12 - v13 )
          goto LABEL_12;
      }
    }
    if ( a3 == 1 )
    {
      a1[10] = v14;
      if ( v14 )
      {
        if ( (unsigned int)((unsigned __int8)FIELD_U32(v14, 8) >> 6) - 1 <= 1 && !a1[12] )
        {
          a1[12] = v14;
          (*(void (__fastcall **)(int, int))(*(_DWORD *)v14 + 128))(v14, a4);
        }
      }
    }
    result = a1[12];
    v15 = result;
    if ( !result )
      v15 = v14;
    if ( a1[10] == v15 )
    {
      a1[8] = v15;
      if ( v15 )
      {
        if ( result )
        {
          (*(void (__fastcall **)(int, int))(*(_DWORD *)result + 132))(result, a4);
          v14 = a1[8];
        }
        if ( v14 == a1[7] && !FIELD_U8(v14, 160) )
        {
          FIELD_U8(v14, 160) = 1;
          result = *(_DWORD *)(a1[7] + 164);
          if ( result != 4 )
          {
            sub_60477EF8(a1[8]);
            return sub_60478220(a1[8]);
          }
        }
        else
        {
          v16 = (_DWORD *)a1[4];
          if ( v16 != v12 )
          {
            v17 = a1[6];
            v18 = (int)v16 - v17;
            do
            {
              FIELD_U8(v18, 160) = 0;
              v16 = (_DWORD *)v16[1];
              v18 = (int)v16 - v17;
            }
            while ( (char *)v16 - v17 != (char *)v12 - v17 );
            v14 = a1[8];
          }
          FIELD_U8(v14, 160) = 1;
          return 1;
        }
      }
    }
    else
    {
      result = a1[8];
      if ( result )
      {
        result = 0;
LABEL_23:
        a1[8] = result;
      }
    }
  }
  return result;
}
