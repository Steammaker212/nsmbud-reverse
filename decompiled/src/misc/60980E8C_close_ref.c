/* close_ref
 * address: 0x60980E8C   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall close_ref(int a1, int a2, int a3)
{
  int v6; // r0
  float *v7; // r7
  int result; // r0
  char v9; // r7
  bool v10; // zf
  bool v11; // zf
  int v12; // r0
  int v13; // r6
  int i; // r5
  int v15[3]; // [sp+4h] [bp-6Ch] BYREF
  char v16; // [sp+10h] [bp-60h] BYREF

  v6 = FIELD_U32(a1, 60);
  v7 = *(float **)(a1 + 56);
  if ( v6 )
  {
    if ( v7 )
    {
      sub_608502F4(FIELD_U32(a1, 56), 0);
      v7[11] = 0.0;
      v6 = FIELD_U32(a1, 60);
    }
    if ( a3 == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 108))(v6);
LABEL_9:
      v9 = 0;
      goto LABEL_27;
    }
    (*(void (__fastcall **)(int, float))(*(_DWORD *)v6 + 88))(v6, 1.0);
    result = FIELD_U32(a1, 72);
    v9 = 3;
    if ( result )
    {
      result = FIELD_U32(result, 112);
      v10 = result == 0;
      if ( result )
      {
        result = FIELD_U32(a1, 76);
        v10 = result == 0;
      }
      if ( !v10 )
      {
        result = *(_DWORD *)(FIELD_U32(result, 12) + 12);
        if ( !result )
        {
LABEL_26:
          v12 = FIELD_U32(a1, 12);
          v15[0] = (int)&v16;
          v15[1] = 0;
          v15[2] = 64;
          v16 = 0;
          sub_608FDFB8((int)v15, (_BYTE *)(v12 + 136), -1);
          sub_608FE058(v15, "_close", -1);
          result = (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 72) + 260))(FIELD_U32(a1, 72), v15[0]);
        }
      }
    }
  }
  else
  {
    if ( !v7 )
    {
      result = sub_609810F8(a1, (*(_DWORD *)(FIELD_U32(a1, 12) + 12) != 0) & (a2 ^ 1));
      if ( a2 != 1 )
        return result;
      goto LABEL_28;
    }
    if ( a3 == 1 )
    {
      result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v7 + 104))(FIELD_U32(a1, 56));
      goto LABEL_9;
    }
    if ( v7[11] <= 0.0 )
      (*(void (__fastcall **)(_DWORD, float))(*(_DWORD *)v7 + 88))(FIELD_U32(a1, 56), -1.0);
    else
      (*(void (__fastcall **)(_DWORD, _DWORD, float))(*(_DWORD *)v7 + 92))(FIELD_U32(a1, 56), 0, -1.0);
    result = FIELD_U32(a1, 72);
    v9 = 3;
    if ( result )
    {
      result = FIELD_U32(result, 112);
      v11 = result == 0;
      if ( result )
      {
        result = FIELD_U32(a1, 76);
        v11 = result == 0;
      }
      if ( !v11 )
      {
        result = *(_DWORD *)(FIELD_U32(result, 12) + 12);
        if ( !result )
          goto LABEL_26;
      }
    }
  }
LABEL_27:
  FIELD_U8(a1, 81) = v9;
  if ( a2 != 1 )
    return result;
LABEL_28:
  v13 = a1 + 40;
  for ( i = FIELD_U32(a1, 44); i != v13; i = FIELD_U32(i, 4) )
    result = close_ref(FIELD_U32(i, 8), 1, a3);
  return result;
}
