/* sub_608EC528
 * address: 0x608EC528   size: 1024   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608EC528(_DWORD *a1)
{
  int result; // r0
  int v3; // r1
  int v4; // r5
  void (__fastcall *v5)(_DWORD *, int *); // r2
  int v6; // r6
  void (__fastcall *v7)(_DWORD *, int *); // r2
  int v8; // r0
  void (__fastcall *v9)(_DWORD *, int *); // r2
  int v10; // r1
  int v11; // r0
  _DWORD *v12; // r6
  int v13; // r7
  int v14; // r0
  _DWORD *v15; // r7
  int v16; // r0
  int v17; // [sp+0h] [bp-20h] BYREF
  int v18; // [sp+4h] [bp-1Ch]

  result = a1[124];
  switch ( result )
  {
    case 3:
      result = a1[118];
      if ( result > a1[121] )
      {
        v7 = *(void (__fastcall **)(_DWORD *, int *))(*a1 + 92);
        v17 = 1;
        v7(a1, &v17);
        a1[118] = a1[121] + 1;
        a1[124] = 0;
        (*(void (__fastcall **)(_DWORD *))(*a1 + 68))(a1);
        (*(void (__fastcall **)(_DWORD *))(*a1 + 72))(a1);
        v8 = a1[29];
        if ( v8 )
          FIELD_U32(v8, 48) &= ~1u;
        result = a1[62];
        if ( result )
          FIELD_U32(result, 48) &= ~1u;
      }
      break;
    case 2:
      result = a1[120];
      if ( a1[118] > result )
      {
        a1[118] = ++result;
        if ( *((_BYTE *)a1 + 492) )
        {
          if ( a1[28] == 1 )
          {
            v17 = (int)off_60C5C51C;
            v18 = 4;
            (*(void (__fastcall **)(_DWORD, int *))(*(_DWORD *)a1[62] + 56))(a1[62], &v17);
          }
          v9 = *(void (__fastcall **)(_DWORD *, int *))(*a1 + 92);
          v17 = 0;
          v9(a1, &v17);
          a1[124] = 3;
          return 3;
        }
        else
        {
          a1[118] = result;
        }
      }
      break;
    case 1:
      result = a1[119];
      if ( a1[118] > result )
      {
        v3 = a1[23];
        a1[118] = result + 1;
        v4 = v3 + 4;
        result = sub_60907F94(v3 + 4);
        if ( result == 1 )
        {
          v5 = *(void (__fastcall **)(_DWORD *, int *))(*a1 + 92);
          v17 = 3;
          v5(a1, &v17);
          a1[124] = 2;
          switch ( a1[28] )
          {
            case 1:
              v6 = a1[23] + 4;
              sead__CriticalSection__lock(v6);
              if ( a1[28] == 1 )
              {
                sub_608F0BE8(a1[23], a1[29]);
                a1[29] = 0;
              }
              sub_608F0894(a1[23], a1 + 30, a1 + 63);
              sead__CriticalSection__unlock(v6);
              break;
            case 2:
              (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)a1[29] + 16))(a1[29], 1);
              (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)a1[29] + 20))(a1[29], 1);
              (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)a1[62] + 16))(a1[62], 0);
              (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)a1[62] + 20))(a1[62], 0);
              v17 = (int)off_60C5C51C;
              v18 = 1;
              (*(void (__fastcall **)(_DWORD, int *))(*(_DWORD *)a1[29] + 56))(a1[29], &v17);
              v17 = (int)off_60C5C51C;
              v18 = 2;
              (*(void (__fastcall **)(_DWORD, int *))(*(_DWORD *)a1[62] + 56))(a1[62], &v17);
              *((_BYTE *)a1 + 492) = 1;
              break;
            case 3:
              (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)a1[29] + 16))(a1[29], 1);
              (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)a1[29] + 20))(a1[29], 1);
              break;
            case 4:
              v10 = a1[29];
              v11 = FIELD_U32(v10, 16);
              if ( v11 )
                v12 = *(_DWORD **)(v11 + 16);
              else
                v12 = 0;
              v13 = a1[62];
              sub_608F0BE8(a1[23], v10);
              if ( v13 )
              {
                if ( v12 == (_DWORD *)a1[62] )
                {
                  v15 = v12;
                }
                else
                {
                  do
                  {
                    sub_608F0BE8(a1[23], v12);
                    v14 = v12[4];
                    if ( v14 )
                    {
                      v15 = *(_DWORD **)(v14 + 16);
                      v12 = v15;
                    }
                    else
                    {
                      v15 = 0;
                      v12 = 0;
                    }
                  }
                  while ( v12 != (_DWORD *)a1[62] );
                }
                (*(void (__fastcall **)(_DWORD *, _DWORD))(*v15 + 16))(v12, 0);
                v16 = *v15;
              }
              else
              {
                (*(void (__fastcall **)(_DWORD *, _DWORD))(*v12 + 16))(v12, 0);
                v16 = *v12;
              }
              (*(void (__fastcall **)(_DWORD *, _DWORD))(v16 + 20))(v12, 0);
              v17 = (int)off_60C5C51C;
              v18 = 0;
              (*(void (__fastcall **)(_DWORD *, int *))(*v12 + 56))(v12, &v17);
              *((_BYTE *)a1 + 492) = 1;
              break;
            default:
              return sead__CriticalSection__unlock(v4);
          }
          return sead__CriticalSection__unlock(v4);
        }
      }
      break;
  }
  return result;
}
