/* RDashRes_ref
 * address: 0x60820C88   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall RDashRes_ref(int a1, void *a2)
{
  _DWORD *v4; // r6
  int v5; // r9
  sead_ListNode *v6; // r5
  _DWORD v8[2]; // [sp+0h] [bp-30h] BYREF
  int (**v9)(); // [sp+8h] [bp-28h] BYREF
  const char *v10; // [sp+Ch] [bp-24h]

  v4 = (_DWORD *)operator_new_8DE25C(0x8Cu, a2, 4);
  v4[1] = v4 + 3;
  *v4 = &BufferedSafeStringBase_char_vtable_probably;
  v4[2] = 128;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)v4);
  *(_BYTE *)v4[1] = 0;
  *v4 = &off_60BD95A8;
  *(_BYTE *)v4[1] = 0;
  FIELD_U8(a1, 16) = 1;
  v5 = FIELD_U32(dword_60CCEBD0, 32);
  v6 = (sead_ListNode *)operator_new_8DE25C(0x160u, a2, 4);
  v8[0] = &sead__SafeStringBase__vtable;
  v9 = &sead__SafeStringBase__vtable;
  v10 = "rdash";
  v8[1] = "RDashRes/";
  ((void (__fastcall *)(sead_ListNode *, int (***)(), int, _DWORD *))sub_608E3AA4)(v6, &v9, v5, v8);
  FIELD_U32(a1, 20) = v6;
  v9 = &sead__SafeStringBase__vtable;
  v10 = "rdash";
  return sub_608E83B4((sead_ListNode *)dword_60CCEBD0, v6, &v9);
}
