/* sub_6098BEF4
 * address: 0x6098BEF4   size: 792   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (__fastcall ***__fastcall sub_6098BEF4(int a1))(_DWORD)
{
  int v2; // r5
  int v3; // r6
  bool v4; // zf
  int v5; // r0
  _BYTE *v6; // r7
  int v7; // r5
  unsigned int v8; // r0
  int v9; // r1
  int v10; // r0
  bool v11; // zf
  int v12; // r5
  int v13; // r0
  void (__fastcall ***v14)(_DWORD); // r0
  bool v15; // zf
  int v16; // r5
  int v17; // r6
  int v18; // r0
  int v19; // r0
  int (__fastcall ***result)(_DWORD); // r0
  bool v21; // zf
  int v22; // r5
  int v23; // r0

  v2 = FIELD_S8(a1, 121);
  v3 = FIELD_U8(a1, 126);
  if ( v2 <= 0 )
  {
    v6 = (_BYTE *)(a1 + 122);
  }
  else
  {
    v4 = v2 == 2;
    FIELD_U8(a1, 121) = 0;
    v6 = (_BYTE *)(a1 + 122);
    v5 = FIELD_U8(a1, 122);
    if ( v2 != 2 )
      v4 = v5 == 3;
    if ( !v4 && FIELD_U8(a1, 122) )
    {
      v21 = v2 == 3;
      if ( v2 == 3 )
        v21 = v5 == 1;
      if ( v21 )
      {
        v22 = FIELD_U32(a1, 24);
        v23 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
        open_ref(v22, v23, 1, 1);
      }
    }
    else
    {
      (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 204))(a1, v2);
      if ( v2 == 4 )
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 212))(a1);
    }
  }
  if ( *v6 == 1 && (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 208))(a1) == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 212))(a1);
  if ( !v3 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 120))(a1);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
  }
  if ( *(_DWORD *)(FIELD_U32(a1, 28) + 20) && (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1) == 1 )
  {
    v7 = FIELD_U32(a1, 20);
    v8 = (*(int (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(v7 + 36) + 20))(
           FIELD_U32(v7, 36),
           FIELD_S8(a1, 120));
    if ( v8 < 2 )
      v7 += v8;
    FIELD_U8(v7, 860) = 0;
  }
  if ( !v3 )
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 200))(a1);
  v9 = FIELD_S8(a1, 121);
  if ( v9 < 0 )
  {
    FIELD_U8(a1, 121) = 0;
    v10 = (unsigned __int8)*v6;
    if ( (unsigned __int8)(v10 - 1) > 1u )
    {
      v11 = v9 == -4;
      if ( v9 == -4 )
        v11 = v10 == 3;
      if ( v11 )
      {
        v12 = FIELD_U32(a1, 24);
        if ( FIELD_U8(v12, 81) )
        {
          v13 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
          close_ref(v12, v13, 1);
        }
      }
    }
    else
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 216))(a1);
    }
  }
  if ( *v6 == 3 && (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 220))(a1) == 1 && FIELD_U8(a1, 123) != 2 )
  {
    if ( !FIELD_U8(a1, 123) && FIELD_S8(a1, 121) <= 0 )
      sub_6098D918(FIELD_U32(a1, 20), FIELD_U32(a1, 88));
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 224))(a1);
  }
  v14 = *(void (__fastcall ****)(_DWORD))(a1 + 108);
  if ( v14 )
    (**v14)(v14);
  if ( !v3 )
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 232))(a1);
  v15 = FIELD_U8(a1, 128) == 0;
  if ( FIELD_U8(a1, 128) )
    v15 = (FIELD_U8(a1, 130) & 0x10) == 0;
  if ( !v15 )
  {
    sub_6098F1D4(*(_DWORD *)(FIELD_U32(a1, 24) + 12));
    FIELD_U8(a1, 128) = 0;
  }
  v16 = FIELD_U32(a1, 24);
  v17 = FIELD_U32(a1, 52);
  v18 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 228))(a1);
  (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v16 + 72))(v16, v17, v18);
  v19 = FIELD_U32(a1, 108);
  if ( v19 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 4))(v19);
  result = *(int (__fastcall ****)(_DWORD))(a1 + 112);
  if ( result )
    return (int (__fastcall ***)(_DWORD))(**result)(result);
  return result;
}
