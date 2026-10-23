/* sub_60136C70
 * address: 0x60136C70   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60136C70(unsigned int *a1, int a2)
{
  int (__fastcall ***v3)(_DWORD, int *); // r4
  char v4; // r12
  _BYTE *v5; // r5

  sub_6000B690(a1, a2);
  v3 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[1]);
  if ( ((unsigned int)&dword_60C823C4 & ~(1611885740 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C823C4) )
  {
    FireballBase_RTTI = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C823C4);
  }
  if ( v3 )
  {
    v5 = (_BYTE *)(**v3)(v3, &FireballBase_RTTI);
    if ( v5 )
      v5 = v3;
  }
  else
  {
    v5 = 0;
  }
  (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)v5 + 72))(v5);
  (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)v5 + 296))(v5);
  v5[6240] = 1;
  return 1;
}
