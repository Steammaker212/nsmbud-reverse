/* sub_6015BC8C
 * address: 0x6015BC8C   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6015BC8C(int a1, int a2, int a3)
{
  char v3; // r12
  int v4; // r5

  v4 = FIELD_U32(a2, 144);
  if ( ((unsigned int)&dword_60C7B394 & ~(1612037288 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B394) )
  {
    CollisionActor_RTTI = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B394);
  }
  if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &CollisionActor_RTTI) == 1 )
    return (*(int (__fastcall **)(int, int))(*(_DWORD *)v4 + 168))(v4, a3);
  else
    return 0;
}
