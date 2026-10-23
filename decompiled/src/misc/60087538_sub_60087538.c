/* sub_60087538
 * address: 0x60087538   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60087538(int result)
{
  _DWORD *v1; // r1
  int v2; // r2
  unsigned int v3; // r3
  unsigned int v4; // r1

  v1 = *(_DWORD **)(result + 7100);
  v2 = v1[3];
  v3 = v1[2];
  v4 = v1[17];
  if ( v3 > v4 )
    v2 += 4 * v4;
  if ( (*(_BYTE *)(*(_DWORD *)v2 + 28) & 0x20) != 0
    || (float)(FIELD_F32(result, 112) + 36.0) <= FIELD_F32(dword_60CC6484, 132) )
  {
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)result + 192))(result, &unk_60C81E6C);
  }
  return result;
}
