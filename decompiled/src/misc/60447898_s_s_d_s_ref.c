/* s_s_d_s_ref
 * address: 0x60447898   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall s_s_d_s_ref(int a1, int a2, int a3)
{
  int v3; // r3
  int v4; // lr
  int v5; // r1

  v3 = FIELD_U32(a2, 4);
  v4 = FIELD_U32(a2, 12);
  v5 = *(unsigned __int16 *)(FIELD_U32(a1, 4) + 94);
  return sub_608FDDF4(
           a1 + 2508,
           "%s>%s>%d(%s)",
           (const char *)(FIELD_U32(v3, 16) + 2),
           (const char *)(*(_DWORD *)(FIELD_U32(v3, 64) + 184 * v5 + 16) + 2),
           a3,
           (&off_60BFB050)[*(_BYTE *)(v4 + 776 * v5 + 460) & 7]);
}
