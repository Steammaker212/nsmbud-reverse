/* LavaGeyser_vf176
 * address: 0x6070CBE8   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LavaGeyser_vf176(float *a1)
{
  float v2; // s2
  float v3; // s0

  v2 = a1[1579] + a1[37];
  a1[37] = v2;
  v3 = a1[1598];
  if ( v2 >= v3 )
  {
    a1[37] = v3;
    (*(void (__fastcall **)(float *, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CBCAEC);
  }
  return (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 636))(a1);
}
