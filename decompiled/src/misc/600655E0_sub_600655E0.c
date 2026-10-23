/* sub_600655E0
 * address: 0x600655E0   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600655E0(int a1)
{
  _BYTE *v2; // r5
  char v3; // r12
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r4

  v2 = (_BYTE *)(a1 + 6100);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6100));
  if ( v2[32] )
    j_ModelWrapper_updateAnims(FIELD_U32(a1, 6104));
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v5 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v5 )
    v4 += 4 * v5;
  if ( (*(_BYTE *)(*(_DWORD *)v4 + 28) & 0x10) != 0 )
  {
    v6 = FIELD_U32(EnemyCounterMaybe_instance, 24);
    if ( ((unsigned int)&dword_60C81200 & ~(1611028056 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C81200) )
    {
      dword_60C811FC = (int)&off_60BC210C;
      _cxa_guard_release(&dword_60C81200);
    }
    if ( v6 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C811FC) == 1 )
        FIELD_U8(v6, 6217) = 1;
    }
  }
}
