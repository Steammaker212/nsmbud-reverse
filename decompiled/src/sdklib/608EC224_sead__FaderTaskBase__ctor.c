/* sead__FaderTaskBase__ctor
 * address: 0x608EC224   size: 672   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sead__FaderTaskBase__ctor(int a1, int **a2, const char *a3)
{
  sead_IDisposer *v4; // r0
  void (__fastcall ***v5)(_DWORD, int, int); // r0
  int (**v8)(); // [sp+Ch] [bp-2Ch] BYREF
  const char *v9; // [sp+10h] [bp-28h]

  sead__TaskBase__ctor((sead_IDisposer *)a1, a2, (int)a3);
  *(_DWORD *)a1 = off_60C5C4B0;
  FIELD_U32(a1, 112) = 5;
  sub_608EEFA8(a1 + 120);
  FIELD_U32(a1, 248) = 0;
  v4 = sead_IDisposer_ctor((sead_IDisposer *)(a1 + 252));
  FIELD_U32(a1, 252) = off_60C26570;
  FIELD_U32(a1, 268) = 0;
  FIELD_U32(a1, 272) = 0;
  FIELD_U32(a1, 276) = v4;
  FIELD_U32(a1, 280) = 0;
  FIELD_U8(a1, 308) = 0;
  FIELD_U32(a1, 292) = a1;
  FIELD_U32(a1, 296) = sub_608EC4FC;
  FIELD_U32(a1, 300) = 0;
  FIELD_U32(a1, 288) = off_60C5C52C;
  FIELD_U32(a1, 284) = a1 + 288;
  FIELD_U32(a1, 312) = off_60BFA048;
  sead__TreeNode__ctor((_DWORD *)(a1 + 328));
  FIELD_U32(a1, 344) = a1 + 312;
  FIELD_U32(a1, 348) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 352) = &byte_60ABC94D;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 312));
  FIELD_U32(a1, 312) = off_60BFA048;
  FIELD_U32(a1, 384) = 0;
  FIELD_U32(a1, 388) = 0;
  FIELD_U32(a1, 372) = 0;
  FIELD_U32(a1, 368) = 0;
  FIELD_U32(a1, 364) = 0;
  FIELD_U32(a1, 360) = 0;
  FIELD_U32(a1, 356) = off_60BFA060;
  FIELD_U32(a1, 380) = 0;
  FIELD_U32(a1, 392) = off_60BFA048;
  sead__TreeNode__ctor((_DWORD *)(a1 + 408));
  FIELD_U32(a1, 424) = a1 + 392;
  FIELD_U32(a1, 428) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 432) = &byte_60ABC94D;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 392));
  FIELD_U32(a1, 392) = off_60BFA048;
  FIELD_U32(a1, 464) = 0;
  FIELD_U32(a1, 468) = 0;
  FIELD_U32(a1, 452) = 0;
  FIELD_U32(a1, 448) = 0;
  FIELD_U32(a1, 444) = 0;
  FIELD_U32(a1, 440) = 0;
  FIELD_U32(a1, 436) = off_60BFA060;
  FIELD_U32(a1, 460) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 116) = 0;
  FIELD_U32(a1, 472) = 0;
  FIELD_U32(a1, 476) = 30;
  FIELD_U32(a1, 480) = 31;
  FIELD_U32(a1, 484) = 61;
  FIELD_U8(a1, 492) = 0;
  FIELD_U32(a1, 488) = 0;
  v8 = &sead__SafeStringBase__vtable;
  v9 = a3;
  sead__SafeStringBase__operator_assign(a1 + 348, (int)&v8);
  sead__MethodTreeNode__lock(a1 + 312);
  v5 = *(void (__fastcall ****)(_DWORD, int, int))(a1 + 384);
  if ( v5 )
    (**v5)(v5, a1 + 312, 3);
  FIELD_U32(a1, 380) = 3;
  sead__MethodTreeNode__unlock(a1 + 312);
  sead__MethodTreeNode__lock(a1 + 312);
  FIELD_U32(a1, 360) = a1;
  FIELD_U32(a1, 364) = 96;
  FIELD_U32(a1, 368) = 1;
  FIELD_U32(a1, 356) = off_60C5C554;
  sead__MethodTreeNode__unlock(a1 + 312);
  if ( a3 )
  {
    v8 = &sead__SafeStringBase__vtable;
    v9 = a3;
    sead__SafeStringBase__operator_assign(a1 + 348, (int)&v8);
  }
  sead__MethodTreeNode__lock(a1 + 392);
  FIELD_U32(a1, 440) = a1;
  FIELD_U32(a1, 444) = sub_608EC528;
  FIELD_U32(a1, 448) = 0;
  FIELD_U32(a1, 436) = off_60C5C554;
  sead__MethodTreeNode__unlock(a1 + 392);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "calcCore_";
  sead__SafeStringBase__operator_assign(a1 + 428, (int)&v8);
  return a1;
}
