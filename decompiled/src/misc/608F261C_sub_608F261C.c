/* sub_608F261C
 * address: 0x608F261C   size: 636   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F261C(int *a1, void *a2)
{
  int v4; // r0
  _DWORD *v5; // r0
  int v6; // r10
  int v7; // r9
  int v8; // r5
  int v9; // r7
  unsigned int v10; // r7
  int v11; // r0
  unsigned int *v12; // r0
  unsigned int v13; // r1
  _QWORD v15[12]; // [sp+0h] [bp-90h] BYREF
  int v16; // [sp+60h] [bp-30h] BYREF
  int v17; // [sp+64h] [bp-2Ch] BYREF
  int v18; // [sp+68h] [bp-28h] BYREF
  int v19; // [sp+6Ch] [bp-24h] BYREF

  v4 = operator_new_8DE25C(0x3018u, a2, 8);
  v5 = (_DWORD *)sub_60998C70(v4);
  a1[9] = (int)v5;
  *v5 = a1[6];
  *(_BYTE *)(a1[9] + 12296) = 1;
  *(_DWORD *)(a1[9] + 12300) = sub_6083ACBC(a1[6]);
  dword_60CC72BC(a1[6], 15, &v19);
  dword_60CC72BC(a1[6], 16, &v18);
  dword_60CC72BC(a1[6], 17, &v17);
  dword_60CC72BC(a1[6], 18, &v16);
  a1[54] = operator_new_8DE25C(0x100u, a2, 4);
  v6 = a1[57];
  v7 = a1[58];
  v8 = v18;
  v9 = v19;
  dword_60CC73C4(v15);
  dword_60CC73C0(v15, a1[6]);
  dword_60CC73CC(v15, 34);
  v10 = (v9 * v6 + v8 * v7 + 4095) & 0xFFFFF000;
  v11 = operator_new_8DE2C8(v10, (int)a2, 4096);
  dword_60CC73C8(v15, v11, v10);
  dword_60CC73DC(a1[54], v15);
  dword_60CC7424(a1 + 20, a1[54], 0, a1[58]);
  dword_60CC7404(a1 + 12, a1[54], v18 * a1[58], a1[57]);
  a1[55] = v16;
  a1[56] = v17;
  nn__os__GetSystemTick((nn__os *)v15);
  unk_60CCEC30 = v15[0];
  dword_60CC75DC(v15);
  dword_60CC75D8(v15, a1[6]);
  dword_60CC7638(a1 + 28, v15);
  sead__CriticalSection__lock((int)(a1 + 77));
  v12 = (unsigned int *)(a1 + 55);
  do
    v13 = __ldrex(v12);
  while ( __strex(v13 + 1, v12) );
  a1[52] = v13;
  dword_60CC7430(a1 + 20);
  return sead__CriticalSection__unlock((int)(a1 + 77));
}
