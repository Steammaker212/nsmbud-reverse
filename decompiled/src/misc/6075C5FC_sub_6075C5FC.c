/* sub_6075C5FC
 * address: 0x6075C5FC   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6075C5FC(int a1, int a2)
{
  int v4; // r1
  _DWORD *v5; // r0
  int *v6; // r7
  int v7; // r1
  int v8; // r6
  float v9; // s0
  _DWORD *result; // r0
  _DWORD *v11; // r4
  int v12[4]; // [sp+0h] [bp-38h] BYREF
  int v13[10]; // [sp+10h] [bp-28h] BYREF

  if ( FIELD_U32(a1, 1176) )
  {
    v4 = FIELD_U32(a1, 1152);
    if ( ((1 << v4) & 0xE) != 0 )
    {
      v6 = (int *)(a1 + 564);
      v5 = *(_DWORD **)(a1 + 564);
LABEL_6:
      v7 = dword_60AF2C04[v4];
      goto LABEL_8;
    }
    v6 = (int *)(a1 + 564);
    v5 = *(_DWORD **)(a1 + 564);
    if ( FIELD_U8(a1, 1182) )
      goto LABEL_6;
  }
  else
  {
    v6 = (int *)(a1 + 564);
    v5 = *(_DWORD **)(a1 + 564);
  }
  v7 = 0;
LABEL_8:
  sub_604376E0(v5, v7, 0);
  v8 = *v6;
  (*(void (__fastcall **)(int, int))(*(_DWORD *)*v6 + 60))(*v6, a2);
  v9 = sub_604373E4(v8);
  result = **(_DWORD ***)(a1 + 24);
  if ( result )
  {
    result = (_DWORD *)(*(int (__fastcall **)(_DWORD *, _DWORD, float))(*result + 132))(result, 0, v9);
    v11 = result;
    if ( result )
    {
      memset(v13, 0, 12);
      v13[3] = 1065353216;
      (*(void (__fastcall **)(_DWORD *, _DWORD, int *))(*result + 16))(result, 0, v13);
      memset(v12, 0, 12);
      v12[3] = 1065353216;
      (*(void (__fastcall **)(_DWORD *, int, int *))(*v11 + 24))(v11, 3, v12);
      return sub_60437600((_DWORD *)*v6, v12, v13);
    }
  }
  return result;
}
