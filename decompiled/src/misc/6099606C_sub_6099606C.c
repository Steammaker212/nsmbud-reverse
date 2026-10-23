/* sub_6099606C
 * address: 0x6099606C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099606C(int *a1)
{
  char v2; // r1
  int v3; // r0
  int result; // r0

  v2 = *((_BYTE *)a1 + 30);
  v3 = *a1;
  if ( (v2 & 0x40) != 0 )
    (*(void (__fastcall **)(int *))(v3 + 24))(a1);
  else
    (*(void (__fastcall **)(int *))(v3 + 32))(a1);
  result = a1[16];
  if ( result )
    return (*(int (__fastcall **)(int, _DWORD, float))(*(_DWORD *)result + 92))(result, 0, -1.0);
  return result;
}
