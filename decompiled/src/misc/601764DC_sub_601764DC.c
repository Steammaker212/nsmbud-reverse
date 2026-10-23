/* sub_601764DC
 * address: 0x601764DC   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601764DC(float *a1)
{
  _DWORD v3[7]; // [sp+4h] [bp-1Ch] BYREF

  memset(v3, 0, 12);
  (*(void (__fastcall **)(float *, _DWORD *, float))(*(_DWORD *)a1 + 96))(a1, v3, 100.0);
  return sub_60186930(a1, v3, &unk_60AF7A28, a1[32]);
}
