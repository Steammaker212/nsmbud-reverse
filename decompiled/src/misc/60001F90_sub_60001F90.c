/* sub_60001F90
 * address: 0x60001F90   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60001F90(int a1, int a2)
{
  int v2; // r6
  bool v3; // zf
  int v5; // r4
  char v6; // r12

  v3 = a2 == 0;
  v5 = 0;
  if ( a2 )
  {
    v2 = FIELD_U32(a2, 144);
    v3 = v2 == 0;
  }
  if ( !v3 )
  {
    if ( Actor__getProfileId((Actor *)v2) == 362 )
    {
      j_SE_OBJ_PNGN_ICE_BREAK_ref_36CFB4(v2, a1);
      return 1;
    }
    if ( Actor__getProfileId((Actor *)v2) == 237 )
    {
      j_SE_OBJ_PNGN_ICE_BREAK_ref_785B04(v2);
      return 1;
    }
    if ( ((unsigned int)&dword_60C7B39C & ~(1610620944 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
    {
      dword_60C7B398 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C7B39C);
    }
    if ( (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C7B398) == 1 )
    {
      sub_602EE7B8(v2, FIELD_F32(v2, 108) < FIELD_F32(a1, 108), FIELD_S8(a1, 84));
      return 1;
    }
  }
  return v5;
}
