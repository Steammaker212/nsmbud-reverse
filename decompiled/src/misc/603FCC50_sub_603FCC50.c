/* sub_603FCC50
 * address: 0x603FCC50   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603FCC50(int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r7
  int v4; // r6
  void *v6; // r5
  _BYTE v7[72]; // [sp+0h] [bp-60h] BYREF

  v3 = 0;
  v4 = a1 + 20;
  if ( a2 >= 6 )
    a2 = 0;
  v6 = (void *)(v4 + 72 * a2);
  qmemcpy(v7, v6, sizeof(v7));
  if ( a3 < 6 )
    v3 = a3;
  qmemcpy(v6, (const void *)(v4 + 72 * v3), 0x48u);
  qmemcpy((void *)(v4 + 72 * v3), v7, 0x48u);
}
