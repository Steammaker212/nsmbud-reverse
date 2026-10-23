/* sub_607854D4
 * address: 0x607854D4   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607854D4(int a1, int a2)
{
  char v2; // r12
  bool v3; // zf
  int v4; // r2
  bool v5; // zf
  bool v6; // zf
  int (__fastcall ***v7)(_DWORD, int *); // r4

  if ( a2 )
  {
    v3 = (FIELD_U8(a2, 2529) & 2) == 0;
    if ( (FIELD_U8(a2, 2529) & 2) != 0 )
      v3 = (FIELD_U8(a2, 2537) & 2) == 0;
    if ( !v3 )
      goto LABEL_13;
    v4 = FIELD_U32(a2, 2532);
    v5 = (v4 & 0x10000) == 0;
    if ( (v4 & 0x10000) != 0 )
      v5 = (FIELD_U8(a2, 2542) & 1) == 0;
    if ( !v5 )
      goto LABEL_13;
    v6 = (FIELD_U32(a2, 2532) & 0x8000) == 0;
    if ( (v4 & 0x8000) != 0 )
      v6 = (FIELD_U8(a2, 2541) & 0x80) == 0;
    if ( !v6 )
    {
LABEL_13:
      v7 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 144);
      if ( ((unsigned int)dword_60CC42F8 & ~(1618498860 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CC42F8) )
      {
        dword_60CC42F4 = (int)&off_60BC00BC;
        _cxa_guard_release(dword_60CC42F8);
      }
      if ( v7 )
      {
        if ( (**v7)(v7, &dword_60CC42F4) == 1 )
          SE_OBJ_PNGN_ICE_BREAK_ref_785B04(v7);
      }
    }
  }
}
