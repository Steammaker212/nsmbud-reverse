/* sub_6016C608
 * address: 0x6016C608   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6016C608(_DWORD *a1)
{
  int v2; // r0
  _DWORD *v3; // r6
  _DWORD *v4; // r4
  int v5; // t1
  _DWORD *v6; // r5
  char v7; // r12
  int v8; // r0
  int v9; // r2
  int v10; // r2
  unsigned int v11; // r1
  int *v12; // r0
  int v13; // r4
  int v14; // r6
  bool v15; // zf
  int result; // r0
  int v17; // [sp+4h] [bp-1Ch] BYREF
  int v18; // [sp+8h] [bp-18h]
  int v19; // [sp+Ch] [bp-14h]

  v2 = sub_601CF9C0(dword_60C8AEF0);
  v17 = -1;
  v18 = -1;
  v19 = -1;
  sub_6019EC34(&v17, v2 + 1032);
  a1[340] = v17;
  a1[341] = v18;
  sub_601861EC(a1);
  sub_6016C320((int)a1);
  v3 = a1 + 88;
  a1[79] = a1[178];
  a1[80] = a1[179];
  a1[81] = a1[180];
  a1[82] = a1[181];
  a1[83] = a1[182];
  a1[84] = a1[183];
  sub_6090C42C(a1 + 88);
  v5 = a1[66];
  v4 = a1 + 66;
  (*(void (__fastcall **)(_DWORD *, _DWORD *))(v5 + 16))(v4, v4 + 1);
  v6 = v4 + 68;
  sub_60411260(v4 + 68, v4, v3);
  v8 = dword_60CD0B40;
  v9 = FIELD_U32(dword_60CD0B40, 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 7u )
    v9 += 28;
  *(_DWORD *)(*(_DWORD *)v9 + 72) = v4;
  v10 = FIELD_U32(v8, 36);
  if ( FIELD_U32(v8, 32) > 7u )
    v10 += 28;
  *(_DWORD *)(*(_DWORD *)v10 + 76) = v3;
  v11 = FIELD_U32(v8, 32);
  v12 = *(int **)(v8 + 36);
  if ( v11 > 7 )
    v12 += 7;
  v13 = *v12;
  if ( ((unsigned int)&dword_60C81740 & ~(1612105528 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C81740) )
  {
    dword_60C8173C = (int)&off_60BC6E70;
    _cxa_guard_release(&dword_60C81740);
  }
  v14 = v13 + 428;
  v15 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v13 + 8))(v13, &dword_60C8173C) == 0;
  result = 1;
  if ( v15 )
    v14 = 428;
  *(_DWORD *)v14 = v6;
  return result;
}
