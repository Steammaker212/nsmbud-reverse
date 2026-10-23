/* sub_60847AEC
 * address: 0x60847AEC   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60847AEC(int a1, nn__util *a2, int a3, unsigned int a4, int a5, int a6)
{
  int v9; // r4
  int v10; // r6
  void *v11; // r10
  const void *v12; // r5
  unsigned int v13; // r0
  unsigned int v15[30]; // [sp+8h] [bp-78h] BYREF

  v9 = sub_60847DAC(a5, a6);
  ((void (__fastcall *)(int))loc_60847C24)(a5);
  qmemcpy(v15, (const void *)((int (__fastcall *)(_DWORD, int, int))loc_60847C5C)(FIELD_U32(a1, 12), a5, v9), 0x58u);
  v10 = FIELD_U32(a1, 12);
  v11 = (void *)sub_608478BC((int)v15);
  v12 = (const void *)sub_608478C4((int)v15);
  v13 = sub_608478CC(v15, v10);
  return nn__util__DecompressZlib(a2, v11, v13, v12, a4, (void *)0x1BF0, v15[0]);
}
