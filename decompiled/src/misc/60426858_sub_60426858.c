/* sub_60426858
 * address: 0x60426858   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n64 __fastcall sub_60426858(_DWORD *a1, float *a2, unsigned int a3)
{
  char v3; // r12
  int v4; // r5
  int v6; // r1
  unsigned __int16 *v7; // r2
  unsigned int v8; // r4
  int v9; // r0
  __n64 result; // d0
  int v11; // s2
  int v12; // s3

  v4 = 0;
  if ( a3 >= 0xB )
    a3 = 0;
  v6 = a1[a3 + 4503];
  if ( v6 < 0 )
  {
    result.n64_u32[0] = 1.0;
    result.n64_u32[1] = 1.0;
    *a2 = 1.0;
    a2[1] = 1.0;
    a2[2] = 1.0;
    a2[3] = 1.0;
  }
  else
  {
    v7 = (unsigned __int16 *)a1[4290];
    v8 = *(__int16 *)dword_60CD09C0;
    if ( a1[4289] > v8 )
      v7 += 2 * v8;
    if ( v7[1] > v6 )
      v4 = *(_DWORD *)(a1[4292] + 4 * (*v7 + v6));
    if ( ((unsigned int)&dword_60C9BEF4 & ~(1614964952 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BEF4) )
    {
      dword_60C9BEF0 = (int)&off_60BFA424;
      _cxa_guard_release(&dword_60C9BEF4);
    }
    v9 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v4 + 36))(v4, &dword_60C9BEF0);
    if ( v9 )
      v9 = v4;
    result.n64_f64[0] = sub_6090B1D8(v9 + 184, FIELD_F32(v9, 212));
    *(double *)a2 = result.n64_f64[0];
    *((_DWORD *)a2 + 2) = v11;
    *((_DWORD *)a2 + 3) = v12;
  }
  return result;
}
