/* sub_6024C10C
 * address: 0x6024C10C   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6024C10C(int a1)
{
  int v2; // r5
  int i; // r4
  unsigned int v4; // r1
  _BYTE *v5; // r7
  char v6; // r12

  sub_602C340C();
  v2 = a1 + 15424;
  for ( i = 0; i != 4; ++i )
  {
    v4 = *(_DWORD *)(v2 + 4 * i);
    if ( v4 )
    {
      v5 = (_BYTE *)ActorMgrRelated_getById(ActorMgr__instance + 27168, v4);
      if ( ((unsigned int)dword_60C8DD54 & ~(1613021588 << v6) & 1) == 0 && _cxa_guard_acquire(dword_60C8DD54) )
      {
        dword_60C8DD50 = (int)&off_60BC04AC;
        _cxa_guard_release(dword_60C8DD54);
      }
      if ( v5 && (**(int (__fastcall ***)(_BYTE *, int *))v5)(v5, &dword_60C8DD50) == 1 )
      {
        if ( v5[6324] )
          (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)v5 + 72))(v5);
      }
    }
  }
}
