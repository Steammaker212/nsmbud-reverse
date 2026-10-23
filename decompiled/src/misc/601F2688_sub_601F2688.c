/* sub_601F2688
 * address: 0x601F2688   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601F2688(int a1, int a2, int a3, int a4, float a5, float a6)
{
  char v8; // r4
  int result; // r0
  _DWORD *v11; // r7
  int v12; // r6
  int v13; // r0
  _DWORD *v14; // r0
  int v15; // r1
  unsigned int v16; // r2
  unsigned int v17; // r0
  _DWORD *v18; // r0
  int v19; // r1
  unsigned int v20; // r2
  unsigned int v21; // r0

  v8 = a2;
  if ( FIELD_U8(a1, 728) != a2 || (result = 0, a4 == 1) )
  {
    v11 = *(_DWORD **)(a1 + 304);
    v12 = FIELD_U32(a1, 308);
    v13 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 368))(a1, a2);
    sub_60421938(v11, v12, v13);
    v14 = *(_DWORD **)(a1 + 304);
    v15 = v14[3];
    v16 = v14[2];
    v17 = v14[17];
    if ( v16 > v17 )
      v15 += 4 * v17;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v15 + 4), a3);
    v18 = *(_DWORD **)(a1 + 304);
    v19 = v18[3];
    v20 = v18[2];
    v21 = v18[17];
    if ( v20 > v21 )
      v19 += 4 * v21;
    *(float *)(*(_DWORD *)v19 + 24) = a6;
    FIELD_U8(a1, 728) = v8;
    return 1;
  }
  return result;
}
