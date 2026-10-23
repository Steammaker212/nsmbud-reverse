/* sub_608EE56C
 * address: 0x608EE56C   size: 1412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608EE56C(int a1)
{
  int v2; // r7
  int v3; // r9
  int v4; // r11
  int v5; // r6
  void (__fastcall ***v6)(_DWORD, int, _DWORD); // r0
  void (__fastcall ***v7)(_DWORD, int, _DWORD); // r0
  void (__fastcall ***v8)(_DWORD, int, _DWORD); // r0
  void (__fastcall ***v9)(_DWORD, int, _DWORD); // r0
  void (__fastcall ***v10)(_DWORD, int, _DWORD); // r0
  void (__fastcall ***v11)(_DWORD, int, int); // r0
  void (__fastcall ***v12)(_DWORD, int, int); // r0
  int v14; // [sp+30h] [bp-38h]
  int v15; // [sp+34h] [bp-34h]
  int v16; // [sp+38h] [bp-30h]
  int (**v17)(); // [sp+3Ch] [bp-2Ch] BYREF
  const char *v18; // [sp+40h] [bp-28h]

  sub_6091209C();
  *(_DWORD *)a1 = off_60C5C664;
  FIELD_U32(a1, 40) = off_60BFA048;
  v15 = a1 + 40;
  sead__TreeNode__ctor((_DWORD *)(a1 + 56));
  FIELD_U32(a1, 72) = a1 + 40;
  FIELD_U32(a1, 76) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 80) = &byte_60ABC94D;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 40));
  FIELD_U32(a1, 40) = off_60BFA048;
  FIELD_U32(a1, 100) = a1 + 4;
  FIELD_U32(a1, 112) = 0;
  FIELD_U32(a1, 116) = 0;
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 92) = 0;
  FIELD_U32(a1, 96) = 0;
  FIELD_U32(a1, 84) = off_60BFA060;
  FIELD_U32(a1, 108) = 0;
  FIELD_U32(a1, 120) = off_60BFA048;
  sead__TreeNode__ctor((_DWORD *)(a1 + 136));
  FIELD_U32(a1, 152) = a1 + 120;
  FIELD_U32(a1, 156) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 160) = &byte_60ABC94D;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 120));
  FIELD_U32(a1, 120) = off_60BFA048;
  FIELD_U32(a1, 180) = a1 + 4;
  FIELD_U32(a1, 192) = 0;
  FIELD_U32(a1, 196) = 0;
  FIELD_U32(a1, 168) = 0;
  FIELD_U32(a1, 172) = 0;
  FIELD_U32(a1, 176) = 0;
  FIELD_U32(a1, 164) = off_60BFA060;
  FIELD_U32(a1, 188) = 0;
  FIELD_U32(a1, 200) = off_60BFA048;
  sead__TreeNode__ctor((_DWORD *)(a1 + 216));
  FIELD_U32(a1, 232) = a1 + 200;
  FIELD_U32(a1, 236) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 240) = &byte_60ABC94D;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 200));
  FIELD_U32(a1, 200) = off_60BFA048;
  FIELD_U32(a1, 260) = a1 + 4;
  FIELD_U32(a1, 272) = 0;
  FIELD_U32(a1, 276) = 0;
  FIELD_U32(a1, 248) = 0;
  FIELD_U32(a1, 252) = 0;
  FIELD_U32(a1, 256) = 0;
  FIELD_U32(a1, 244) = off_60BFA060;
  FIELD_U32(a1, 268) = 0;
  FIELD_U32(a1, 280) = off_60BFA048;
  v16 = a1 + 280;
  sead__TreeNode__ctor((_DWORD *)(a1 + 296));
  FIELD_U32(a1, 312) = a1 + 280;
  FIELD_U32(a1, 316) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 320) = &byte_60ABC94D;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 280));
  FIELD_U32(a1, 280) = off_60BFA048;
  FIELD_U32(a1, 340) = a1 + 4;
  FIELD_U32(a1, 352) = 0;
  FIELD_U32(a1, 356) = 0;
  FIELD_U32(a1, 328) = 0;
  FIELD_U32(a1, 332) = 0;
  FIELD_U32(a1, 336) = 0;
  FIELD_U32(a1, 324) = off_60BFA060;
  FIELD_U32(a1, 348) = 0;
  FIELD_U32(a1, 360) = off_60BFA048;
  sead__TreeNode__ctor((_DWORD *)(a1 + 376));
  FIELD_U32(a1, 392) = a1 + 360;
  FIELD_U32(a1, 396) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 400) = &byte_60ABC94D;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 360));
  FIELD_U32(a1, 360) = off_60BFA048;
  FIELD_U32(a1, 420) = a1 + 4;
  FIELD_U32(a1, 432) = 0;
  FIELD_U32(a1, 436) = 0;
  FIELD_U32(a1, 408) = 0;
  FIELD_U32(a1, 412) = 0;
  FIELD_U32(a1, 416) = 0;
  FIELD_U32(a1, 404) = off_60BFA060;
  FIELD_U32(a1, 428) = 0;
  FIELD_U32(a1, 440) = off_60BFA048;
  sead__TreeNode__ctor((_DWORD *)(a1 + 456));
  FIELD_U32(a1, 472) = a1 + 440;
  FIELD_U32(a1, 476) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 480) = &byte_60ABC94D;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 440));
  FIELD_U32(a1, 440) = off_60BFA048;
  FIELD_U32(a1, 500) = a1 + 4;
  FIELD_U32(a1, 512) = 0;
  FIELD_U32(a1, 516) = 0;
  FIELD_U32(a1, 488) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 484) = off_60BFA060;
  FIELD_U32(a1, 508) = 0;
  FIELD_U32(a1, 520) = off_60BFA048;
  sead__TreeNode__ctor((_DWORD *)(a1 + 536));
  FIELD_U32(a1, 552) = a1 + 520;
  FIELD_U32(a1, 556) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 560) = &byte_60ABC94D;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 520));
  FIELD_U32(a1, 520) = off_60BFA048;
  FIELD_U32(a1, 580) = a1 + 4;
  FIELD_U32(a1, 592) = 0;
  FIELD_U32(a1, 596) = 0;
  FIELD_U32(a1, 568) = 0;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 0;
  FIELD_U32(a1, 564) = off_60BFA060;
  FIELD_U32(a1, 588) = 0;
  v17 = &sead__SafeStringBase__vtable;
  v18 = "sead__RootCalc";
  sead__SafeStringBase__operator_assign(a1 + 76, (int)&v17);
  v17 = &sead__SafeStringBase__vtable;
  v18 = "sead__SysCalc";
  sead__SafeStringBase__operator_assign(a1 + 156, (int)&v17);
  v17 = &sead__SafeStringBase__vtable;
  v18 = "sead__AppCalc";
  sead__SafeStringBase__operator_assign(a1 + 236, (int)&v17);
  v17 = &sead__SafeStringBase__vtable;
  v18 = "sead__RootDraw";
  sead__SafeStringBase__operator_assign(a1 + 316, (int)&v17);
  v17 = &sead__SafeStringBase__vtable;
  v18 = "sead__SysDraw";
  sead__SafeStringBase__operator_assign(a1 + 396, (int)&v17);
  v17 = &sead__SafeStringBase__vtable;
  v18 = "sead__AppDraw";
  sead__SafeStringBase__operator_assign(a1 + 476, (int)&v17);
  v17 = &sead__SafeStringBase__vtable;
  v2 = a1 + 200;
  v18 = "sead__AppDrawFinal";
  sead__SafeStringBase__operator_assign(a1 + 556, (int)&v17);
  v3 = a1 + 120;
  sead__MethodTreeNode__pushBackChild(a1 + 40, (_DWORD *)(a1 + 120));
  sead__MethodTreeNode__pushBackChild(a1 + 40, (_DWORD *)(a1 + 200));
  v4 = a1 + 440;
  sead__MethodTreeNode__pushBackChild(a1 + 280, (_DWORD *)(a1 + 440));
  sead__MethodTreeNode__pushBackChild(a1 + 280, (_DWORD *)(a1 + 520));
  v5 = a1 + 360;
  sead__MethodTreeNode__pushBackChild(a1 + 280, (_DWORD *)(a1 + 360));
  sead__MethodTreeNode__lock(a1 + 120);
  v6 = *(void (__fastcall ****)(_DWORD, int, _DWORD))(a1 + 192);
  if ( v6 )
    (**v6)(v6, v3, 0);
  FIELD_U32(a1, 188) = 0;
  sead__MethodTreeNode__unlock(v3);
  sead__MethodTreeNode__lock(v5);
  v7 = *(void (__fastcall ****)(_DWORD, int, _DWORD))(a1 + 432);
  if ( v7 )
    (**v7)(v7, v5, 0);
  FIELD_U32(a1, 428) = 0;
  sead__MethodTreeNode__unlock(v5);
  sead__MethodTreeNode__lock(v2);
  v8 = *(void (__fastcall ****)(_DWORD, int, _DWORD))(a1 + 272);
  v14 = a1 + 520;
  if ( v8 )
    (**v8)(v8, v2, 0);
  FIELD_U32(a1, 268) = 0;
  sead__MethodTreeNode__unlock(v2);
  sead__MethodTreeNode__lock(v4);
  v9 = *(void (__fastcall ****)(_DWORD, int, _DWORD))(a1 + 512);
  if ( v9 )
    (**v9)(v9, v4, 0);
  FIELD_U32(a1, 508) = 0;
  sead__MethodTreeNode__unlock(v4);
  sead__MethodTreeNode__lock(v14);
  v10 = *(void (__fastcall ****)(_DWORD, int, _DWORD))(a1 + 592);
  if ( v10 )
    (**v10)(v10, v14, 0);
  FIELD_U32(a1, 588) = 0;
  sead__MethodTreeNode__unlock(v14);
  sead__MethodTreeNode__lock(v15);
  v11 = *(void (__fastcall ****)(_DWORD, int, int))(a1 + 112);
  if ( v11 )
    (**v11)(v11, v15, 3);
  FIELD_U32(a1, 108) = 3;
  sead__MethodTreeNode__unlock(v15);
  sead__MethodTreeNode__lock(v16);
  v12 = *(void (__fastcall ****)(_DWORD, int, int))(a1 + 352);
  if ( v12 )
    (**v12)(v12, v16, 3);
  FIELD_U32(a1, 348) = 3;
  sead__MethodTreeNode__unlock(v16);
  return a1;
}
