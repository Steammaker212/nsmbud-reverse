/* sub_60785414
 * address: 0x60785414   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60785414(int a1, int a2)
{
  char v2; // r12
  bool v3; // zf
  int (__fastcall ***v4)(_DWORD, int *); // r4

  if ( a2 )
  {
    v3 = (FIELD_U8(a2, 2545) & 2) == 0;
    if ( (FIELD_U8(a2, 2545) & 2) == 0 )
      v3 = (FIELD_U32(a2, 2548) & 0x18000) == 0;
    if ( !v3 )
    {
      v4 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 144);
      if ( ((unsigned int)dword_60CC42F8 & ~(1618498632 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CC42F8) )
      {
        dword_60CC42F4 = (int)&off_60BC00BC;
        _cxa_guard_release(dword_60CC42F8);
      }
      if ( v4 )
      {
        if ( (**v4)(v4, &dword_60CC42F4) == 1 )
          SE_OBJ_PNGN_ICE_BREAK_ref_785B04(v4);
      }
    }
  }
}
