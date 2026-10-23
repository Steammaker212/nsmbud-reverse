/* s__s_bflan_ref
 * address: 0x60856BD4   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall s__s_bflan_ref(int a1, int a2)
{
  _BYTE v4[152]; // [sp+8h] [bp-98h] BYREF

  nn__util__SNPrintf((nn__util *)v4, (char *)0x88, (unsigned int)"%s_%s.bflan", *(const char **)(a1 + 28), a2);
  return (*(int (__fastcall **)(_DWORD, int, _BYTE *))(**(_DWORD **)(a1 + 36) + 32))(
           FIELD_U32(a1, 36),
           1634625901,
           v4);
}
