/* sub_6050A4EC
 * address: 0x6050A4EC   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6050A4EC(int a1, int a2, _DWORD *a3, char a4, char a5)
{
  _BYTE *v8; // r4
  _DWORD *v9; // r5
  int v10; // r0
  int **v11; // r1
  int v12; // r1
  void (*v13)(void); // r1
  int v15; // [sp+8h] [bp-28h] BYREF
  int v16; // [sp+Ch] [bp-24h]

  FIELD_U8(a1, 7212) = a4;
  FIELD_U8(a1, 7213) = a5;
  v8 = (_BYTE *)(a1 + 7213);
  v9 = (_DWORD *)(a1 + 48);
  sub_604734E4((_DWORD *)(a1 + 48), 0);
  sub_60476388(v9, a2, a3);
  v15 = 5;
  sub_60474848((int)v9, &dword_60CA7DB8, &v15);
  v15 = (int)&sead__SafeStringBase__vtable;
  v16 = dword_60CA7DD4;
  if ( sub_6047467C(v9, 1u, &v15, (int)&dword_60CA7DB0, 1.0, 0) == 1 )
  {
    v10 = sub_6047482C((int)v9, 1u);
    if ( v10 )
      (*(void (__fastcall **)(int, float))(*(_DWORD *)v10 + 96))(v10, 0.0);
  }
  v15 = (int)&sead__SafeStringBase__vtable;
  v16 = dword_60CA7DBC;
  if ( sub_6047467C(v9, 2u, &v15, (int)&unk_60CA7DA8, 1.0, 0) == 1 )
  {
    v11 = *(int ***)(a1 + 3560);
    if ( FIELD_U32(a1, 3556) > 2u )
      v11 += 10;
    v12 = **v11;
    if ( *v8 )
      v13 = *(void (**)(void))(v12 + 104);
    else
      v13 = *(void (**)(void))(v12 + 108);
    v13();
  }
  FIELD_U32(a1, 36) = 1;
  return 1;
}
