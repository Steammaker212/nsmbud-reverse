/* sub_607DD4B4
 * address: 0x607DD4B4   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607DD4B4(int a1)
{
  int v2; // r6
  void (__fastcall ***v3)(_DWORD); // r5

  if ( dword_60CC5764 )
    dword_60CC5764(a1);
  if ( FIELD_S32(a1, 472) >= 1 )
  {
    v2 = 0;
    do
    {
      v3 = *(void (__fastcall ****)(_DWORD))(FIELD_U32(a1, 480) + 4 * v2);
      (**v3)(v3);
      ++v2;
      *v3 = *(void (__fastcall ***)(_DWORD))(a1 + 484);
      FIELD_U32(a1, 484) = v3;
    }
    while ( v2 < FIELD_U32(a1, 472) );
  }
  FIELD_U32(a1, 472) = 0;
  if ( nn__hid__VibrationPlayer__IsLoaded_const(*(nn__hid__VibrationPlayer **)(a1 + 464)) == 1 )
    nn__hid__VibrationPlayer__Unload(*(nn__hid__VibrationPlayer **)(a1 + 464));
  return sub_607DCA20(a1);
}
