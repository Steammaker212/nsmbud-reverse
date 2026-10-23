/* sub_608C3F88
 * address: 0x608C3F88   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C3F88(_DWORD *a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r6

  v2 = (_DWORD *)a1[132];
  if ( v2 != a1 + 131 )
  {
    do
    {
      v3 = (_DWORD *)v2[1];
      (*(void (**)(void))(*(v2 - 1) + 16))();
      v2 = v3;
    }
    while ( v3 != a1 + 131 );
  }
  a1[156] = 0;
  a1[147] = 0;
  a1[148] = 0;
  a1[149] = 0;
  a1[150] = 0;
  a1[146] = 0;
  return 0;
}
