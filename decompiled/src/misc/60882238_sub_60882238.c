/* sub_60882238
 * address: 0x60882238   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60882238()
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
  (*(void (__fastcall **)(int, int))(*(_DWORD *)dword_60CC7FE4 + 12))(dword_60CC7FE4, dword_60CC7FF0);
  dword_60CC7FF0 = 0;
  dword_60CC7FF4 = 0;
  return 0;
}
