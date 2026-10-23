/* sub_602F4160
 * address: 0x602F4160   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602F4160(unsigned __int8 *a1)
{
  int v1; // r1
  unsigned int v2; // r5
  unsigned int *v3; // r4
  int v4; // r7
  char v5; // r12

  v1 = *(__int16 *)(*((_DWORD *)a1 + 14) + 2);
  if ( *((__int16 *)a1 + 32) < v1 )
  {
    *((_WORD *)a1 + 32) = v1;
    *((_WORD *)a1 + 33) = v1;
  }
  v2 = *a1;
  if ( v2 >= 0xC )
    v2 = 12;
  if ( v2 )
  {
    v3 = (unsigned int *)(a1 + 4);
    do
    {
      if ( *v3 )
      {
        v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *v3);
        if ( ((unsigned int)&dword_60C7B39C & ~(1613709832 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
        {
          dword_60C7B398 = (int)&off_60BC00E0;
          _cxa_guard_release(&dword_60C7B39C);
        }
        if ( v4 )
        {
          if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C7B398) == 1 )
            FIELD_U8(v4, 7524) = 0;
        }
      }
      ++v3;
      --v2;
    }
    while ( v2 );
  }
}
