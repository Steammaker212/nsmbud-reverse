/* open_ref
 * address: 0x60980C30   size: 596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall open_ref(int a1, int a2, int a3, int a4)
{
  _BOOL4 v8; // r9
  int v9; // r0
  int result; // r0
  _DWORD *v11; // r7
  int v12; // r7
  int i; // r6
  int v14; // r0
  int v15; // r0
  int v16; // r0
  bool v17; // zf
  int v18; // r0
  int v19[3]; // [sp+4h] [bp-6Ch] BYREF
  char v20; // [sp+10h] [bp-60h] BYREF

  v8 = 0;
  v9 = FIELD_U32(a1, 56);
  if ( v9 && !FIELD_U32(a1, 60) )
    v8 = FIELD_F32(v9, 44) < 0.0;
  if ( a2 || a4 == 1 )
  {
    v11 = *(_DWORD **)(a1 + 60);
    if ( v9 )
    {
      if ( v11 )
      {
        sub_608502F4(FIELD_U32(a1, 60), 0);
        v11[11] = 0;
      }
      if ( a3 == 2 )
      {
        (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 56) + 104))(FIELD_U32(a1, 56));
        FIELD_U8(a1, 81) = 0;
      }
      else if ( a3 == 1 )
      {
        (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 56) + 108))(FIELD_U32(a1, 56));
        FIELD_U8(a1, 81) = 2;
      }
      else
      {
        v14 = FIELD_U32(a1, 56);
        if ( v8 )
          (*(void (__fastcall **)(int, _DWORD, float))(*(_DWORD *)v14 + 92))(v14, 0, 1.0);
        else
          (*(void (__fastcall **)(int, float))(*(_DWORD *)v14 + 88))(v14, 1.0);
        v15 = FIELD_U32(a1, 72);
        if ( v15 )
        {
          v16 = FIELD_U32(v15, 112);
          v17 = v16 == 0;
          if ( v16 )
          {
            v16 = FIELD_U32(a1, 76);
            v17 = v16 == 0;
          }
          if ( !v17 && !*(_DWORD *)(FIELD_U32(v16, 12) + 12) )
          {
            v18 = FIELD_U32(a1, 12);
            v19[0] = (int)&v20;
            v19[1] = 0;
            v19[2] = 64;
            v20 = 0;
            sub_608FDFB8((int)v19, (_BYTE *)(v18 + 136), -1);
            sub_608FE058(v19, "_open", -1);
            (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 72) + 260))(FIELD_U32(a1, 72), v19[0]);
          }
        }
        FIELD_U8(a1, 81) = 1;
      }
    }
    else if ( v11 )
    {
      (*(void (__fastcall **)(_DWORD))(*v11 + 104))(FIELD_U32(a1, 60));
    }
  }
  result = FIELD_U32(a1, 64);
  if ( !v8 && result != 0 && (!FIELD_U32(a1, 56) || a4 || a2 == 1) )
  {
    if ( (FIELD_U8(a1, 80) & 2) != 0 )
      result = sub_60989CC8(result, 1, 1.0);
    else
      result = (*(int (__fastcall **)(int, float))(*(_DWORD *)result + 88))(result, 1.0);
  }
  v12 = a1 + 40;
  for ( i = FIELD_U32(a1, 44); i != v12; i = FIELD_U32(i, 4) )
    result = open_ref(FIELD_U32(i, 8), a2, a3, 0);
  return result;
}
