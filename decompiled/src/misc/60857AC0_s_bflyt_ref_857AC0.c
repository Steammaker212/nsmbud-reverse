/* s_bflyt_ref_857AC0
 * address: 0x60857AC0   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall s_bflyt_ref_857AC0(int a1, const char *a2)
{
  _BYTE v4[88]; // [sp+0h] [bp-58h] BYREF

  nn__util__SNPrintf((nn__util *)v4, (char *)0x48, (unsigned int)"%s.bflyt", a2);
  return (*(int (__fastcall **)(_DWORD, int, _BYTE *))(**(_DWORD **)(a1 + 36) + 32))(
           FIELD_U32(a1, 36),
           1651276148,
           v4);
}
