/* sub_600E4E3C
 * address: 0x600E4E3C   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_600E4E3C(int a1)
{
  char v1; // r12
  int v2; // r4
  float v3; // s16

  v2 = FIELD_U32(a1, 56);
  if ( ((unsigned int)&dword_60C84B44 & ~(1611550296 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C84B44) )
  {
    dword_60C84B40 = (int)&off_60BC8314;
    _cxa_guard_release(&dword_60C84B44);
  }
  v3 = 2.0;
  if ( v2
    && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C84B40) == 1
    && !(*(int (__fastcall **)(int))(*(_DWORD *)v2 + 716))(v2)
    && (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 720))(v2) != 1 )
  {
    return 4.25;
  }
  return v3;
}
