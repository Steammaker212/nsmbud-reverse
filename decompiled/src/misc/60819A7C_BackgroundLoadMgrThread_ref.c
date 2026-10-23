/* BackgroundLoadMgrThread_ref
 * address: 0x60819A7C   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BackgroundLoadMgrThread_ref(int a1, void *a2)
{
  int v4; // r6
  _DWORD *v5; // r7
  int v6; // r0
  _DWORD v8[8]; // [sp+18h] [bp-20h] BYREF

  v4 = operator_new_8DE25C(0x94u, a2, 4);
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = "BackgroundLoadMgrThread";
  v5 = (_DWORD *)operator_new_8DE25C(0x10u, a2, 4);
  v5[1] = a1;
  v5[2] = sub_60819B58;
  v5[3] = 0;
  *v5 = off_60C2A2C0;
  v6 = sead__ThreadUtil__ConvertPrioritySeadToPlatform(22);
  sub_6090891C(v4, v8, v5, a2, v6, 0, 0x7FFFFFFF, 20480, 32);
  FIELD_U32(a1, 36) = v4;
  return (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 24))(v4);
}
