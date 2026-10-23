/* Capture_ref
 * address: 0x604102A0   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Capture_ref(_DWORD *a1)
{
  char v1; // r12
  _DWORD *v3; // r0
  _DWORD *v4; // r5
  _DWORD *v5; // r6
  _DWORD *v6; // r4
  int v7; // t1
  _DWORD v9[8]; // [sp+0h] [bp-20h] BYREF

  v3 = *(_DWORD **)(dword_60CD0B40 + 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 1u )
    ++v3;
  v4 = (_DWORD *)*v3;
  if ( ((unsigned int)&dword_60C81740 & ~(1614873308 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C81740) )
  {
    dword_60C8173C = (int)&off_60BC6E70;
    _cxa_guard_release(&dword_60C81740);
  }
  v5 = 0;
  if ( v4 )
  {
    v5 = (_DWORD *)(*(int (__fastcall **)(_DWORD *, int *))(*v4 + 8))(v4, &dword_60C8173C);
    if ( v5 )
      v5 = v4;
  }
  a1[25] = 0;
  a1[17] = 0;
  a1[18] = 0;
  a1[19] = 1148846080;
  a1[20] = 0;
  a1[21] = 0;
  a1[22] = 0;
  a1[23] = 0;
  a1[24] = 1065353216;
  v7 = a1[4];
  v6 = a1 + 4;
  (*(void (__fastcall **)(_DWORD *, _DWORD *))(v7 + 16))(v6, v6 + 1);
  sub_6090C9A0((int)(v6 + 22));
  v6[59] = -1027080192;
  v6[60] = 1176256512;
  *((_BYTE *)v6 + 92) = 1;
  v5[18] = v6;
  v5[19] = v6 + 22;
  *(_DWORD *)(v5[105] + 880) = v6 + 65;
  sub_6095537C(**(_DWORD **)(dword_60CD0B40 + 36), 0, v6 + 3182);
  v9[0] = &sead__SafeStringBase__vtable;
  v9[1] = "Capture";
  nullsub_123(v6 + 3199, 1, v9, 0);
  return 1;
}
