/* HammerBro_ctor
 * address: 0x602CBB20   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *__fastcall HammerBro_ctor(int a1)
{
  int v2; // r0
  void *result; // r0

  v2 = operator_new(0x30D0u);
  result = (void *)BrosBase_ctor(v2, a1);
  *(_DWORD *)result = &HammerBros_vtable;
  *((_DWORD *)result + 0xC32) = 0;
  *((_DWORD *)result + 0xC31) = 0;
  *((_DWORD *)result + 0xC30) = 0;
  *((_DWORD *)result + 0xC2F) = 0;
  *((_DWORD *)result + 0xC2D) = 0;
  *((_DWORD *)result + 0xC2E) = 0;
  return result;
}
