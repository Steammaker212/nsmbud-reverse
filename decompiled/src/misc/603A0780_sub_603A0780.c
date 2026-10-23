/* sub_603A0780
 * address: 0x603A0780   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603A0780(int a1, float *a2)
{
  char v2; // r12
  int v5; // r0
  float v6; // s0

  if ( !a2 || FIELD_U8(a1, 84) > 3u )
    return 0;
  v5 = FIELD_U32(a1, 2872);
  if ( (v5 & 1) != 0 )
  {
    if ( (v5 & 0x10100) != 0 )
      return 0;
  }
  else if ( FIELD_F32(a1, 112) >= (float)(a2[28] + 4.0) )
  {
    return 0;
  }
  if ( ((unsigned int)&dword_60C7B37C & ~(1614415856 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( (**(int (__fastcall ***)(float *, int *))a2)(a2, &dword_60C7B378) == 1
    && !(*(int (__fastcall **)(float *))(*(_DWORD *)a2 + 1156))(a2) )
  {
    v6 = (float)byte_60AFE3F4[sub_6000ADDC(a1, (int)a2)];
    if ( (float)(FIELD_F32(a1, 120) * v6) > 0.0 )
      return (float)(v6 * a2[22]) > 0.0;
  }
  return 0;
}
