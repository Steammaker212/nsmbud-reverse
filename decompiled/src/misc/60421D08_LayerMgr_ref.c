/* LayerMgr_ref
 * address: 0x60421D08   size: 720   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall LayerMgr_ref(sead_IDisposer *a1, int **a2)
{
  void (__fastcall ***vtable)(_DWORD, int *, int); // r0
  void (__fastcall ***v4)(_DWORD, int *, int); // r0
  int (**v6)(); // [sp+4h] [bp-2Ch] BYREF
  const char *v7; // [sp+8h] [bp-28h]

  sead__TaskBase__ctor(a1, a2, (int)"LayerMgr");
  FIELD_U32(a1, 0x0) = (int)off_60BF9F70;
  LOBYTE(FIELD_U32(a1 + (7) * 16, 0x0)) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)((char *)a1 + 116));
  FIELD_U32(a1 + (8) * 16, 0x4) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(a1 + (8) * 16, 0x8) = (int)&byte_60ABC94D;
  FIELD_U32(a1 + (7) * 16, 0x4) = (int)off_60C5E9A4;
  FIELD_U32(a1 + (8) * 16, 0xC) = 0;
  FIELD_U32(a1 + (9) * 16, 0x0) = 0;
  FIELD_U32(a1 + (9) * 16, 0x4) = 1;
  FIELD_U32(a1 + (9) * 16, 0xC) = 0;
  FIELD_U32(a1 + (10) * 16, 0x0) = 0;
  FIELD_U32(a1 + (10) * 16, 0x4) = 0;
  FIELD_U32(a1 + (9) * 16, 0x8) = (int)off_60BD8394;
  FIELD_U32(a1 + (11) * 16, 0x8) = (int)off_60BFA048;
  sead__TreeNode__ctor(&FIELD_U32(a1 + (12) * 16, 0x8));
  FIELD_U32(a1 + (13) * 16, 0x8) = (int)&FIELD_U32(a1 + (11) * 16, 0x8);
  FIELD_U32(a1 + (13) * 16, 0xC) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(a1 + (14) * 16, 0x0) = (int)&byte_60ABC94D;
  sead_IDisposer_ctor((sead_IDisposer *)((char *)a1 + 184));
  FIELD_U32(a1 + (11) * 16, 0x8) = (int)off_60BFA048;
  FIELD_U32(a1 + (16) * 16, 0x0) = 0;
  FIELD_U32(a1 + (16) * 16, 0x4) = 0;
  FIELD_U32(a1 + (15) * 16, 0x4) = 0;
  FIELD_U32(a1 + (15) * 16, 0x0) = 0;
  FIELD_U32(a1 + (14) * 16, 0xC) = 0;
  FIELD_U32(a1 + (14) * 16, 0x8) = 0;
  FIELD_U32(a1 + (14) * 16, 0x4) = (int)off_60BFA060;
  FIELD_U32(a1 + (15) * 16, 0xC) = 0;
  FIELD_U32(a1 + (16) * 16, 0x8) = (int)off_60BFA048;
  sead__TreeNode__ctor(&a1[17].field_8);
  a1[18].field_8 = (int)&FIELD_U32(a1 + (16) * 16, 0x8);
  FIELD_U32(a1 + (18) * 16, 0xC) = (int)&sead__SafeStringBase__vtable;
  a1[19].vtable = (int)&byte_60ABC94D;
  sead_IDisposer_ctor((sead_IDisposer *)((char *)a1 + 264));
  FIELD_U32(a1 + (16) * 16, 0x8) = (int)off_60BFA048;
  FIELD_U32(a1 + (21) * 16, 0x0) = 0;
  a1[21].containingHeap = 0;
  a1[20].containingHeap = 0;
  FIELD_U32(a1 + (20) * 16, 0x0) = 0;
  FIELD_U32(a1 + (19) * 16, 0xC) = 0;
  FIELD_U32(a1 + (19) * 16, 0x8) = 0;
  FIELD_U32(a1 + (19) * 16, 0x4) = (int)off_60BFA060;
  FIELD_U32(a1 + (20) * 16, 0xC) = 0;
  sub_6090E38C(&a1[21].field_8);
  sub_6090C6DC((int)&a1[23]);
  sub_6090A654(&a1[33].field_C);
  LOBYTE(a1[39].containingHeap) = 0;
  a1[39].field_8 = (int)&a1[39].field_8;
  a1[39].field_C = (int)&a1[39].field_8;
  FIELD_U32(a1 + (40) * 16, 0x0) = 0;
  FIELD_U32(a1 + (40) * 16, 0x4) = -1;
  sead__CriticalSection__ctor((sead_IDisposer *)((char *)a1 + 648));
  a1[42].field_C = 1;
  LOBYTE(FIELD_U32(a1 + (43) * 16, 0x0)) = 0;
  BYTE1(FIELD_U32(a1 + (43) * 16, 0x0)) = 0;
  a1[43].containingHeap = 0;
  a1[43].field_8 = 1065353216;
  sub_60443C10(&a1[44]);
  a1[1070].containingHeap = (int)off_60BF9FD0;
  sead__MethodTreeNode__lock(&FIELD_U32(a1 + (11) * 16, 0x8));
  vtable = (void (__fastcall ***)(_DWORD, int *, int))FIELD_U32(a1 + (16) * 16, 0x0);
  if ( vtable )
    (**vtable)(vtable, &FIELD_U32(a1 + (11) * 16, 0x8), 3);
  FIELD_U32(a1 + (15) * 16, 0xC) = 3;
  sead__MethodTreeNode__unlock(&FIELD_U32(a1 + (11) * 16, 0x8));
  sead__MethodTreeNode__lock(&FIELD_U32(a1 + (16) * 16, 0x8));
  v4 = (void (__fastcall ***)(_DWORD, int *, int))FIELD_U32(a1 + (21) * 16, 0x0);
  if ( v4 )
    (**v4)(v4, &FIELD_U32(a1 + (16) * 16, 0x8), 3);
  FIELD_U32(a1 + (20) * 16, 0xC) = 3;
  sead__MethodTreeNode__unlock(&FIELD_U32(a1 + (16) * 16, 0x8));
  sead__MethodTreeNode__lock(&FIELD_U32(a1 + (11) * 16, 0x8));
  FIELD_U32(a1 + (14) * 16, 0x8) = (int)a1;
  FIELD_U32(a1 + (14) * 16, 0xC) = (int)sub_60422010;
  FIELD_U32(a1 + (15) * 16, 0x0) = 0;
  FIELD_U32(a1 + (14) * 16, 0x4) = (int)off_60BFA094;
  sead__MethodTreeNode__unlock(&FIELD_U32(a1 + (11) * 16, 0x8));
  v6 = &sead__SafeStringBase__vtable;
  v7 = "LayerMgr";
  sead__SafeStringBase__operator_assign((int)&FIELD_U32(a1 + (13) * 16, 0xC), (int)&v6);
  sead__MethodTreeNode__lock(&FIELD_U32(a1 + (16) * 16, 0x8));
  FIELD_U32(a1 + (19) * 16, 0x8) = (int)a1;
  FIELD_U32(a1 + (19) * 16, 0xC) = (int)sub_604221B4;
  FIELD_U32(a1 + (20) * 16, 0x0) = 0;
  FIELD_U32(a1 + (19) * 16, 0x4) = (int)off_60BFA094;
  sead__MethodTreeNode__unlock(&FIELD_U32(a1 + (16) * 16, 0x8));
  v6 = &sead__SafeStringBase__vtable;
  v7 = "LayerMgr";
  sead__SafeStringBase__operator_assign((int)&FIELD_U32(a1 + (18) * 16, 0xC), (int)&v6);
  FIELD_U32(a1 + (40) * 16, 0x4) = 904;
  a1[1070].field_8 = 0;
  return a1;
}
