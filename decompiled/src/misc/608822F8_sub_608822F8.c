/* sub_608822F8
 * address: 0x608822F8   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_608822F8()
{
  int v0; // r4

  if ( dword_60CC7FF4 >= 1 )
  {
    v0 = 0;
    do
    {
      (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)dword_60CC7FE8 + 12))(
        dword_60CC7FE8,
        *(_DWORD *)(dword_60CC7FF0 + 4 * v0));
      *(_DWORD *)(dword_60CC7FF0 + 4 * v0++) = 0;
    }
    while ( v0 < dword_60CC7FF4 );
  }
  dword_60CC7FF4 = 0;
  return &dword_60CC7FF4;
}
