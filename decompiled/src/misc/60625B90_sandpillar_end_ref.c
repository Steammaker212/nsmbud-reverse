/* sandpillar_end_ref
 * address: 0x60625B90   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sandpillar_end_ref(int a1)
{
  int v1; // r0
  _DWORD *v2; // r4
  int v3; // r1
  int v4; // r0
  _DWORD v6[4]; // [sp+0h] [bp-10h] BYREF

  v2 = (_DWORD *)(a1 + 6136);
  v1 = FIELD_U32(a1, 6136);
  v3 = *(v2 - 2);
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "sandpillar_end";
  sub_60446088(v1, v3, v6);
  v4 = *v2;
  FIELD_U32(v4, 20) = 0;
  FIELD_U32(v4, 28) |= 2u;
  AnimationCtrl_setRepeat((ModelAnimation *)(*v2 + 4), 1);
  *(_DWORD *)(v2[1] + 24) = 1065353216;
  *((_WORD *)v2 - 6) = 100;
  return 100;
}
