/* sub_6024CD34
 * address: 0x6024CD34   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6024CD34(int a1)
{
  int v1; // r5
  int i; // r4
  unsigned int v3; // r1
  _BYTE *v4; // r7
  char v5; // r12

  v1 = a1 + 15424;
  for ( i = 0; i != 4; ++i )
  {
    v3 = *(_DWORD *)(v1 + 4 * i);
    if ( v3 )
    {
      v4 = (_BYTE *)ActorMgrRelated_getById(ActorMgr__instance + 27168, v3);
      if ( ((unsigned int)dword_60C8DD54 & ~(1613024704 << v5) & 1) == 0 && _cxa_guard_acquire(dword_60C8DD54) )
      {
        dword_60C8DD50 = (int)&off_60BC04AC;
        _cxa_guard_release(dword_60C8DD54);
      }
      if ( v4 && (**(int (__fastcall ***)(_BYTE *, int *))v4)(v4, &dword_60C8DD50) == 1 )
      {
        if ( v4[6324] )
          (*(void (__fastcall **)(_BYTE *, int *))(*(_DWORD *)v4 + 192))(v4, &dword_60C91584);
      }
    }
  }
}
