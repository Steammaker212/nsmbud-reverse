/* sub_60847A7C
 * address: 0x60847A7C   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60847A7C(int a1, nn__util *a2, int a3, unsigned int a4, _DWORD *a5)
{
  int v5; // r7
  void *v8; // r10
  const void *v9; // r4
  unsigned int v10; // r0
  unsigned int v12; // [sp+8h] [bp-20h]

  v5 = FIELD_U32(a1, 8);
  v8 = (void *)sub_608478BC((int)a5);
  v9 = (const void *)sub_608478C4((int)a5);
  v10 = sub_608478CC(a5, v5);
  return nn__util__DecompressZlib(a2, v8, v10, v9, a4, (void *)0x1BF0, v12);
}
