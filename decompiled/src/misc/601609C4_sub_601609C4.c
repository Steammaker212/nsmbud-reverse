/* sub_601609C4
 * address: 0x601609C4   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601609C4(int a1, _DWORD *a2, unsigned int a3)
{
  void (__fastcall *v6)(int, _DWORD *, unsigned int); // r3
  int result; // r0
  bool v8; // zf
  void (__fastcall *v9)(int, _DWORD *); // r2
  bool v10; // zf
  int (__fastcall *v11)(_DWORD); // r6
  void (__fastcall *v12)(int, _DWORD *); // r2
  bool v13; // zf
  int (__fastcall *v14)(_DWORD); // r6
  int (__fastcall *v15)(_DWORD, int, unsigned int); // r7

  if ( a3 >= 2 )
  {
    if ( a3 == 2 )
    {
      v9 = *(void (__fastcall **)(int, _DWORD *))(a1 + 316);
      if ( v9 )
        v9(a1, a2);
      result = a2[1336];
      v10 = result == 0;
      if ( result )
      {
        result = FIELD_U8(result, 3);
        v10 = result == 0;
      }
      if ( !v10 )
      {
        result = FIELD_U8(a1, 138);
        if ( (result & 1) != 0 )
          return sub_6014C474((int)a2, (_WORD *)(a1 + 304), 2);
        v11 = *(int (__fastcall **)(_DWORD))(a1 + 328);
        if ( v11 )
        {
          result = (*(int (__fastcall **)(_DWORD *, float))(*a2 + 28))(
                     a2,
                     (float)(*(float *)(FIELD_U32(a1, 152) + 4) + FIELD_F32(a1, 176)) + FIELD_F32(a1, 208));
          if ( result )
          {
            result = v11(FIELD_U32(a1, 144));
            if ( result == 1 )
              return sub_6014C474((int)a2, (_WORD *)(a1 + 304), 2);
          }
        }
      }
    }
    else
    {
      v12 = *(void (__fastcall **)(int, _DWORD *))(a1 + 312);
      if ( v12 )
        v12(a1, a2);
      result = a2[1336];
      v13 = result == 0;
      if ( result )
      {
        result = FIELD_U8(result, 3);
        v13 = result == 0;
      }
      if ( !v13 )
      {
        result = FIELD_U8(a1, 137);
        if ( (result & 0x80) != 0 )
          return sub_6014C474((int)a2, (_WORD *)(a1 + 304), 3);
        v14 = *(int (__fastcall **)(_DWORD))(a1 + 324);
        if ( v14 )
        {
          result = (*(int (__fastcall **)(_DWORD *, float))(*a2 + 28))(
                     a2,
                     (float)(*(float *)(FIELD_U32(a1, 152) + 4) + FIELD_F32(a1, 176)) + FIELD_F32(a1, 208));
          if ( result )
          {
            result = v14(FIELD_U32(a1, 144));
            if ( result == 1 )
              return sub_6014C474((int)a2, (_WORD *)(a1 + 304), 3);
          }
        }
      }
    }
  }
  else
  {
    v6 = *(void (__fastcall **)(int, _DWORD *, unsigned int))(a1 + 320);
    if ( v6 )
      v6(a1, a2, a3);
    result = a2[1336];
    v8 = result == 0;
    if ( result )
    {
      result = FIELD_U8(result, 3);
      v8 = result == 0;
    }
    if ( !v8 )
    {
      result = FIELD_U32(a1, 136);
      if ( (result & (1 << (a3 + 13))) != 0 )
        return sub_6014C474((int)a2, (_WORD *)(a1 + 304), a3);
      v15 = *(int (__fastcall **)(_DWORD, int, unsigned int))(a1 + 332);
      if ( v15 )
      {
        result = (*(int (__fastcall **)(_DWORD *, float))(*a2 + 28))(
                   a2,
                   (float)(*(float *)(FIELD_U32(a1, 152) + 4) + FIELD_F32(a1, 176)) + FIELD_F32(a1, 208));
        if ( result )
        {
          result = v15(FIELD_U32(a1, 144), result, a3);
          if ( result == 1 )
            return sub_6014C474((int)a2, (_WORD *)(a1 + 304), a3);
        }
      }
    }
  }
  return result;
}
