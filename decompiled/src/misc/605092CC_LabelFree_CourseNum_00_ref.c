/* LabelFree_CourseNum_00_ref
 * address: 0x605092CC   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LabelFree_CourseNum_00_ref(_DWORD *a1)
{
  unsigned int v2; // r0
  int v3; // r1
  int v4; // r3
  unsigned int v5; // r0
  int result; // r0
  int **v7; // r0
  int v8; // r1
  int (*v9)(void); // r1
  _DWORD v10[6]; // [sp+8h] [bp-18h] BYREF

  v2 = a1[932];
  v3 = dword_60C9A1E0;
  FIELD_U32(dword_60C9A1E0, 532) = v2;
  if ( v2 >= 0x20 )
    v2 = 0;
  v4 = *(_DWORD *)(v3 + 16 * v2 + 24);
  v10[0] = &sead__SafeStringBase__vtable;
  v10[1] = "LabelFree_CourseNum_00";
  v5 = a1[932];
  if ( v5 >= 0xA )
    v5 = 0;
  sub_6047E0EC(v10, a1[v5 + 920], 1, v4);
  sub_605093C8(a1);
  result = sub_6047467C(a1 + 10, 4u, &dword_60CA7C60, (int)&dword_60CA7CD0, 1.0, 0);
  if ( result == 1 )
  {
    v7 = (int **)a1[888];
    if ( a1[887] > 4u )
      v7 += 20;
    v8 = **v7;
    if ( a1[933] == 1 )
      v9 = *(int (**)(void))(v8 + 104);
    else
      v9 = *(int (**)(void))(v8 + 108);
    return v9();
  }
  return result;
}
