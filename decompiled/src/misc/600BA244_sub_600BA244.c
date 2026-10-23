/* sub_600BA244
 * address: 0x600BA244   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600BA244(_DWORD *a1)
{
  unsigned int v1; // r1
  int v2; // r4
  void (*v3)(void); // r2
  int v5; // r12
  int v6; // r3
  int v7; // r2

  v1 = a1[718];
  if ( (v1 & 0x11) == 1 || (v1 & 0x200) != 0 )
  {
    v3 = *(void (**)(void))(*a1 + 296);
    goto LABEL_10;
  }
  if ( (v1 & 0x10410) != 0x400 && (v1 & 0x20000) == 0 )
  {
    if ( (v1 & 0x440000) == 0 || (v1 & 0x10000000) != 0 )
    {
      v2 = 0;
      v5 = v1 >> 30;
      v6 = 0;
      if ( v1 >> 30 )
        v5 = 1;
      if ( (v1 & 0x20000000) == 0 )
        v6 = 1;
      v7 = v1 & 0x880000;
      if ( (v1 & 0x880000) != 0 )
        v7 = 1;
      if ( !(v7 & v6 | v5) || (v1 & 0x10) != 0 )
        return v2;
    }
    else
    {
      v2 = 0;
      if ( (v1 & 0x10) != 0 )
        return v2;
    }
    v3 = *(void (**)(void))(*a1 + 296);
LABEL_10:
    v3();
    return 1;
  }
  (*(void (__fastcall **)(_DWORD *, int))(*a1 + 296))(a1, 1);
  return 1;
}
