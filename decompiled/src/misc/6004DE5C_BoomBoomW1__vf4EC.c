/* BoomBoomW1__vf4EC
 * address: 0x6004DE5C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
float __fastcall BoomBoomW1__vf4EC(int a1)
{
  int v2; // r0

  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 716))(a1) == 1 )
  {
    v2 = 7860;
  }
  else if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 720))(a1) == 1 )
  {
    v2 = 7876;
  }
  else
  {
    v2 = 7892;
  }
  return *(float *)(a1 + v2);
}
