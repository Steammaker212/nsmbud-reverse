/* sub_60081E08
 * address: 0x60081E08   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60081E08(int a1)
{
  int v2; // r5
  int v3; // r1
  unsigned int v4; // r0
  int result; // r0

  v2 = a1 + 7100;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1068))(a1);
  v3 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v4 )
    v3 += 4 * v4;
  result = *(unsigned __int8 *)(*(_DWORD *)v3 + 28);
  if ( (result & 0x20) != 0 )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C819C8);
  return result;
}
