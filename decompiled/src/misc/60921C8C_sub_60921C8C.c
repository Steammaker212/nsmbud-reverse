/* sub_60921C8C
 * address: 0x60921C8C   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60921C8C(unsigned __int8 *a1)
{
  int v2; // r1
  void *v3; // r0
  bool v4; // zf

  *(_DWORD *)a1 = &off_60C5D70C;
  *((_DWORD *)a1 + 1) = 0;
  *((_DWORD *)a1 + 3) = 0;
  *((_DWORD *)a1 + 5) = 0;
  *((_DWORD *)a1 + 7) = 0;
  *((_DWORD *)a1 + 9) = 0;
  *((_DWORD *)a1 + 11) = 0;
  *((_DWORD *)a1 + 13) = 0;
  *((_DWORD *)a1 + 15) = 0;
  *((_DWORD *)a1 + 17) = 0;
  *((_DWORD *)a1 + 19) = 0;
  *((_DWORD *)a1 + 21) = 0;
  *((_DWORD *)a1 + 23) = 0;
  *((_DWORD *)a1 + 25) = 0;
  *((_DWORD *)a1 + 27) = 0;
  *((_DWORD *)a1 + 29) = 0;
  *((_DWORD *)a1 + 31) = 0;
  v2 = *((_DWORD *)a1 + 33);
  if ( v2 )
    memset(*((void **)a1 + 34), 0, 4 * v2);
  v3 = (void *)a1[140];
  v4 = ((unsigned __int8)v3 & 2) == 0;
  a1[140] = (unsigned __int8)v3 & 0xFE;
  if ( ((unsigned __int8)v3 & 2) != 0 )
  {
    v3 = *((void **)a1 + 34);
    v4 = v3 == 0;
  }
  if ( !v4 )
    operator_delete_8DE3FC(v3);
  operator_delete(a1);
}
