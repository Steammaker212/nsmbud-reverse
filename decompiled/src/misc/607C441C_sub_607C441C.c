/* sub_607C441C
 * address: 0x607C441C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C441C(_DWORD *a1)
{
  int result; // r0
  _DWORD *v3; // r4
  int v4; // t1
  int v5; // r1

  sub_607743D8((int)a1);
  a1[3014] = 0;
  a1[2490] = 0;
  a1[301] &= ~0x800000u;
  a1[306] &= 0xFFFF60AB;
  v4 = a1[2840];
  v3 = a1 + 2840;
  result = v4;
  v5 = FIELD_U32(v4, 208);
  if ( (v5 & 0x200) != 0 )
  {
    FIELD_U32(result, 208) = v5 & 0xFFFFFDFF;
    return (*(int (__fastcall **)(_DWORD, float))(*(_DWORD *)*v3 + 92))(*v3, 0.0);
  }
  return result;
}
