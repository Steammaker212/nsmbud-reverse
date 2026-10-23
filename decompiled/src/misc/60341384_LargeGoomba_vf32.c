/* LargeGoomba_vf32
 * address: 0x60341384   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LargeGoomba_vf32(char *a1)
{
  a1[6398] = 1;
  (*(void (__fastcall **)(char *, _DWORD))(*(_DWORD *)a1 + 660))(a1, a1[84]);
  (*(void (__fastcall **)(char *))(*(_DWORD *)a1 + 672))(a1);
  return (*(int (__fastcall **)(char *, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C945FC);
}
