/* sub_6050A704
 * address: 0x6050A704   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6050A704(int a1, int a2, _DWORD *a3, _DWORD *a4, char a5, char a6)
{
  _DWORD *v10; // r6
  int v11; // r0
  int **v12; // r1
  int v13; // r1
  void (*v14)(void); // r1
  int v16; // [sp+8h] [bp-28h] BYREF
  int v17; // [sp+Ch] [bp-24h]

  v10 = (_DWORD *)(a1 + 3628);
  sub_604734E4((_DWORD *)(a1 + 3628), 0);
  sub_60476388(v10, a2, a3);
  sub_604734E4((_DWORD *)(a1 + 48), 0);
  sub_60476388((_DWORD *)(a1 + 48), (int)v10, a4);
  v16 = 5;
  sub_60474848(a1 + 48, &dword_60CA7DB8, &v16);
  FIELD_U8(a1, 7212) = a5;
  FIELD_U8(a1, 7213) = a6;
  v16 = (int)&sead__SafeStringBase__vtable;
  v17 = dword_60CA7DD4;
  if ( sub_6047467C((_DWORD *)(a1 + 48), 1u, &v16, (int)&dword_60CA7DB0, 1.0, 0) == 1 )
  {
    v11 = sub_6047482C(a1 + 48, 1u);
    if ( v11 )
      (*(void (__fastcall **)(int, float))(*(_DWORD *)v11 + 96))(v11, 0.0);
  }
  v16 = (int)&sead__SafeStringBase__vtable;
  v17 = dword_60CA7DBC;
  if ( sub_6047467C((_DWORD *)(a1 + 48), 2u, &v16, (int)&unk_60CA7DA8, 1.0, 0) == 1 )
  {
    v12 = *(int ***)(a1 + 3560);
    if ( FIELD_U32(a1, 3556) > 2u )
      v12 += 10;
    v13 = **v12;
    if ( FIELD_U8(a1, 7213) )
      v14 = *(void (**)(void))(v13 + 104);
    else
      v14 = *(void (**)(void))(v13 + 108);
    v14();
  }
  FIELD_U32(a1, 36) = 1;
  return 1;
}
