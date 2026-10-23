/* LargeGoomba_vf192
 * address: 0x60342084   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall LargeGoomba_vf192(_DWORD *a1)
{
  unsigned int result; // r0

  (*(void (__fastcall **)(_DWORD *))(*a1 + 644))(a1);
  a1[40] = 0;
  (*(void (__fastcall **)(_DWORD *))(*a1 + 72))(a1);
  result = a1[142] & 0xFFFFFFEF;
  a1[142] = result;
  return result;
}
