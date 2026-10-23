/* SaveMgrThread_ref
 * address: 0x6082693C   size: 672   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SaveMgrThread_ref(int a1, void *a2)
{
  void *v4; // r0
  int v5; // r0
  __int64 v6; // r0
  int v7; // r6
  _DWORD *v8; // r0
  _DWORD v10[8]; // [sp+18h] [bp-20h] BYREF

  v4 = (void *)operator_new_8DE25C(0xC274u, a2, 64);
  FIELD_U32(a1, 40) = v4;
  memset(v4, 0, 0xC274u);
  v5 = FIELD_U32(a1, 40);
  FIELD_U8(v5, 15) = 0;
  FIELD_U8(v5, 14) = 0;
  FIELD_U8(v5, 11) = 0;
  FIELD_U8(v5, 10) = 0;
  FIELD_U8(v5, 13) = 0;
  FIELD_U8(v5, 12) = 0;
  *(_DWORD *)v5 = 1380995908;
  FIELD_U32(v5, 4) = 131073;
  FIELD_U16(v5, 8) = 0;
  memset((void *)(FIELD_U32(a1, 40) + 16), 0, 0x208u);
  memset((void *)(FIELD_U32(a1, 40) + 3136), 0, 0x208u);
  memset((void *)(FIELD_U32(a1, 40) + 536), 0, 0x208u);
  memset((void *)(FIELD_U32(a1, 40) + 3656), 0, 0x208u);
  memset((void *)(FIELD_U32(a1, 40) + 1056), 0, 0x208u);
  memset((void *)(FIELD_U32(a1, 40) + 4176), 0, 0x208u);
  memset((void *)(FIELD_U32(a1, 40) + 1576), 0, 0x208u);
  memset((void *)(FIELD_U32(a1, 40) + 4696), 0, 0x208u);
  memset((void *)(FIELD_U32(a1, 40) + 2096), 0, 0x208u);
  memset((void *)(FIELD_U32(a1, 40) + 5216), 0, 0x208u);
  memset((void *)(FIELD_U32(a1, 40) + 2616), 0, 0x208u);
  memset((void *)(FIELD_U32(a1, 40) + 5736), 0, 0x208u);
  memset((void *)(FIELD_U32(a1, 40) + 6256), 0, 0x340Cu);
  memset((void *)(FIELD_U32(a1, 40) + 19580), 0, 0xA8u);
  memset((void *)(FIELD_U32(a1, 40) + 19748), 0, 0x5F38u);
  memset((void *)(FIELD_U32(a1, 40) + 19748), 255, 0x5F28u);
  memset((void *)(FIELD_U32(a1, 40) + 44124), 0, 0xC0u);
  memset((void *)(FIELD_U32(a1, 40) + 44316), 0, 0x1558u);
  if ( dword_60CC6BE4 )
    v6 = FIELD_U64(dword_60CC6BE4, 200);
  else
    v6 = 0;
  FIELD_U64(a1, 64) = v6;
  FIELD_U32(a1, 72) = 0;
  FIELD_U32(a1, 76) = 0;
  v7 = operator_new_8DE25C(0x94u, a2, 4);
  v10[0] = &sead__SafeStringBase__vtable;
  v10[1] = "SaveMgrThread";
  v8 = (_DWORD *)operator_new_8DE25C(0x10u, a2, 4);
  v8[1] = a1;
  v8[2] = sub_60826BF4;
  v8[3] = 0;
  *v8 = off_60C2A74C;
  sub_6090891C(v7, v10, v8, a2, dword_60CC6E08, 0, 0x7FFFFFFF, 20480, 32);
  FIELD_U32(a1, 20) = v7;
  return (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 24))(v7);
}
