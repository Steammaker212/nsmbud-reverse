/* SEAD_META_HEAP__03d_ref
 * address: 0x608FA528   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SEAD_META_HEAP__03d_ref(int a1, int a2)
{
  unsigned int v4; // s16
  int v5; // r2

  v4 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 60))(a1);
  v5 = 10
     * (int)(float)((float)(1.0
                          - (float)((float)v4
                                  / (float)(unsigned int)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 56))(a1)))
                  * 10.0);
  return sub_608FDDF4(a2, "$SEAD_META_HEAP_%03d", v5);
}
